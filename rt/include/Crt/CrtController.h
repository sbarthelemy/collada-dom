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


#ifndef _CRT_CONTROLLER_H_
#define _CRT_CONTROLLER_H_

#include "Crt/CrtGeometry.h"
#include "Crt/CrtData.h"
#include "Crt/CrtMemory.h"
#include "Crt/CrtTypes.h"
#include "Crt/CrtMatrix.h"
#include "Crt/CrtNode.h"

class CrtInstance;
class CrtController;

enum CrtController_Types
{
	CrtController_Skin_Types,
	CrtController_Morph_Types,
	CrtController_Max_Types,
};
class CrtInstanceController : public CrtInstance
{
public:
	CrtInstanceController() : AbstractController(0) {};
	~CrtInstanceController() {};
	CrtController * AbstractController;
//	CrtGeometry * AbstractGeometry;
};

class CrtController : public CrtBase
{
public:
	CrtController() {} ;
	virtual ~CrtController() {} ;

	virtual CrtVoid	Update( CrtFloat time) = 0;
	virtual CrtVoid	Draw(CrtNode *parentNode, CrtInstance * instance) = 0;
	CrtController_Types type;
	std::vector<string> skeletons;
};


#endif //_CRT_CONTROLLER_H_
