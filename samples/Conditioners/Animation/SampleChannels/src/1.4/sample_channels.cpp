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
//#include "dom/domCOLLADA.h"

// User includes

#include "../../../Common/include/CommandLineOptions.h"

#include <Cv/Animation.h>

int	Verbose = 0;		// Verbosity level: 0 - no messages  1 - error messages only  2 - everything

using namespace std;


// sc -v -i anim.dae -o a.dae -r 15

static char	CvCOMMON[] = "COMMON";

static void _PrintUsage(void)
{
 cout << "Usage: sample_channels -i <input_file> -o <output_file> -r <sampling_rate>\n\nExample:\n sample_channels -i anim.dae -o anim_sampled_at_60Hz.dae -r 60\n";
}

#if 0
//================================================================
// Find <technique> with "COMMON" profile in a <source>
//================================================================
domSource::domTechnique* _SourceGetCOMMONTechnique(domSource* LdomSource)
{
 domSource::domTechnique*	LTechnique = NULL;
 int				LTC, LTN = LdomSource->getTechnique_array().getCount();

 for(LTC = 0;LTC < LTN;++LTC)
 {
  if(strcmp(LdomSource->getTechnique_array()[LTC]->getProfile(), CvCOMMON) == 0)
  {
   return(LdomSource->getTechnique_array()[LTC]);
  }
 }
}
#endif

//========================================
// Sample each channel of an Animation
// at a given time interval
//========================================
static CvBool _SampleAnimation(CvAnimation* LAnimation, CvCoordinate LInterval)
{
 CvCoordinate	LStartTime = 0.0, LEndTime = 0.0;
 CvIndex	LC;
 const CvIndex	LN = LAnimation->NumOfChannels;


 if(LN == 0)
 {
  printf("Anim '%s' has no channels\n", LAnimation->Name);fflush(stdout);return(FALSE);
 }


// Find start and end
//
 if(LAnimation->GetTimeRange(LStartTime, LEndTime))
 {
  printf("Anim '%s'  %f...%f\n", LAnimation->Name, LStartTime, LEndTime);fflush(stdout);
 }
 else
 {
  printf("Animation '%s'. No time range found (no keyframes?)\n", LAnimation->Name);fflush(stdout);
  return(FALSE);
 }

 for(LC = 0;LC < LN;++LC)
 {
  CvKeyFrameAnimationChannel*	LChannel = LAnimation->Channels[LC];
  const CvIndex			LKN = (CvIndex)((LEndTime-LStartTime)/LInterval);


  if(LChannel->Curve)
  {
   CvSplineCV*		LNewCVs = (CvSplineCV*)CvMalloc(sizeof(CvSplineCV) * LKN);
   CvSplineCV*		LNewCV = LNewCVs;
   CvSpline*		LCurve = LChannel->Curve;
   CvSplineCV*		LCV = LCurve->CVs;
   CvCoordinate		LTime = LStartTime, LValue;
   CvIndex		LKC;



// Find <sampler>
//
/*
   {
    daeElement*		LdaeElement;
    domSampler*		LdomSampler;

    LChannel->emdomChannel->source.resolveElement();
    LdaeElement = LChannel->emdomChannel->source.element;		// Direct casting (domSampler*)(LdomChannel->source.element) won't work, so we need a temporary variable...
    LdomSampler = (domSampler*)LdaeElement;
printf("Channel '%s'\n", LChannel->emdomChannel->getID());fflush(stdout);
   }
*/

   for(LKC = 0;LKC < LKN;++LKC, ++LNewCV, LTime += LInterval)
   {
    Cv_CurveGetYValue(LCurve, LTime, &LValue);
    Cv_SplineCVInit(LNewCV);
    LNewCV->Position.X = LTime;
    LNewCV->Position.Y = LValue;
   }

   CvFree(LCurve->CVs);
   LCurve->CVs = LNewCVs;
   LCurve->NumOfCVs = LKN;
  }
 }
 return(TRUE);
}


