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


#ifndef _CFX_CODE_H
#define _CFX_CODE_H

#include <string>

class cfxEffect;

// cfxCode 
class cfxCode
{
public:

  cfxCode(cfxEffect* _effect, const std::string& _name, 
	  const std::string& _profile, const std::string& _code);
  ~cfxCode() {};

  bool apply();
  bool validate() const;


private:

  cfxEffect* effect;

  std::string name;
  std::string profile;
  std::string code;

  //CGprogram program;
};



#endif // _CFX_CODE_H
