/*
 * Copyright 2006 Sony Computer Entertainment Inc.
 *
 * Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 * file except in compliance with the License. You may obtain a copy of the License at:
 * http://research.scea.com/scea_shared_source_license.html
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 * implied. See the License for the specific language governing permissions and limitations under the 
 * License. 
 */
// COLLADA DeIndex Conditioner
// Written by Greg Corson
// 
// This conditioner is a sample of how to take COLLADA data and put it in a form that
// is ready for use with GL vertex arrays (a single index per vertex rather than the
// multiple indices per vertex that COLLADA allows)
//
// To keep the code simple, it has MANY limitations on the format of the input COLLADA
// data and may not be able to read all types of files.  See the readme for more information.
//

// Version 1: initial version which works but has minimal error checking, submitted to FF
#define VERSION 1

// System includes

#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>

// Collada API includes

#include "dae.h" 
#include "dom/domCOLLADA.h"

// User includes

#include "packedVertexIndex.h"
#include "CommandLineOptions.h"

#ifdef _WIN32
strcasecmp (const char * __sz1, const char * __sz2)
   {return _stricmp (__sz1, __sz2);}

strncasecmp (const char * __sz1, const char * __sz2, size_t 
__sizeMaxCompare)
   {return _strnicmp (__sz1, __sz2, __sizeMaxCompare);}
#endif

// Initialize other stuff and setup any required namespaces

bool 
	verbose = false;	// If this is true, print progress info, otherwise stay quiet

using namespace std;

#define MAX_INPUTS 10  // Maximum number of inputs per polygon (this should really be dynamic)

//--------------------------------------------------------------------------------
// This class is used to store and track the sources in the <geometry> that need
// to be deindexed.  
//
// The deindexer copies the original data from the <source> into this class, then
// deletes it from the <source>, preserving all the other information in the source.
// As the program runs, the data in this class is copied back into the <source> in
// a new order.
//
// TODO: It would be better to create a new <source> then deindex directly from the old
// <source> to the new one.  Simplify this class by using clone to copy one subtree of 
// the DOM to another and then do the deindexing.
//
class inputInfo
{
public:
	inputInfo();
	virtual ~inputInfo();

	// Allocate space to store a COLLADA float array in the class
	void 
		allocateData(int size);

