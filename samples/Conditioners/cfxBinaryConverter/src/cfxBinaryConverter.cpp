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
// COLLADA_FX Binary Converter
// Written by Andrew Lorino, Greg Corson
// 


#define VERSION 1		// Version number of the tool (integer)

// System includes

#include <stdio.h>
#include <cstdlib>
#include <iostream>

// Collada API includes
#include <dae.h>
#include <dae/daeElement.h>
#include <dom/domConstants.h>
#include <dom/domCOLLADA.h>
#include <dae/domAny.h>

#include <cfxLoader.h>
#include <cfxEffect.h>
#include <cfxMaterial.h>

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

	string 
		input_file,		// Input COLLADA file name from command line is stored here
		output_file,
		crtOutput_file;	// Output COLLADA file name from command line is stored here
	bool crtConvert = false;

	// Initialize the command line options processor
	// Help text is automatically generated

	CommandLineOptions* clo = new CommandLineOptions();
	clo->SetTitle("COLLADA FX Binary converter. Converts profile_CG effects to cfxLoader Binary format.");
	clo->AddExample("conditioner -i infile -o outfile", "Take input and output from files");
 	clo->AddExample("conditioner -i infile -o outfile -crt outfile2/", "Converts effects to binary outfile and conditions infile for loading in COLLADA RT");
	clo->AddSetting("i", "inputfile", "Input COLLADA file name");
	clo->AddSetting("o", "outputfile", "Output COLLADA file name");
	clo->AddSetting("crt", "CRT outputfile", "Prepare file for COLLADA RT" );
	clo->AddSetting("p", "CFX CG Platform", "Specify what platform to convert to binary" );
	clo->AddOption("v", "Verbose output");
	clo->AddOption("V", "Print version");

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
	if (clo->CheckForSetting("crt"))
	{
		crtOutput_file = clo->GetString("crt");
		crtConvert = true;
	}

	if (clo->CheckForSetting("p"))
	{
		cfxLoader::setPlatformString( clo->GetString("p") );
	}

	// Should we be verbose?

	if(clo->CheckForOption("v")) 
	{
		verbose = true;
	}

	DAE *dae;
	daeInt error;

	//read in effects
	std::map< std::string, cfxEffect* > effects;
	std::map< std::string, cfxMaterial* > materials;
	CGcontext context = cgCreateContext();
	if ( crtConvert )
	{
		dae = new DAE();
		if (dae == NULL)
		{
			cerr<<"Unable to create COLLADA DOM object!\n";
			exit(-1);
		}
		if(verbose)	cerr<<"reading from "<<input_file<<"\n"; 
		error = dae->load(input_file.c_str());
		if (error != DAE_OK)
		{
			cerr<<"load failed "<<daeErrorString(error)<<"\n";
			delete dae;
			DAE::cleanup();
			exit(-1);
		}
		if( !cfxLoader::loadMaterialsAndEffects( dae, materials, effects, context ) )
		{
			cerr<<"Unable to load Effects!\n";
			delete dae;
			DAE::cleanup();
			exit(-1);
		}
		
		domCOLLADA *dom = dae->getDom( input_file.c_str() );
		if ( dom == NULL )
		{
			cerr << "Couldn't find COLLADA element!\n";
			exit(-1);
		}

		//Remove Effects from COLLADA file
		unsigned int currentLib = 0;
		while( currentLib < dom->getLibrary_effects_array().getCount() )
		{
			domLibrary_effects *lib = dom->getLibrary_effects_array()[currentLib];
			unsigned int currentEffect = 0;
			while ( currentEffect < lib->getEffect_array().getCount() )
			{
				// Get the next effect element
				domEffect *effectElement = lib->getEffect_array()[currentEffect];
				unsigned int currentProfile = 0;
				while ( currentProfile < effectElement->getFx_profile_abstract_array().getCount() )
				{
					domFx_profile_abstract* profileElement = effectElement->getFx_profile_abstract_array().get(currentProfile);  
					daeString profileName = profileElement->getTypeName();
					if (strcmp(profileName, COLLADA_ELEMENT_PROFILE_COMMON) == 0)
					{
						//check next
						currentProfile++;
					}
					else 
					{
						//remove the profile
						daeElement::removeFromParent( profileElement );
					}
				}
				if ( effectElement->getFx_profile_abstract_array().getCount() == 0 ) 
				{
					//empty effect - no profiles
					daeElement::removeFromParent( effectElement );
					continue;
				}
				currentEffect++;
			}
			if ( lib->getEffect_array().getCount() == 0 ) 
			{
				//if no effects in the lib remove it
				daeElement::removeFromParent( lib );
				continue;
			}
			currentLib++;
		}

		//Remove Materials from COLLADA file
		currentLib = 0;
		while( currentLib < dom->getLibrary_materials_array().getCount() )
		{
			domLibrary_materials *lib = dom->getLibrary_materials_array()[currentLib];
			unsigned int currentMat = 0;
			while ( currentMat < lib->getMaterial_array().getCount() )
			{
				// Get the next material element
				domMaterial *matElement = lib->getMaterial_array()[currentMat];
				
				daeURI tempURI(matElement->getInstance_effect()->getUrl().getURI());
				tempURI.setContainer( matElement->getInstance_effect() );
                tempURI.resolveElement();
				if ( tempURI.getElement() == NULL )
				{
					//the effect element has been removed so remove the material
					daeElement::removeFromParent( matElement );
					continue;
				}
				currentMat++;
				
			}
			if ( lib->getMaterial_array().getCount() == 0 ) 
			{
				//if no material in the lib remove it
				daeElement::removeFromParent( lib );
				continue;
			}
			currentLib++;
		}

		//Add the extra element to tell COLLADA RT to load the binary
		domExtra *extra = (domExtra*)dom->createAndPlace( COLLADA_ELEMENT_EXTRA );
		extra->setType( "cfxBinary" );
		domTechnique *teq = (domTechnique*)extra->createAndPlace( COLLADA_ELEMENT_TECHNIQUE );
		teq->setProfile( "COLLADA_RT" );
		domAny *any = (domAny*)teq->createAndPlace( "cfxBinary" );
		any->setAttribute( "url", output_file.c_str() );

		cerr<<"writing COLLADA RT conditioned file to "<<crtOutput_file<<"\n";
		dae->saveAs( crtOutput_file.c_str(), input_file.c_str(), true );
		
	}
	else
	{
		if ( !cfxLoader::loadMaterialsAndEffectsFromFile( input_file, materials, effects, context ) )
		{
			cerr<<"Unable to load Effects!\n";
			exit(-1);
		}
	}


	cerr<<"writing Binary to "<<output_file<<"\n";
	cfxLoader::saveBinFile( output_file, materials, effects, true );

#if 0 //For testing you may want to load the newly saved file back in right away
	cerr<<"loading binary file"<<output_file<<"\n";
	effects.clear();
	cfxLoader::loadMaterialsAndEffectsFromBinFile( output_file, materials, effects, NULL );
#endif

	// Remove this pause when testing is done
//	cerr<<"press return to continue";
//	getchar();

	// Exit with success
	return 0;

}