//========================================================================
// Convert and <animation> into our internal structures for processing
//========================================================================
CvAnimation* _LoadAnimation(domAnimation* LdomAnimation)
{
 CvAnimation*	LAnimation = new CvAnimation();
 const int	LNumOfSources = LdomAnimation->getSource_array().getCount(),
		LNumOfSamplers = LdomAnimation->getSampler_array().getCount(),
 		LNumOfChannels = LdomAnimation->getChannel_array().getCount();


 for(int LChannelC = 0;LChannelC < LNumOfChannels;++LChannelC)
 {
  domChannel*			LdomChannel = LdomAnimation->getChannel_array()[LChannelC];
  CvKeyFrameAnimationChannel*	LChannel = LAnimation->AddChannel();
  daeElement*			LdaeElement;
  domSampler*			LdomSampler = NULL;


// Find <sampler>
//
  LdomChannel->getSource().resolveElement();
  LdaeElement = LdomChannel->getSource().getElement();		// Direct casting (domSampler*)(LdomChannel->source.element) won't work, so we need a temporary variable...
  LdomSampler = (domSampler*)LdaeElement;

  LChannel->emdomChannel = LdomChannel;

  if(LdomSampler)
  {
   CvSplineCV*		LKeyFrames = NULL;
   domSource*		LdomSource = NULL;
   const int		LNumOfInputs = LdomSampler->getInput_array().getCount();
   int			LNumOfKeyFrames = 0;


//printf("<inputs>: ");fflush(stdout);
   for(int LC = 0;LC < LNumOfInputs;++LC)
   {
    domInputLocal*	LdomInput = LdomSampler->getInput_array()[LC];

    LdomInput->getSource().resolveElement();

//printf("%s ", LdomInput->semantic);fflush(stdout);

    LdaeElement = LdomInput->getSource().getElement();		// (domSampler*)(LdomChannel->source.element) won't work, so we need a temporary variable...
    LdomSource = (domSource*)LdaeElement;

    if(LdomSource)
    {
     domSource::domTechnique_common*	LTechnique = LdomSource->getTechnique_common();

     if(LTechnique )
     {
      domAccessor*	LdomAccessor = LTechnique->getAccessor();
      const int		LStride = LdomAccessor->getStride(), LOffset = LdomAccessor->getOffset();

      if(LdomAccessor)
      {
       LdomAccessor->getSource().resolveElement();
       LdaeElement = LdomAccessor->getSource().getElement();		// (domArray*)(LdomAccessor->source.element) won't work, so we need a temporary variable...
       domFloat_array*	LdomFloatArray = (domFloat_array*)LdaeElement;


       if(LNumOfKeyFrames == 0)
       {
	LNumOfKeyFrames = LdomAccessor->getCount();
	if(LNumOfKeyFrames)
	{
	 LKeyFrames = (CvSplineCV*)CvMalloc(sizeof(CvSplineCV)*LNumOfKeyFrames);
	 LChannel->Curve = new(CvSpline);
	 LChannel->Curve->CVs = LKeyFrames;
	 LChannel->Curve->NumOfCVs = LNumOfKeyFrames;
	}
       }

       if(LKeyFrames)
       {
	CvSplineCV*	LCV = LKeyFrames;
	//domFloat_array*	LdomFloatArray = (domFloat_array*)LdomArray;

//	 if(strcmp(LdomArray->type, "float") == 0)
	if(LdomFloatArray)
	{
	 domFloat*		LArray = (domFloat*)(LdomFloatArray->getValue().getRawData());

//printf("%s() float  stride %d  offset %d  %p '%s'\n", __FUNCTION__, LStride, LOffset, LArray, LdomFloatArray->getID());fflush(stdout);

	 if(strcmp(LdomInput->getSemantic(), "INPUT") == 0)
	 {
	  LChannel->emdomInputAccessor = LdomAccessor;

	  for(int LKC = 0;LKC < LNumOfKeyFrames;++LKC, ++LCV)
	  {
	   LCV->Position.X = LArray[LKC*LStride+LOffset];
//printf(" (%d) %f", LKC*LStride+LOffset, LArray[LKC*LStride+LOffset]);fflush(stdout);
	  }
//printf("INPUT\n");fflush(stdout);
	 }
	 else if(strcmp(LdomInput->getSemantic(), "OUTPUT") == 0)
	 {
	  LChannel->emdomOutputAccessor = LdomAccessor;

	  for(int LKC = 0;LKC < LNumOfKeyFrames;++LKC, ++LCV)
	  {
	   LCV->Position.Y = LArray[LKC*LStride+LOffset];
//printf(" (%d) %f", LKC*LStride+LOffset, LArray[LKC*LStride+LOffset]);fflush(stdout);
	  }
//printf("OUTPUT\n");fflush(stdout);
	 }
	}
       }

      }
     }
    }
   }
  }


//LdomChannel->source.print();
//cout << "src" << LdomChannel->source.print() << "\n";
 }


 return(LAnimation);
}


