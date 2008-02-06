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

#include <cfxPass.h>
#include <cfxAnnotate.h>
#include <cfxShader.h>
#include <cfxTechnique.h>
#include <cfxGlPipelineSetting.h>


// cfxPass 
cfxPass::cfxPass(cfxTechnique* _technique, const std::string& _name)
  : technique(_technique),
    name(_name)
{
  pass = cgCreatePass(technique->getTechnique(), name.c_str());
}

bool cfxPass::apply()
{
  std::vector<cfxGlPipelineSetting*>::iterator settingIter = settingArray.begin();
  while (settingIter != settingArray.end())
    {
      (*settingIter)->apply();
      settingIter++;
    }

  std::vector<cfxShader*>::iterator shaderIter = shaderArray.begin();
  while (shaderIter != shaderArray.end())
    {
      (*shaderIter)->apply();
      shaderIter++;
    }

  return true;
}

bool cfxPass::validate() const
{
  return true;
}

void cfxPass::pushSetting(cfxGlPipelineSetting* setting)
{
  settingArray.push_back(setting);
  printf("setting pushed onto pass\n");
}

void cfxPass::pushShader(cfxShader* shader)
{
  shaderArray.push_back(shader);
  printf("shader pushed onto pass\n");
}

cfxTechnique* cfxPass::getTechnique() const
{
  return technique;
}

CGpass cfxPass::getPass() const
{
  return pass;
}

const std::string &cfxPass::getName() const
{
	return name;
}

const std::vector<cfxGlPipelineSetting*> &cfxPass::getSettingArray() const
{
	return settingArray;
}

const std::vector<cfxShader*> &cfxPass::getShaderArray() const
{
	return shaderArray;
}
