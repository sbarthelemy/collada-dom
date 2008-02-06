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

// User includes

#include <cfxBindParam.h>
#include <cfxShader.h>
#include <cfxData.h>

// cfxBindParam 
cfxBindParam::cfxBindParam(const std::string& _name, cfxShader* _shader, cfxData* _data)
  : cfxParam(_name),
    shader(_shader),
    data(_data)
{
}

bool cfxBindParam::apply()
{
  parameter = cgGetNamedParameter(shader->getProgram(), name.c_str());

  if (data)
    {
      data->apply(this);
    }
  else
    {
      printf("Value settings not implemented yet for bind params - data must support all cg types for this.\n");
    }

  return true;
}

bool cfxBindParam::validate() const
{
  return true;
}

cfxParam::cfxParamTypeEnum cfxBindParam::getType() const
{
	return cfxParam::CFXBINDPARAM;
}

const cfxData *cfxBindParam::getData() const
{
	return data;
}
