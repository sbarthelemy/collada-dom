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

#ifndef _CFX_NEWPARAM_H
#define _CFX_NEWPARAM_H


#include <cfxParam.h>
#include <cfxAnnotatable.h>

class cfxEffect;
class cfxAnnotate;
class cfxData;

// cfxNewParam
class cfxNewParam : public cfxParam, public cfxAnnotatable
{
public:

  cfxNewParam(cfxData* _data, const std::string& _name, cfxEffect* _effect,
	      const std::string& _semantic);
 
  virtual bool apply();
  virtual bool validate() const;

  virtual cfxParam::cfxParamTypeEnum getType() const;
  const std::string &getSemantic() const;
  const cfxData *getData() const;

protected:
  
  cfxEffect* effect;
  cfxData* data;
  
  std::string semantic;

};

#endif // _CFX_NEWPARAM_H

