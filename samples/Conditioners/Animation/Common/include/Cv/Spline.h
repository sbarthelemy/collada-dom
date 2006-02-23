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

#ifndef _Cv_Spline_h
#define _Cv_Spline_h

#include <string>

#include <Cv/Types.h>


typedef struct
{
 CvCoord3	Position;
} CvSplineCV;


class CvSpline : public CvEntity
//class CvSpline : public CvGeometry
{
 public:

 CvSplineCV*	CVs;
 CvIndex	NumOfCVs;


 explicit CvSpline();
 ~CvSpline();
};


extern void		Cv_SplineCVInit(CvSplineCV* LCV);

#endif	// _Cv_Spline_h