//================================================================
// Convert sampled animation back to the COLLADA API DOM
//================================================================
static void _SaveAnimation(CvAnimation* LAnimation, domAnimation* LdomAnimation)
{
 int		LC;
 const int	LN = LAnimation->NumOfChannels;

// Walk through the channels and just update the arrays in the sampler->source->accessor
//
 for(LC = 0;LC < LN;++LC)
 {
  CvKeyFrameAnimationChannel*	LChannel = LAnimation->Channels[LC];

  if(LChannel->Curve)
  {
   CvSpline*	LSpline = LChannel->Curve;
   int		LKC;
   const int	LKN = LSpline->NumOfCVs;

   {
    daeElement*		LdaeElement;
    domSampler*		LdomSampler;

    LChannel->emdomChannel->getSource().resolveElement();

// Direct casting won't work, so we need a temporary variable...
//
    LdaeElement = LChannel->emdomChannel->getSource().getElement();
    LdomSampler = (domSampler*)LdaeElement;
//printf("Channel '%s'\n", LChannel->emdomChannel->getID());fflush(stdout);

    if(LdomSampler)
    {
     const CvSplineCV*	LKey;
     domAccessor*	LdomAccessor;
     daeElement*	LdaeElement;
     domFloat_array*	LdomArray = (domFloat_array*)LdaeElement;


// Input (TIME)
//
     LdomAccessor = LChannel->emdomInputAccessor;
     LdomAccessor->getSource().resolveElement();
     LdaeElement = LdomAccessor->getSource().getElement();		// (domFloat_array*)(LdomAccessor->source.element) won't work, so we need a temporary variable...
     LdomArray = (domFloat_array*)LdaeElement;

     LdomAccessor->setCount( LKN );

     LdomArray->getValue().setCount(LKN);
     LdomArray->setCount( LKN );
     LKey = LSpline->CVs;
     for(LKC = 0;LKC < LKN;++LKC, ++LKey)
     {
      LdomArray->getValue().set(LKC, LKey->Position.X);
     }


// Output (VALUE)
//
     LdomAccessor = LChannel->emdomOutputAccessor;
     LdomAccessor->getSource().resolveElement();
     LdaeElement = LdomAccessor->getSource().getElement();		// (domFloat_array*)(LdomAccessor->source.element) won't work, so we need a temporary variable...
     LdomArray = (domFloat_array*)LdaeElement;

     LdomAccessor->setCount( LKN );

     LdomArray->getValue().setCount(LKN);
     LdomArray->setCount( LKN );
     LKey = LSpline->CVs;
     for(LKC = 0;LKC < LKN;++LKC, ++LKey)
     {
      LdomArray->getValue().set(LKC, LKey->Position.Y);
     }

    }
   }
  }
 }
}


