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


int	Verbose = 0;		// Verbosity level: 0 - no messages  1 - error messages only  2 - everything

using namespace std;


int main(int argc, char* argv[])
{
 int		error;		// Holder for error returns

 string 
		input_file,	// Input COLLADA file name from command line is stored here
		output_file,	// Output COLLADA file name from command line is stored here
		prefix;		// The directory prefix to put in front of image file names ie: "textures/"


// Initialize command line options processor
//
	CommandLineOptions* clo = new CommandLineOptions();
	clo->SetTitle("COLLADA conditioner, collapse animation channels");
	clo->AddExample("conditioner -i infile -o outfile", "Input and output from files");
	clo->AddSetting("i", "inputfile", "Input COLLADA file name");
	clo->AddSetting("o", "outputfile", "Output COLLADA file name");
	clo->AddSetting("p", "prefix", "Directory prefix to add to file names");
	clo->AddOption("v", "Verbose output");
	clo->AddOption("V", "Print version");

// Parse the command line options
//
	clo->Load(argc, argv);

// If requested, print version and exit
//
	if(clo->CheckForOption("V"))
	{
		cerr<<"COLLADA animation channel combiner Version "<<VERSION<<"\n";
		exit(-1);
	}

// Input and output file names are required
//
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

	// Optional prefix to add to all the image file names

	if(clo->CheckForSetting("p"))
	{
		prefix = clo->GetString("p");
	}
	else
	{
		prefix = "";
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

// How many image assets are there?
//
	unsigned int imageTagCount = input->getDatabase()->getAssetCount(NULL, "image", NULL);
	if(verbose)	cerr<<"There are "<<imageTagCount<<" image assets in this file\n"; 

// Process the URI/filename strings on each image asset
//
	domImage*	thisImage;  // Pointer to the image asset we are currently working on

	for(unsigned int i=0; i<imageTagCount; i++)
	{
		// Get the next image asset
		error = input->getDatabase()->getAsset((daeElement**)&thisImage,i, NULL, "image");
		if(error != DAE_OK)
		{
			cerr<<"error "<<daeErrorString(error)<<" getting image asset "<<i<<"\n";
		    exit(-1);
		}

// If the protocol is something other than "file" don't touch the asset
//		cerr << "protocol |"<<thisImage->source.protocol<<"|\n";
//		cerr << "filename |"<<thisImage->source.file<<"|\n";
		if(strcmp("file", thisImage->source.protocol) != 0)
		{
			thisImage->source.print();
			cerr<<"protocol for image asset "<<i<<" is "<<thisImage->source.protocol<<" no changes made \n";
			continue;
		}

// Build the new relative file name and write it back into the DOM
// This uses the filename in domImage.source as parsed by the API
//
		string finalname = prefix + thisImage->source.file;
		//cerr << "protocol "<<thisImage->source.protocol<<"\n";
		//cerr << "filename "<<thisImage->source.file<<"\n";
		if(finalname.length() != 0)
		{
			if(verbose)	cerr<<"Image uri "<<thisImage->source.getURI()<<" converted to "<<finalname<<"\n"; 
			thisImage->source.setURI(finalname.c_str());
		}
		else
		{
			cerr<<"converting the file name in image asset "<<i<<" would result in an empty URI, check input file\n";
			exit(-1);
		}
	}

// Write the changed file back out
//
	if(verbose)	cerr<<"writing to "<<output_file<<"\n";
	error = input->save(output_file.c_str());
	if (error != DAE_OK)
	{
		cerr<<"save failed "<<daeErrorString(error)<<"\n";
		exit(-1);
	}

	// Remove this pause when testing is done
	
	cerr<<"press return to continue";
	getchar();

	// Exit with success

	delete input;
	DAE::cleanup();
	return 0;

}

