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

// System includes

#include <stdio.h>
#include <cstdlib>
#include <iostream>

// User includes

#include <cfxCode.h>


// cfxCode 
cfxCode::cfxCode(cfxEffect* _effect, const std::string& _name, 
		 const std::string& _profile, const std::string& _code)
  : effect(_effect), 
    name(_name),
    profile(_profile),
    code(_code)
{}

bool cfxCode::apply()
{
  // there is nothing to do with code until the platform supports compilation at run time

  /*
  program = cgCreateProgram(effect->getContext(), 
			    CGenum program_type,
			    code.c_str(),
			    CGprofile profile,
			    const char *entry,
			    const char **args);
  */

  return true;
}

bool cfxCode::validate() const
{
  return true;
}

