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
// COLLADA Filename Conditioner 1
// Written by Greg Corson
// 
// This simple conditioner goes throug a COLLADA file and converts all the included
// shaders or images to filenames that are specified relative to the position of the
// COLLADA file.  For example, it could convert all texture references from absolute
// ones to something like "./textures/file.jpg"
//
// This also illustrates the setup and use of the command line option parser, some 
// basic COLLADA API use and can be used as a skeleton for future conditioners.
//
// All the conditioners are basic file-in, file-out tools that do their work quietly
// They are suitable for Windows or Linux command-line use
// They should build on any OS with minimal changes.  Precompiled headers are not used
// on windows because it seems to cause problems with linking the COLLADA API
// They should exit with a negative result code on error.
// All output is on stderr in case we want to make them do file I/O on stdin/stdout like
// a linux filter.
//
// Future features we might want to add to this conditioner
// * support more elements that hold filenames that may need to be modified
// * optionally create the target directory for the files
// * optionally locate and move all files to the target directory
//
// This tool should be kept very simple, converting textures to a specific format (ie: .jpg)
// or resizing textures should probably be done in a different tool.

#define VERSION 2		// Version number of the tool (integer)
#define USE_LIBXMLPLUGIN 0  // Set to 1 to use the LIBXMLPlugin instead of the default

// System includes

#include <stdio.h>
#include <cstdlib>
#include <iostream>

// Collada API includes

#include "dae.h" 
#include "dom/domCOLLADA.h"
#include "dom/domConstants.h"
#include "dom/domFx_include_common.h"

