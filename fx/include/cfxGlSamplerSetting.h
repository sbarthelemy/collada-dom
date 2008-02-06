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

#ifndef _CFX_GLSAMPLERSETTING_H
#define _CFX_GLSAMPLERSETTING_H

#include <cfxTypes.h>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

class cfxEffect;
class cfxParam;


// cfxGlSamplerSetting
class cfxGlSamplerSetting
{
public:
	enum type_enum {
		WRAP_S,
		WRAP_T,
		MINFILTER,
		MAGFILTER,
		BORDER_COLOR,
		GENERATE_MIPMAP,
		MAX_MIP_LEVEL,
		LOD_BIAS
	};

 public:

  cfxGlSamplerSetting(cfxEffect* effect, const char* stateName);
  virtual ~cfxGlSamplerSetting();

  virtual cfxBool apply(const cfxParam* param) = 0;

  virtual type_enum getType() const = 0;

 protected:

  cfxEffect* effect;

  CGstate state;
  CGstateassignment assignment;

};




// cfxGlSamplerSettingWrapS
class cfxGlSamplerSettingWrapS : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingWrapS(cfxEffect* effect, const char* stateName, int _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  int getValue() const;

 protected:

  int value;
};


// cfxGlSamplerSettingWrapT
class cfxGlSamplerSettingWrapT : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingWrapT(cfxEffect* effect, const char* stateName, int _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  int getValue() const;

 protected:

  int value;
};


// cfxGlSamplerSettingMinFilter
class cfxGlSamplerSettingMinFilter : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingMinFilter(cfxEffect* effect, const char* stateName, int _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  int getValue() const;

 protected:

  int value;
};


// cfxGlSamplerSettingMagFilter
class cfxGlSamplerSettingMagFilter : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingMagFilter(cfxEffect* effect, const char* stateName, int _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  int getValue() const;

 protected:

  int value;
};


// cfxGlSamplerSettingBorderColor
class cfxGlSamplerSettingBorderColor : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingBorderColor(cfxEffect* effect, const char* stateName, cfxFloat4& _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  cfxFloat4 getValue() const;

 protected:

  cfxFloat4 value;
};


// cfxGlSamplerSettingGenerateMipMap
class cfxGlSamplerSettingGenerateMipMap : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingGenerateMipMap(cfxEffect* effect, const char* stateName, cfxBool _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  cfxBool getValue() const;

 protected:

  cfxBool value;
};


// cfxGlSamplerSettingMaxMipLevel
class cfxGlSamplerSettingMaxMipLevel : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingMaxMipLevel(cfxEffect* effect, const char* stateName, float _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  float getValue() const;

 protected:

  float value;
};


// cfxGlSamplerSettingLodBias
class cfxGlSamplerSettingLodBias : public cfxGlSamplerSetting
{
 public:

  cfxGlSamplerSettingLodBias(cfxEffect* effect, const char* stateName, float _value);
  virtual cfxBool apply(const cfxParam* param);

  virtual cfxGlSamplerSetting::type_enum getType() const;

  float getValue() const;

 protected:

  float value;
};

#endif // _CFX_GLSAMPLERSETTING_H

