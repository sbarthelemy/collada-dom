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


#ifndef _CFX_MATERIAL_H
#define _CFX_MATERIAL_H

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

#include <string>
#include <map>
#include <vector>

#include <cfxParamable.h>

class cfxEffect; 
class cfxSurface;

// cfxMaterial
class cfxMaterial : public cfxParamable 
{
public:

  cfxMaterial(const std::string& _name, const std::string& _effectName, 
	      cfxEffect* _effect = NULL); 

  ~cfxMaterial();

  const std::string& getName() const;

  cfxEffect* getEffect() const;

  bool setParameterValues();

  void setEffectPassState(unsigned int techniqueIndex, unsigned int passIndex);
  void resetEffectPassState(unsigned int techniqueIndex, unsigned int passIndex);
  unsigned int getEffectTechniqueCount();
  unsigned int getEffectPassCount(unsigned int techniqueIndex);

  const std::string &getEffectName() const;

  void addSurface(cfxSurface* surface);

  const std::vector<cfxSurface*> &getSurfaces() const;

private:

  std::string name;
  std::string effectName;

  cfxEffect* effect;

  std::vector<cfxSurface*> surfaces;
};


#endif // _CFX_MATERIAL_H