#if USE_LIBXMLPLUGIN
#include "modules/daeLIBXMLPlugin.h"
#include "modules/daeLIBXMLResolver.h"
#endif

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
	output_file,	        // Output COLLADA file name from command line is stored here
	element,		// The element to modify
	prefix;			// The directory prefix to put in front of image file names ie: "textures/"

	bool renameCgfx = false;

    // Initialize the command line options processor
    // Help text is automatically generated

    CommandLineOptions* clo = new CommandLineOptions();
    clo->SetTitle("COLLADA Filename conditioner, convert file names in image elements into relative references");
    clo->AddExample("conditioner -i infile -o outfile", "Take input and output from files");
    clo->AddExample("conditioner -i infile -o outfile -p shaders/", "Prefix all included program files with shaders/");
    clo->AddExample("conditioner -i infile -o outfile -e image -p textures/", "Prefix all image file names with textures/");
    clo->AddSetting("i", "inputfile", "Input COLLADA file name");
    clo->AddSetting("o", "outputfile", "Output COLLADA file name");
    clo->AddSetting("e", "element", "Element to modify, include (default) or image");
    clo->AddSetting("p", "prefix", "Directory prefix to add to file names");
    clo->AddOption("v", "Verbose output");
    clo->AddOption("V", "Print version");
	clo->AddOption("cg", "Rename .cgfx to .cg");

    // Parse the command line options

    clo->Load(argc, argv);

    // If requested, print version and exit

    if(clo->CheckForOption("V"))
	{
	    cerr<<"COLLADA Filename conditioner version "<<VERSION<<"\n";
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

    // Optional prefix to specify which elements to treat

    if(clo->CheckForSetting("e"))
	{
	    element = clo->GetString("e");
	}
    else
	{
	    element = "include";
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

	// Should we change .cgfx file extensions
    if(clo->CheckForOption("cg"))
	{
		renameCgfx = true;
	}

    // Instantiate the DAE object for the input file
	
    DAE *input = new DAE;
	
    // Set the system to use the LIBXML2 file reader plugin.
#if USE_LIBXMLPLUBIN
    input->setDatabase(NULL);
    daeLIBXMLPlugin*	plugin		= new daeLIBXMLPlugin;
    daeLIBXMLResolver*	resolver	= new daeLIBXMLResolver(input->getDatabase(),plugin);
    input->setIOPlugin(plugin);
#endif
    // Load the COLLADA file
	
    if(verbose)	cerr<<"reading from "<<input_file<<"\n"; 
    error = input->load(input_file.c_str());
    if (error != DAE_OK)
	{
	    cerr<<"load failed "<<daeErrorString(error)<<"\n";
	    exit(-1);
	}


    if (element == "include")
	{

	    // How many include elements are there?

	    unsigned int includeTagCount = input->getDatabase()->getElementCount(NULL, COLLADA_ELEMENT_FX_INCLUDE_COMMON, NULL);
	    if(verbose)	cerr<<"There are "<<includeTagCount<<" include elements in this file\n"; 

	    // Process the URI/filename strings on each include element

	    domFx_include_common *thisInclude;  // Pointer to the include element we are currently working on
	    for(unsigned int i=0; i<includeTagCount; i++)
		{
		    // Get the next include element
		    error = input->getDatabase()->getElement((daeElement**)&thisInclude,i, NULL, COLLADA_ELEMENT_FX_INCLUDE_COMMON);
		    if(error != DAE_OK)
			{
			    cerr<<"error "<<daeErrorString(error)<<" getting include element "<<i<<"\n";
			    exit(-1);
			}
		    // If the protocol is something other than "file" don't touch the element
		    //		cerr << "protocol |"<<thisInclude->source.protocol<<"|\n";
		    //		cerr << "filename |"<<thisInclude->source.file<<"|\n";
		    if(strcmp("file", thisInclude->getUrl().getProtocol()) != 0)
			{
			    thisInclude->getUrl().print();
			    cerr<<"protocol for include element "<<i<<" is "<<thisInclude->getUrl().getProtocol()<<" no changes made \n";
			    continue;
			}
			char *_URIfile = (char *)thisInclude->getUrl().getFile();
			if ( renameCgfx && !strcmp( thisInclude->getUrl().getExtension(), "cgfx" ) )
			{
				_URIfile[ strlen( _URIfile ) -2 ] = '\0';
			}

		    // Build the new relative file name and write it back into the DOM
		    // This uses the filename in domInclude.source as parsed by the API
		    string finalname = prefix + _URIfile;
		    //cerr << "protocol "<<thisInclude->source.protocol<<"\n";
		    //cerr << "filename "<<thisInclude->source.file<<"\n";
		    if(finalname.length() != 0)
			{
			    if(verbose)	cerr<<"Include uri "<<thisInclude->getUrl().getURI()<<" converted to "<<finalname<<"\n"; 
			    thisInclude->getUrl().setURI(finalname.c_str());
			}
		    else
			{
			    cerr<<"converting the file name in include element "<<i<<" would result in an empty URI, check input file\n";
			    exit(-1);
			}
		}
	}
    else if (element == "image")
 	{

	    // How many image elements are there?

	    unsigned int imageTagCount = input->getDatabase()->getElementCount(NULL, COLLADA_ELEMENT_IMAGE, NULL);
	    if(verbose)	cerr<<"There are "<<imageTagCount<<" image elements in this file\n"; 

	    // Process the URI/filename strings on each image element

	    domImage *thisImage;  // Pointer to the image element we are currently working on
	    for(unsigned int i=0; i<imageTagCount; i++)
		{
		    // Get the next image element
		    error = input->getDatabase()->getElement((daeElement**)&thisImage,i, NULL, COLLADA_ELEMENT_IMAGE);
		    if(error != DAE_OK)
			{
			    cerr<<"error "<<daeErrorString(error)<<" getting image element "<<i<<"\n";
			    exit(-1);
			}
		    // If the protocol is something other than "file" don't touch the element
		    //		cerr << "protocol |"<<thisImage->source.protocol<<"|\n";
		    //		cerr << "filename |"<<thisImage->source.file<<"|\n";
		    if(strcmp("file", thisImage->getInit_from()->getValue().getProtocol()) != 0)
			{
			    thisImage->getInit_from()->getValue().print();
			    cerr<<"protocol for image element "<<i<<" is "<<thisImage->getInit_from()->getValue().getProtocol()<<" no changes made \n";
			    continue;
			}
		    // Build the new relative file name and write it back into the DOM
		    // This uses the filename in domImage.source as parsed by the API
		    string finalname = prefix + thisImage->getInit_from()->getValue().getFile();
		    //cerr << "protocol "<<thisImage->source.protocol<<"\n";
		    //cerr << "filename "<<thisImage->source.file<<"\n";
		    if(finalname.length() != 0)
			{
			    if(verbose)	cerr<<"Image uri "<<thisImage->getInit_from()->getValue().getURI()<<" converted to "<<finalname<<"\n"; 
			    thisImage->getInit_from()->getValue().setURI(finalname.c_str());
			}
		    else
			{
			    cerr<<"converting the file name in image element "<<i<<" would result in an empty URI, check input file\n";
			    exit(-1);
			}
		}

	}
    else
	{
	    cerr<<"Unsupported element name.  Currently only support include or image.\n";	    
	}

    //------------
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