//================================================================
// Main
//================================================================
int main(int argc, char* argv[])
{
 int		error;		// Holder for error returns

 string		input_file,	// Input COLLADA file name
		output_file;	// Output COLLADA file name

 float		sampling_rate = 10.0f;


// Initialize command line options processor
//
	CommandLineOptions*	clo = new CommandLineOptions();

	clo->SetTitle("COLLADA conditioner, sample animation channels");
	clo->AddExample("conditioner -i infile -o outfile", "Input and output from files");
	clo->AddSetting("i", "inputfile", "Input COLLADA file name");
	clo->AddSetting("o", "outputfile", "Output COLLADA file name");
	clo->AddSetting("r", "rate", "Sampling rate (default = 10)");
	clo->AddOption("v", "Verbose output");
	clo->AddOption("V", "Print version");

// Parse the command line options
//
	clo->Load(argc, argv);

// If requested, print version and exit
//
	if(clo->CheckForOption("V"))
	{
		cerr << "COLLADA animation channel sampler Version "<< VERSION <<"\n";
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
		_PrintUsage();
		exit(-1);
	}

	if(clo->CheckForSetting("o"))
	{
		output_file = clo->GetString("o");
	}
	else
	{
		_PrintUsage();
		exit(-1);
	}

	if(clo->CheckForSetting("r"))
	{
		string	LRateStr = clo->GetString("r");

		sampling_rate = atof((const char*)(LRateStr.c_str()));
	}

//printf("%s()-00 %s %s\n", __FUNCTION__, input_file, output_file);fflush(stdout);

	cout << input_file << " -> " << output_file << "\n";


// Should we be verbose?
//
	if(clo->CheckForOption("v")) 
	{
		Verbose = 1;
	}

	// Instantiate the DAE object for the input file
	
	DAE*	input = new DAE;
	
	// Load the COLLADA file
	
	if(Verbose)	cerr<<"reading from "<<input_file<<"\n"; 
	error = input->load(input_file.c_str());
	if (error != DAE_OK)
	{
		cerr<<"load failed "<<daeErrorString(error)<<"\n";
		exit(-1);
	}

// How many <animation>s are there?
//
	unsigned int LNumOfAnimations = input->getDatabase()->getElementCount(NULL, "animation", NULL);

	if(Verbose)
	{
	 	if(LNumOfAnimations)
	 	{
			if(LNumOfAnimations > 1) cout << "There are "<<LNumOfAnimations<<" <animation>s in this file\n";
			else cout << "There is 1 <animation> in this file\n";
	 	}
	 	else
	 	{
			cerr << "File has no <animation>s\n";exit(-1);
	 	}
	}


// Process the URI/filename strings on each image asset
//
	domAnimation*	LdomAnimation;  		// Pointer to the image asset we are currently working on
	int		LNumOfAnimationsChanged = 0;

	for(unsigned int i = 0;i < LNumOfAnimations;i++)
	{
// Get the next <animation>
//
		error = input->getDatabase()->getElement((daeElement**)&LdomAnimation, i, NULL, "animation");

		if(error != DAE_OK)
		{
		  cerr << "error " << daeErrorString(error) << " getting <animation> "<< i <<"\n";
		  exit(-1);
		}

// Parse animation into our animation class
//
		CvAnimation*	LAnimation = _LoadAnimation(LdomAnimation);

		if(LAnimation)
		{
			if(_SampleAnimation(LAnimation, 1.0/sampling_rate))
			{
				_SaveAnimation(LAnimation, LdomAnimation);
				LNumOfAnimationsChanged++;
			}

			delete LAnimation;
		}
	}

// Write the changed file back out
//
	if(LNumOfAnimationsChanged)
	{
		if(Verbose)
		{
			cout << "Resampled " << LNumOfAnimationsChanged << " <animation>";
			if(LNumOfAnimationsChanged > 1) cout << "s";
			cout << "\n";

			cout << "writing to "<< output_file << "\n";
		}

		error = input->saveAs(output_file.c_str());

		if (error != DAE_OK)
		{
			cerr << "save failed " << daeErrorString(error) << "\n";
			exit(-1);
		}
	}
	else
	{
		cout << "No changes were made\n";
	}

	delete input;
	DAE::cleanup();
	return 0;
}
