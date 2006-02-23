//================================================================================================
// Interchange file viewer C++ version
//
// DESCRIPTION:	
//  Animation
//
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
//================================================================================================

#include <stdio.h>
#include <assert.h>
#include <iostream>


#ifndef _Cv_Animation_h
#include <Cv/Animation.h>
#endif


//========================================
// Animation constructor
//========================================
CvAnimation::CvAnimation()
{
 this->Channels = NULL;
 this->NumOfChannels = 0;

// std::cout << " Constructing CvAnimation <" << Name << ">\n";
}


//========================================
// Animation destructor
//========================================
CvAnimation::~CvAnimation()
{
 CvIndex	LC;
 const CvIndex	LN = this->NumOfChannels;

 for(LC = 0;LC < LN;++LC)
 {
  Cv_AnimationChannelFree(this->Channels[LC]);
 }
 CvFree(this->Channels);

// std::cout << " Destructing CvAnimation <" << Name << ">\n";
}


//========================================
// Add channel
//========================================
CvKeyFrameAnimationChannel* CvAnimation::AddChannel(void)
{
 CvKeyFrameAnimationChannel**	LChannels = (CvKeyFrameAnimationChannel**)realloc(this->Channels, (this->NumOfChannels+1)*sizeof(CvKeyFrameAnimationChannel*));

 if(LChannels)
 {
  CvKeyFrameAnimationChannel*	LChannel = (CvKeyFrameAnimationChannel*)CvMalloc(sizeof(CvKeyFrameAnimationChannel));

  memset(LChannel, 0, sizeof(CvKeyFrameAnimationChannel));

  LChannels[this->NumOfChannels] = LChannel;
  this->NumOfChannels += 1;
  this->Channels = LChannels;
  return(LChannels[this->NumOfChannels-1]);
 }
 return(NULL);
}


//========================================
// Find out the Start time and end time
// of a keyframe Animation
//========================================
CvBool CvAnimation::GetTimeRange(CvCoordinate& LStart, CvCoordinate& LEnd)
{
 CvIndex	LC;
 const CvIndex	LN = this->NumOfChannels;
 CvBool		LRangeSet = FALSE;


 for(LC = 0;LC < LN;++LC)
 {
  CvKeyFrameAnimationChannel*	LChannel = this->Channels[LC];


  if(LChannel->Curve)
  {
   CvSpline*		LCurve = LChannel->Curve;
   CvSplineCV*		LCV = LCurve->CVs;
   CvIndex		LKC;
   const CvIndex	LKN = LCurve->NumOfCVs;


   for(LKC = 0;LKC < LKN;++LKC, ++LCV)
   {
    CvCoordinate	LTime = LCV->Position.X;

    if(!LRangeSet) { LStart = LEnd = LTime;LRangeSet = TRUE; }
    else
    {
     if(LTime < LStart) LStart = LTime;
     if(LTime > LEnd) LEnd = LTime;
    }
   }
  }
 }

 return(LRangeSet);
}


void Cv_AnimationChannelFree(CvKeyFrameAnimationChannel* LChannel)
{
 if(LChannel->Name) CvFree(LChannel->Name);

 if(LChannel->Curve) LChannel->Curve->Free();

 CvFree(LChannel);
}


//========================================================
// Get Y value of a spline at a given X value
// (linear interpolation only at the moment)
//========================================================
int Cv_CurveGetYValue(CvSpline* LSpline, CvCoordinate inLX, CvCoordinate* outLValue)
{
 const CvSplineCV*	LCVs = LSpline->CVs;
 const CvSplineCV*	LCV = LCVs;
 const CvSplineCV*	LNextCV = LCV+1;
 CvCoordinate		LPos;
 CvIndex		LC;
 const CvIndex		LNumOfCVs = LSpline->NumOfCVs, LNCVs = LNumOfCVs-1;


 if((inLX < 0.0) || (LNumOfCVs < 2)) { *outLValue = LCV->Position.Y;return(0); }
 else if(inLX >= LCVs[LNCVs].Position.X) { *outLValue = LCVs[LNCVs].Position.Y;return(0); }

// Find the segment that contains this X position
//
 for(LC = 0;LC < LNCVs;)
 {
  if(LNextCV->Position.X == inLX) { *outLValue = LNextCV->Position.Y;return(0); }
  if(LNextCV->Position.X > inLX) break;
  else
  {
   LC++;LCV++;LNextCV++;
  }
 }

 LPos = (inLX-LCV->Position.X)/(LNextCV->Position.X-LCV->Position.X);
 *outLValue = (LNextCV->Position.Y-LCV->Position.Y)*LPos+LCV->Position.Y;

 return(0);
}
