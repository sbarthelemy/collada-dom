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

#ifndef _CFX_SHADER_H
#define _CFX_SHADER_H

#include <string>
#include <cfxAnnotatable.h>
#include <cfxParamable.h>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

class cfxPass;

// cfxShader 
class cfxShader : public cfxAnnotatable, public cfxParamable
{
public:
	enum type_enum {
		VERTEX,
		FRAGMENT
	};
public:

  cfxShader(cfxPass* _pass, const std::string& _source, const std::string& _name, CGprofile _target, type_enum type);

  bool apply();
  bool validate() const;

  cfxPass* getPass() const;

  CGprogram getProgram() const;

  const std::string &getName() const;
  const std::string &getSource() const;
  const CGprofile &getTarget() const;
  type_enum getOriginalType() const;

private:

  cfxPass* pass;

  std::string source;
  std::string name;

  CGprofile target;
  CGprogram program;
  CGstate state;
  CGstateassignment assignment;

  type_enum originalType;
};

#endif // _CFX_SHADER_H

