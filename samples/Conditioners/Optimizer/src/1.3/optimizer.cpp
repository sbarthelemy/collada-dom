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
// COLLADA Cache Optimizer Conditioner 1
// Written by Greg Corson
// 
// This conditioner is a sample of how to take COLLADA data and optimize the primitives
// to improve the vertex cache hit rate.  This program only works with <triangles> elements
// and works by re-arranging the polygon order, no other changes are made.
//

#define VERSION 1		// Version number of the tool (integer)

// System includes

#include <stdio.h>
#include <cstdlib>
#include <iostream>
//#include <crtdbg.h>
#include <map>
#include <list>

// Collada API includes

#include "dae.h" 
#include "dom/domCOLLADA.h"
#include "packedVertexIndex.h"

// User includes

#include "CommandLineOptions.h"

// Initialize other stuff and setup any required namespaces

bool 
	verbose=false;		// If this is true, print progress info, otherwise stay quiet

using namespace std;

#define MAX_INPUTS 10  // Maximum number of inputs per polygon (this should really be dynamic)

class inputInfo
{
public:
	inputInfo();
	virtual ~inputInfo();

	void allocateData(int size);

	domFloat_array 
		*output;		// We put our output data in this array as we deindex (this is the original source, which has been erased)
	domAccessor 
		*accessor;		// The accessor for this input
	float 
		*data;			// This is a copy of the raw input data
	int 
		stride;
};
inputInfo::inputInfo()
{
	output = NULL;
	accessor = NULL;
	data = NULL;
	stride = 0;
}
inputInfo::~inputInfo()
{
	if(data != NULL)
		delete data;
}
void inputInfo::allocateData(int size)
{
	data = new float[size];
}
//--------------------------------------------------------------------------------
class simpleTriangle
{
public:
	int indices[3]; // indices for the triangle
};
//--------------------------------------------------------------------------------
// Class to simulate operation of a vertex cache
// This is a simple version using a map to store the cache.  For small cache sizes
// a map seems to be faster than a hash_map.
// This simulates a simple FIFO cache with storage for a fixed number of vertices
// regardless of their size.  A future version of this tool will more accurately
// model the cache including replacement policies and vertex size.
class vertexCache
{
public:
	vertexCache(int size);
	virtual ~vertexCache();

	int costTriangle(simpleTriangle &tri);
	int addTriangle(simpleTriangle &tri);
	int addVertex(int vertexNumber);
	int costVertex(int vertexNumber);

