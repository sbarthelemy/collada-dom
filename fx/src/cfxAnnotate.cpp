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
#include <assert.h>
#include <cfxPlatform.h>
// User includes

#include <cfxAnnotate.h>
#include <cfxData.h>
#include <cfxEffect.h>
#include <cfxParam.h>
#include <cfxPass.h>
#include <cfxTechnique.h>
#include <cfxShader.h>


// cfxAnnotate
cfxAnnotate::cfxAnnotate(cfxData* _data, const std::string& _name) 
  : data(_data),
    name(_name)
{
}
 
cfxAnnotate::~cfxAnnotate() 
{
}


bool cfxAnnotate::apply(const cfxEffect* effect)
{
  annotation = cgCreateEffectAnnotation(effect->getEffect(), name.c_str(), data->getType());
  data->apply(this);
  return true; 
}

bool cfxAnnotate::apply(const cfxParam* param)
{
  annotation = cgCreateParameterAnnotation(param->getParameter(), name.c_str(), data->getType());
  data->apply(this);
  return true; 
}

bool cfxAnnotate::apply(const cfxPass* pass)
{ 
  annotation = cgCreatePassAnnotation(pass->getPass(), name.c_str(), data->getType());  
  data->apply(this);
  return true; 
}

bool cfxAnnotate::apply(const cfxTechnique* technique)
{
  annotation = cgCreateTechniqueAnnotation(technique->getTechnique(), name.c_str(), data->getType());  
  data->apply(this);
  return true; 
}

bool cfxAnnotate::apply(const cfxShader* shader)
{
  annotation = cgCreateProgramAnnotation(shader->getProgram(), name.c_str(), data->getType());  
  data->apply(this);
  return true; 
}

CGannotation cfxAnnotate::getAnnotation() const
{
  return annotation;
}

const cfxData *cfxAnnotate::getData() const
{
	return data;
}

const std::string &cfxAnnotate::getName() const
{
	return name;
}
