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

#ifndef _CFX_SAMPLER_H
#define _CFX_SAMPLER_H

#include <string>
#include <vector>

#include <cfxPlatform.h>

class cfxEffect;
class cfxParam;
class cfxGlSamplerSetting;
class cfxSurface;

// cfxSampler
class cfxSampler
{
 public:

  cfxSampler(const std::string& _source, cfxEffect* _effect);
  virtual ~cfxSampler();

  bool apply(cfxParam* param);

  GLuint getTextureId();// const;

  void pushSetting(cfxGlSamplerSetting* setting);

  void setGenerateMipmaps(bool _generateMipmaps);

  const std::string &getSource() const;
  const std::vector<cfxGlSamplerSetting*> &getSettingArray() const;

 protected:
  
  std::string source;
  GLuint textureId;
  
  cfxEffect* effect;
  cfxSurface* surface;

  bool generateMipmaps;

  std::vector<cfxGlSamplerSetting*> settingArray; // min 0

};



#endif // _CFX_SAMPLER_H