	map<int,int> cacheState;
	unsigned int cacheSize;
	int cacheMisses;
	int cacheHits;
};
vertexCache::vertexCache(int size)
{
	cacheSize = size;
	cacheMisses = 0;
	cacheHits = 0;
}
vertexCache::~vertexCache()
{
}
// Figure the cost of a vertex, 1 indicates a cache miss, 0 a hit
int vertexCache::costVertex(int vertexNumber)
{
	if(cacheState.find(vertexNumber) != cacheState.end())
	{
		return(0); // Vertex was already in the cache
	}
	else
	{
		return(1);
	}
}
// Try adding a vertex to the cache, return the cost.  1 indicates there was a cache miss.
int vertexCache::addVertex(int vertexNumber)
{
	if(costVertex(vertexNumber) == 0)
	{
		// Already in the cache
		cacheHits ++;
		return(0);
	}
	else
	{
		// FIFO cache behavior, add new vertex
		cacheState.insert(make_pair(vertexNumber,cacheMisses));
		// Remove oldest vertex if cache is full
		if(cacheState.size() > cacheSize)
		{
			map<int,int>::iterator findme = cacheState.begin();
			map<int,int>::iterator removeme = findme;
			findme++;
			while(findme != cacheState.end())
			{
				if(findme->second < removeme->second)
				{
					removeme = findme;
				}
				findme++;
			}
			cacheState.erase(removeme);
		}
		cacheMisses++;
		return(1);
	}
}
// Add a whole triangle to the cache and return the cost
int vertexCache::addTriangle(simpleTriangle &tri)
{
	return(addVertex(tri.indices[0]) + addVertex(tri.indices[1]) + addVertex(tri.indices[2]));
}
// Figure the cost of adding a triangle to the cache
int vertexCache::costTriangle(simpleTriangle &tri)
{
	return(costVertex(tri.indices[0]) + costVertex(tri.indices[1]) + costVertex(tri.indices[2]));
}
//--------------------------------------------------------------------------------
// Mainline for the conditioner
// In this case all the work is done in the mainline.
int main(int argc, char* argv[])
{
	int
		cache_size,		// vertex cache size to optimize for
		error;			// Holder for error returns

	string 
		input_file,		// Input COLLADA file name from command line is stored here
		output_file,	// Output COLLADA file name from command line is stored here
		prefix;			// The directory prefix to put in front of image file names ie: "textures/"

	// Initialize the command line options processor
	// Help text is automatically generated

	CommandLineOptions* clo = new CommandLineOptions();
	clo->SetTitle("COLLADA Cache Optimizer conditioner, optimize primitives for vertex cache hits");
	clo->AddExample("conditioner -i infile -o outfile", "Take input and output from files");
	clo->AddSetting("i", "inputfile", "Input COLLADA file name");
	clo->AddSetting("o", "outputfile", "Output COLLADA file name");
	clo->AddSetting("c", "cachesize", "Number of entries in the vertex cache (default 32)");
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

	// Check for cache size setting

	if(clo->CheckForSetting("c"))
	{
		cache_size = clo->GetInt("c");
	}
	else
	{
		cache_size = 32;
	}

	// Should we be verbose?

	if(clo->CheckForOption("v")) 
	{
		verbose = true;
	}

//	_CrtMemState start, dae, dom, end;
//	_CrtMemCheckpoint(&start);
//	_CrtMemDumpStatistics( &start );

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

	unsigned int geometryElementCount = input->getDatabase()->getElementCount(NULL, "geometry", NULL);
	if(verbose)	cerr<<"There are "<<geometryElementCount<<" geometry elements in this file\n"; 

	// Iterate over all the geometry elements, each one is optimized individually

	for(unsigned int currentGeometry = 0; currentGeometry < geometryElementCount; currentGeometry++)
	{
		// Get the next geometry element
		domGeometry *thisGeometry;
		error = input->getDatabase()->getElement((daeElement**)&thisGeometry,currentGeometry, NULL, "geometry");
		
		// Get the geometry element's mesh
		domMesh *thisMesh = thisGeometry->getMesh();

		// Loop over all the triangle elements in this mesh
		int trianglesElementCount = (int)(thisMesh->getTriangles_array().getCount());
		if(verbose)	cerr<<"There are "<<trianglesElementCount<<" triangle elements in this geometry\n";
		for(int currentTriangles = 0; currentTriangles < trianglesElementCount; currentTriangles++)
		{
			// Get the next triangles out of the mesh
			domTriangles *thisTriangles = thisMesh->getTriangles_array().get(currentTriangles);  
			
			// Get count of inputs and primitives
			// Remember that for triangles a <p> tag can contain multiple triangles
			int inputCount			= (int)(thisTriangles->getInput_array().getCount());
			int numberOfPrimitives	= (int)(thisTriangles->getP_array().getCount());

			// Make a new vertex cache
			
			vertexCache beforeCache(cache_size);
			int totalVertices = 0;
			list<simpleTriangle> inputTriangles;
			list<simpleTriangle> outputTriangles;

			// Iterate over all the primitives and save them in "inputTriangles"
			for(int currentPrimitive = 0; currentPrimitive < numberOfPrimitives; currentPrimitive++)
			{
				domTriangles::domP * thisPrimitive = thisTriangles->getP_array()[currentPrimitive];

				int indexCount = (int)(thisPrimitive->getValue().getCount());
				int currentIndex = 0;
				// Simulate operation of a vertex cache, the file has already been deindexed
				// so we only look at the first index of each vertex, all the others will be the same
				simpleTriangle aTriangle;
				for(int currentIndex = 0; currentIndex < 3; currentIndex++)
				{
					aTriangle.indices[currentIndex] = thisPrimitive->getValue()[currentIndex*inputCount];
					beforeCache.addVertex(thisPrimitive->getValue()[currentIndex*inputCount]);
					totalVertices++;
				}
				inputTriangles.push_back(aTriangle);
			}
			if(verbose) cerr<<"Triangles "<<currentTriangles<< " had "<<beforeCache.cacheHits<<" cache hits and "<<beforeCache.cacheMisses<<" misses "<<((float)beforeCache.cacheHits/(float)totalVertices)*100.0<<"% hit rate\n";

			// This is a simple cache optimizer, it finds the triangle with the lowest cache cost and moves to the 
			// output triangles array, updating the cache in the process.
			vertexCache afterCache(cache_size);
			// Move the first triangle over to the output array to "seed" the cache
			outputTriangles.push_back(*(inputTriangles.begin()));
			inputTriangles.pop_front();
			afterCache.addTriangle(*(outputTriangles.begin()));
			// Repeatedly scan the input array for the lowest cost triangle and move it
			// Worst case this is an n-squared loop but there are some short cuts for 
			// triangles that are totally in-cache.
			while(inputTriangles.size() > 0)
			{
				int lowestCost = 999;
				int cost;
				list<simpleTriangle>::iterator lowestCostTri;
				// Scan the remaining input triangles to find the lowest cost one
				for(list<simpleTriangle>::iterator tri = inputTriangles.begin(); tri != inputTriangles.end(); )
				{
					cost=afterCache.costTriangle(*tri);
					if(cost < lowestCost)
					{
						if(cost == 0)
						{
							// Triangles with zero cost should be moved to output immediately as they don't change the state of the
							// cache or the cost of any unprocessed triangles.
							afterCache.addTriangle(*tri);
							outputTriangles.push_back(*tri);
							tri = inputTriangles.erase(tri);
							continue;
						}
						lowestCostTri = tri;
						lowestCost = cost;
					}
					tri++;
				}
				// Move the lowest cost triangle over to the output array.
				// If there were multiple triangles of cost 1, it might result in better optimization to find
				// what vertex appears the most and add those triangles first.  This could be done by tracking
				// the most frequently missed vertex and adding that vertex to the cache, on the next pass through
				// this loop all the triangles containing that vertex would have a cost of 0 and be added all at once.
				if(lowestCost != 999)
				{
					afterCache.addTriangle(*lowestCostTri);
					outputTriangles.push_back(*lowestCostTri);
					inputTriangles.erase(lowestCostTri);
					}
								}
			if(verbose) cerr<<"Triangles "<<currentTriangles<< " had "<<afterCache.cacheHits<<" cache hits and "<<afterCache.cacheMisses<<" misses "<<((float)afterCache.cacheHits/(float)totalVertices)*100.0<<"% hit rate\n";
			// Rewrite the new order to the output file, this updates it in place
			for(int currentPrimitive = 0; currentPrimitive < numberOfPrimitives; currentPrimitive++)
			{
				domTriangles::domP * thisPrimitive = thisTriangles->getP_array()[currentPrimitive];

				int currentIndex = 0;
				for(int currentIndex = 0; currentIndex < 3; currentIndex++)
					{
					int anIndex = (*(outputTriangles.begin())).indices[currentIndex];
					for(int iCount = 0; iCount < inputCount; iCount++)
						{
						thisPrimitive->getValue()[(currentIndex*inputCount)+iCount] = anIndex;
					}
				}
				outputTriangles.pop_front();
			}
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
	delete input;
	DAE::cleanup();
	return 0;

}

