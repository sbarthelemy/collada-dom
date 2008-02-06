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


#ifndef _CFX_CONNECTPARAM_H
#define _CFX_CONNECTPARAM_H

#include <string>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

#include <cfxParam.h>

class cfxShader;

// cfxConnectParam 
class cfxConnectParam : public cfxParam
{
public:

  cfxConnectParam(const std::string& _name, cfxShader* _shader, 
		  const std::string& _fromName);

  bool apply();
  bool validate() const;

  virtual cfxParam::cfxParamTypeEnum getType() const;
  const std::string &getFromName() const;


private:

  cfxShader* shader;

  std::string fromName;

  CGparameter fromParameter;
};



#endif // _CFX_CONNECTPARAM_H
