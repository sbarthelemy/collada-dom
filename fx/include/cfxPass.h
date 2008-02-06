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

#ifndef _CFX_PASS_H
#define _CFX_PASS_H

#include <string>
#include <vector>

#include <cfxAnnotatable.h>
#include <cfxParamable.h>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

class cfxGlPipelineSetting;
class cfxShader;
class cfxTechnique;

// cfxPass 
class cfxPass : public cfxAnnotatable, public cfxParamable
{
public:

  cfxPass(cfxTechnique* _technique, const std::string& _name);

  bool apply();
  bool validate() const;

  void pushSetting(cfxGlPipelineSetting* setting);
  void pushShader(cfxShader* shader);

  cfxTechnique* getTechnique() const;

  CGpass getPass() const;

  const std::string &getName() const;
  const std::vector<cfxGlPipelineSetting*> &getSettingArray() const;
  const std::vector<cfxShader*> &getShaderArray() const;

private:

  cfxTechnique* technique;

  std::string name;
 
  std::vector<cfxGlPipelineSetting*> settingArray;  // min 0
  
  std::vector<cfxShader*> shaderArray;  // min 0
  
  CGpass pass;

};

#endif // _CFX_PASS_H

