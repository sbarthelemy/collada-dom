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


#ifndef _CFX_PARAMABLE_H
#define _CFX_PARAMABLE_H


#include <vector>

class cfxParam;


// cfxParamable
class cfxParamable
{
public:

  cfxParamable();
  virtual ~cfxParamable();

  void pushParam(cfxParam* param);

  const std::vector<cfxParam*> &getParamArray() const;

 protected:

  std::vector<cfxParam*> paramArray; // min 0

};


#endif // _CFX_PARAMABLE_H