	domFloat_array 
		*output;		// This is the location of the (cleared) source array where we put our deindexed data
	domAccessor 
		*accessor;		// The accessor for this input so we can change the count
	domFloat 
		*data;			// This is a copy of the original source data
	int 
		stride;
};
//--------------------------------------------------------------------------------
// Standard constructor
inputInfo::inputInfo()
{
	output = NULL;
	accessor = NULL;
	data = NULL;
	stride = 0;
}
//--------------------------------------------------------------------------------
// Standard destructor
inputInfo::~inputInfo()
{
	// If any memory was allocated, free it
	if(data != NULL)
		delete [] data;
}
//--------------------------------------------------------------------------------
// Allocate space for "size" floats of geometry source data
void inputInfo::allocateData(int size)
{
	data = new domFloat[size];
}
//--------------------------------------------------------------------------------
// Mainline for the conditioner
// In this case all the work is done in the mainline.
int main(int argc, char* argv[])
{
	int
		error;			// Holder for error returns

	string 
		input_file,		// Input COLLADA file name from command line is stored here
		output_file,	// Output COLLADA file name from command line is stored here
		prefix;			// The directory prefix to put in front of image file names ie: "textures/"

	// Initialize the command line options processor
	// Help text is automatically generated

	CommandLineOptions* clo = new CommandLineOptions();
	clo->SetTitle("COLLADA DeIndexer conditioner, deindex geometry");
	clo->AddExample("conditioner -i infile -o outfile", "Take input and output from files");
	clo->AddSetting("i", "inputfile", "Input COLLADA file name");
	clo->AddSetting("o", "outputfile", "Output COLLADA file name");
	clo->AddOption("v", "Verbose output");
	clo->AddOption("V", "Print version");

	// Parse the command line options

	clo->Load(argc, argv);

	// If requested, print version and exit

    if(clo->CheckForOption("V"))
	{
		cerr<<"COLLADA DeIndexing conditioner version "<<VERSION<<"\n";
		exit(-1);
	}

	// Input and output file names are required

	if(clo->CheckForSetting("i"))
	{
		input_file = clo->GetString("i");
	}
	else
	{
		cerr<<"Need to specify an input file name\n";
		exit(-1);
	}
	if(clo->CheckForSetting("o"))
	{
		output_file = clo->GetString("o");
	}
	else
	{
		cerr<<"Need to specify an output file name\n";
		exit(-1);
	}

	// Should we be verbose?

	if(clo->CheckForOption("v")) 
	{
		verbose = true;
	}

	// Instantiate the DAE object for the input file
	
	DAE *input = new DAE;
	
	// Load the COLLADA file
	
	if(verbose)	cerr<<"reading from "<<input_file<<"\n"; 
	error = input->load(input_file.c_str());
	if (error != DAE_OK)
	{
		cerr<<"load failed "<<daeErrorString(error)<<"\n";
		exit(-1);
	}

	// How many <geometry> and <controller> elements are there?

	unsigned int geometryElementCount = input->getDatabase()->getElementCount(NULL, "geometry", NULL);
	if(verbose)	cerr<<"There are "<<geometryElementCount<<" geometry elements in this file\n"; 
	
	// All <triangles> in the geometry are required to have the same set of inputs in the same order
	// This restriction could be removed but might require either breaking up one <geometry> 
	// into several new ones or adding large amounts of padding to some of the sources to force them 
	// to line-up with the deindexed vertices. This would greatly increase the complexity of the code 
	// so we added this restriction to make it easier to follow.
	
	// Iterate over all the geometry elements

	for(unsigned int currentGeometry = 0; currentGeometry < geometryElementCount; currentGeometry++)
	{
		// !!!GAC should put "inputs" into a vector rather than hard allocate it.
		inputInfo inputs[MAX_INPUTS];
		
		// Get the next geometry element
		domGeometry *thisGeometry;
		error = input->getDatabase()->getElement((daeElement**)&thisGeometry,currentGeometry, NULL, "geometry");

		// Get the geometry element's mesh
		domMesh *thisMesh = thisGeometry->getMesh();

		// How many sources are in this mesh?
		int sourcesElementCount = (int)(thisMesh->getSource_array().getCount());
		if(verbose)	cerr<<"Geometry "<< currentGeometry <<" contains "<<sourcesElementCount<<"sources\n";
		
		// Assume that all the <triangles> have the same inputs in the same order, so find all
		// the input sources for the first <triangles> and make copies of them.
		int inputsExpected = (int)(thisMesh->getTriangles_array().get(0)->getInput_array().getCount());
		for(int inputNumber=0; inputNumber < inputsExpected; inputNumber++)
		{
			domSource *thisSource;
			domInputLocalOffset *thisInput = thisMesh->getTriangles_array().get(0)->getInput_array()[inputNumber];
			// Find the source for thisInput
			thisInput->getSource().resolveElement();
			if(strcmp(thisInput->getSemantic(),"VERTEX")==0)
			{
				// The source is indirected through a vertex
				daeElement * thisElement = thisInput->getSource().getElement();
				domVertices * thisVertices = (domVertices*)thisElement; 
				thisVertices->getInput_array().get(0)->getSource().resolveElement();
				thisElement = thisVertices->getInput_array().get(0)->getSource().getElement();
				thisSource = (domSource *)thisElement;
			}
			else
			{
				// We are referencing the source directly
				daeElement * thisElement = thisInput->getSource().getElement();
				thisSource = (domSource *)thisElement;
			}
			// Now get the float array (only read the first one) and copy it into a temporary holder
			domFloat_array * thisArray = thisSource->getFloat_array();
			inputs[inputNumber].output = thisArray;
			inputs[inputNumber].allocateData(thisArray->getCount());
			memcpy(inputs[inputNumber].data, thisArray->getValue().getRawData(), thisArray->getCount()*sizeof(domFloat));
			// Now figure out the stride of the data
			inputs[inputNumber].accessor = thisSource->getTechnique_common()->getAccessor();
			inputs[inputNumber].stride = inputs[inputNumber].accessor->getStride();
			// Now clean out the float array in the source so we can put our rearranged data there later
			thisArray->getValue().clear();
		}

		// As we go we will copy vertices into this object, then add it to a "set" to make sure it is
		// unique.  Every time we find a new unique combination of indices, we fetch the values from
		// the old input sources and write them into the new sources.
		
		packedVertexIndex myVertexIndex(inputsExpected);
		int vertexCount = 0;						// Statistic, how many groups of indices have we processed
		int newIndex = 0;							// This is next free index in the output array of deindexed vertices
        set <packedVertexIndex> uniqueVertices;		// This tracks unique vertex combinations

		// Loop over all the triangle elements in this mesh
		int trianglesElementCount = (int)(thisMesh->getTriangles_array().getCount());
		if(verbose)	cerr<<"There are "<<trianglesElementCount<<" triangle elements in this file\n"; 
		for(int currentTriangles = 0; currentTriangles < trianglesElementCount; currentTriangles++)
		{
			// Get the next triangles out of the mesh
			domTriangles *thisTriangles = thisMesh->getTriangles_array().get(currentTriangles);  
			
			// Get count of inputs and primitives
			// Remember that for triangles a <p> tag can contain multiple triangles
			int inputCount			= (int)(thisTriangles->getInput_array().getCount());
			int numberOfPrimitives	= (int)(thisTriangles->getCount());

			// Iterate over all the primitives to find unique combinations of indices for vertices
			for(int currentPrimitive = 0; currentPrimitive < numberOfPrimitives; currentPrimitive++)
			{
				//domP * thisPrimitive = thisTriangles->getP_array()[currentPrimitive];	
				int currentTriangleIndex = currentPrimitive * 3 * inputCount;
				int currentIndex = 0;
				// Iterate over each group of indices in the primitive that represent a vertex
				while(currentIndex < inputCount * 3 )
				{
					// Make a packedVertexIndex object that we will use to determine if this combination of indices is unique
					int vertexStart=currentIndex;
					for(int k = 0;k<inputCount; k++)
					{
						myVertexIndex.indices[k] = thisTriangles->getP()->getValue()[currentTriangleIndex + currentIndex++];
					}
					// Try to insert this vertex into a set to see if it is unique
					vertexCount++;
					pair<set<packedVertexIndex>::iterator,bool> result = uniqueVertices.insert(myVertexIndex);
					if(result.second)
					{
						// The vertex was unique, get each input value from the (different) indices in the old 
						// source data and copy it to the same index in the new source data.  
						for(int inputNumber=0; inputNumber<inputCount; inputNumber++)
						{
							domFloat *inData = inputs[inputNumber].data + (myVertexIndex.indices[inputNumber] * inputs[inputNumber].stride);
							//domFloat *inCData = inputs[inputNumber].controller_data + (myVertexIndex.indices[inputNumber] * inputs[inputNumber].stride); 
							for(int q=0; q<inputs[inputNumber].stride; q++)
							{
								inputs[inputNumber].output->getValue().append(*(inData++));
							}
						}
						// Now update the indices for this vertex in the primitive, in the new vertex all the
						// indices will be the same
						for(int k = vertexStart;k<vertexStart+inputCount; k++)
						{
							//thisPrimitive->getValue()[k] = newIndex;
							thisTriangles->getP()->getValue()[currentTriangleIndex+k] = newIndex;//result.first->new_index_number;
						}
						result.first->references=1;
						result.first->new_index_number = newIndex++;
					}
					else
					{
						// The vertex was not unique, the inputs have already been deindexed so just update
						// the indices in the primitive.
						for(int k = vertexStart;k<vertexStart+inputCount; k++)
						{
							//thisPrimitive->getValue()[k] = result.first->new_index_number;
							thisTriangles->getP()->getValue()[currentTriangleIndex+k] = result.first->new_index_number;
						}
						result.first->references++;
					}
				}
			}
			if(verbose) cerr<<"Triangles "<<currentTriangles<<" had "<<vertexCount<<" vertices, "<<(int)uniqueVertices.size()<<" were unique "<<newIndex<<"\n";
		}
		
		// Reset the counts on the deindexed source arrays and accessors

		for(int inputNumber = 0; inputNumber<inputsExpected; inputNumber++)
		{
			inputs[inputNumber].output->setCount( newIndex*inputs[inputNumber].accessor->getStride() );
			inputs[inputNumber].accessor->setCount( newIndex );
		}
	}

	// Write the changed file back out

	if(verbose)	cerr<<"writing to "<<output_file<<"\n";
	error = input->saveAs(output_file.c_str());
	if (error != DAE_OK)
	{
		cerr<<"save failed "<<daeErrorString(error)<<"\n";
		exit(-1);
	}

	// Remove this pause when testing is done
	
	//cerr<<"press return to continue";
	//getchar();

	// Exit with success
	delete clo;
	delete input;
	DAE::cleanup();
	return 0;

}

