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
// COLLADA triangulation conditioner
// Written by Greg Corson
// 
// This is sample code showing how to use the COLLADA API to read a file and convert
// <polygons> to <triangles>.  This is only a sample and NOT a production quality
// tool.  Please see the readme file for limitations.
//

#define VERSION 1		// Version number of the tool (integer)

// System includes

#include <stdio.h>
#include <cstdlib>
#include <iostream>

// Collada API includes

#include "dae.h" 
#include "dom/domCOLLADA.h"

// User includes

#include "CommandLineOptions.h"

// Initialize other stuff and setup any required namespaces

bool 
	verbose=false;		// If this is true, print progress info, otherwise stay quiet

using namespace std;

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
	clo->SetTitle("COLLADA Triangulation conditioner, convert <polygons> to <triangles>");
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
		cerr<<"COLLADA Triangulation conditioner version "<<VERSION<<"\n";
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

	// How many geometry elements are there?

	int geometryElementCount = (int)(input->getDatabase()->getElementCount(NULL, "geometry", NULL));
	if(verbose)	cerr<<"There are "<<geometryElementCount<<" geometry elements in this file\n"; 

	// Loop over all the geometry elements

	for(int currentGeometry = 0; currentGeometry < geometryElementCount; currentGeometry++)
	{
		// Find the next geometry element
		domGeometry *thisGeometry;
		error = input->getDatabase()->getElement((daeElement**)&thisGeometry,currentGeometry, NULL, "geometry");

		// Get the mesh out of the geometry
		domMesh *thisMesh = thisGeometry->getMesh();

		// Loop over all the polygon elements
		int polygonsElementCount = (int)(thisMesh->getPolygons_array().getCount());
		if(verbose)	cerr<<"There are "<<polygonsElementCount<<" polygon elements in this file\n"; 
		for(int currentPolygons = 0; currentPolygons < polygonsElementCount; currentPolygons++)
		{
			// Get the polygons out of the mesh
			// Always get index 0 because every pass through this loop deletes the <polygons> element as it finishes with it
			domPolygons *thisPolygons = thisMesh->getPolygons_array().get(0);  

			// Create a new <triangles> inside the mesh that has the same material as the <polygons>
			domTriangles *thisTriangles = (domTriangles *)thisMesh->createAndPlace("triangles");
			thisTriangles->setCount( 0 );
			thisTriangles->getMaterial().copyFrom(thisPolygons->getMaterial());  // can't use = to copy URLs

			// Give the new <triangles> the same <input> and <parameters> as the old <polygons>
			for(int i=0; i<(int)(thisPolygons->getInput_array().getCount()); i++)
			{
				//domInput* element = (domInput*)thisTriangles->createAndPlace("input");
				//element->setIdx( ((domInput*)thisPolygons->getInput_array()[i])->getIdx() );
				//element->setSemantic( ((domInput*)thisPolygons->getInput_array()[i])->getSemantic() );  // this is not allocating new memory!
				//element->getSource().copyFrom(((domInput*)thisPolygons->getInput_array()[i])->getSource());
				thisTriangles->placeElement( thisPolygons->getInput_array()[i]->clone() );
			}

			for(int i=0; i<(int)(thisPolygons->getParam_array().getCount()); i++)
			{
				//domParam* element = (domParam*)thisTriangles->createAndPlace("param");
				//*element = *thisPolygons->getParam_array()[i];
				thisTriangles->placeElement( thisPolygons->getParam_array()[i]->clone() );
			}
			
			// Get the number of inputs and primitives for the polygons array
			int numberOfInputs = (int)(thisPolygons->getInput_array().getCount());
			int numberOfPrimitives = (int)(thisPolygons->getP_array().getCount());

			// Triangulate all the primitives, this generates one triangle per <p>, might want to change to put multiple triangles per <p> later
			for(int j = 0; j < numberOfPrimitives; j++)
			{
				// Check the polygons for consistancy (some exported files have had the wrong number of indices)
				domPolygons::domP * thisPrimitive = thisPolygons->getP_array()[j];
				
				int elementCount = (int)(thisPrimitive->getValue().getCount());
				if((elementCount%numberOfInputs) != 0)
				{
					cerr<<"Primitive "<<j<<" has an element count "<<elementCount<<" not divisible by the number of inputs "<<numberOfInputs<<"\n";
				}
				else
				{
					int triangleCount = (elementCount/numberOfInputs)-2;
					// Write out the primitives as triangles, just fan using the first element as the base, 1 triangle per <p>
					int idx = numberOfInputs;
					for(int k = 0; k < triangleCount; k++)
					{
						
						domTriangles::domP* p_triangles = (domTriangles::domP*)thisTriangles->createAndPlace("p");
						// First vertex
						for(int l = 0; l < numberOfInputs; l++)
						{
							p_triangles->getValue().append(thisPrimitive->getValue()[l]);
						}
						// Second vertex
						for(int l = 0; l < numberOfInputs; l++)
						{
							p_triangles->getValue().append(thisPrimitive->getValue()[idx + l]);
						}
						// Third vertex
						idx += numberOfInputs;
						for(int l = 0; l < numberOfInputs; l++)
						{
							p_triangles->getValue().append(thisPrimitive->getValue()[idx + l]);
						}
						thisTriangles->setCount(thisTriangles->getCount()+1);
					}
				}
			}

			// Remove the polygons from the mesh
			// This is a new function added after Beta 7 
			thisMesh->removeChildElement(thisPolygons);
			// could also use this
			// daeElement::removeFromParent(thisPolygons);
			// or this
			// thisMesh->polygons_array.remove(thisPolygons);
			// thisMesh->_contents.remove(thisPolygons);
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
	
//	cerr<<"press return to continue";
//	getchar();

	// Exit with success
	delete input;
	DAE::cleanup();
	return 0;

}

