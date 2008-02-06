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


#ifndef _CFX_PARAM_H
#define _CFX_PARAM_H


//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif
#include <string>

// cfxParam
class cfxParam
{
public:
	enum cfxParamTypeEnum {
		CFXBINDPARAM,
		CFXCONNECTPARAM,
		CFXNEWPARAM,
		CFXSETPARAM,
	};

public:

  cfxParam(const std::string& _name);
  virtual ~cfxParam();
 
  virtual bool apply() = 0;
  virtual bool validate() const = 0;

  CGparameter getParameter() const;
  virtual cfxParamTypeEnum getType() const = 0;

  const std::string &getName() const;
  
protected:
  
  std::string name;

  CGparameter parameter;

};


#endif // _CFX_PARAM_H
