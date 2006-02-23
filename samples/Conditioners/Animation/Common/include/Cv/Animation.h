//================================================================================================
// Interchange file viewer C and C++ versions
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

#ifndef _Cv_Animation_h
#define _Cv_Animation_h


#ifndef _Cv_Spline_h
#include <Cv/Spline.h>
#endif

#include "dae.h" 
#include "dom/domCOLLADA.h"

typedef struct
{  
 char*		Name;

 CvSpline*	Curve;

// For sample_channels
//
 domChannel*	emdomChannel;
 domAccessor*	emdomInputAccessor;
 domAccessor*	emdomOutputAccessor;
} CvKeyFrameAnimationChannel;


class CvAnimation : public CvEntity
{
 public:

 CvAnimation();
 ~CvAnimation();

 CvBool GetTimeRange(CvCoordinate& LStart, CvCoordinate& LEnd);

 CvKeyFrameAnimationChannel*	AddChannel(void);

 CvKeyFrameAnimationChannel**	Channels;
 CvIndex			NumOfChannels;
};

#define Cv_AnimationNew		new CvAnimation
#define Cv_AnimationFree(mThis)	mThis->Free()



//--------------------------------
// Function prototypes
//--------------------------------
extern void		Cv_AnimationChannelFree(CvKeyFrameAnimationChannel* LChannel);
extern int		Cv_CurveGetYValue(CvSpline* LSpline, CvCoordinate inLX, CvCoordinate* outLValue);


#endif	// _Cv_Animation_h
