//================================================================================================
// Interchange file viewer C++ version
//
// DESCRIPTION:	
//  <spline>
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

#include <iostream>
#include <math.h>
#include <float.h>


#ifndef _Cv_Spline_h
#include <Cv/Spline.h>
#endif



CvSpline::CvSpline()
{
 CVs = NULL;NumOfCVs = 0;

 std::cout << " Constructing CvSpline <" << Name << ">\n";
}


CvSpline::~CvSpline()
{
 if(this->CVs)
 {
  CvFree(this->CVs);
  this->CVs = NULL;
  this->NumOfCVs = 0;
 }

 std::cout << " Destructing CvSpline <" << Name << ">\n";
}


void Cv_SplineCVInit(CvSplineCV* LCV)
{
 LCV->Position.X = 0.0;LCV->Position.Y = 0.0;LCV->Position.Z = 0.0;
}


#define CvM_LinSegLen()\
{\
 LDX = LNextCV->Position.X-LCurrentCV->Position.X;\
 LDY = LNextCV->Position.Y-LCurrentCV->Position.Y;\
 LDZ = LNextCV->Position.Z-LCurrentCV->Position.Z;\
\
 LCurrentCV->SegmentLength = sqrt(LDX*LDX+LDY*LDY+LDZ*LDZ);\
}
