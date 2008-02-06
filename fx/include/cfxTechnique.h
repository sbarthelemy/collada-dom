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

#ifndef _CFX_TECHNIQUE_H
#define _CFX_TECHNIQUE_H


#include <cfxAnnotatable.h>
#include <cfxParamable.h>
#include <string>
#include <map>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif

class cfxEffect;
class cfxPass;
class cfxCode;
class cfxSurface;

// cfxTechnique
class cfxTechnique : public cfxAnnotatable, public cfxParamable
{
public:
  
  cfxTechnique(cfxEffect* _effect, const std::string& _name);
  ~cfxTechnique();

  bool apply();
  bool validate() const;

  cfxEffect* getEffect() const;
  CGtechnique getTechnique() const;

  const char* mapNameToFullPath(const std::string& name) const;
  const char* getFullPathCg(unsigned int& numCg, unsigned int indexCg) const;

  void pushPass(cfxPass* pass);
  void pushInclude(const std::string& name, const std::string& uri);
  void pushSurface(cfxSurface* surface);

  void setPassState(unsigned int passIndex);
  void resetPassState(unsigned int passIndex);
  unsigned int getPassCount() const;

  const std::map<std::string, std::string> &getIncludeMap() const;
  const std::vector<cfxSurface*> &getSurfaceArray() const;
  const std::string &getName() const;
  const std::vector<cfxPass*> &getPassArray() const;

private:

  cfxEffect* effect;

  // nothing to be done with code until run time compilation is supported
  std::vector<cfxCode*> codeArray;

  // maps identifying name to full path
  std::map<std::string, std::string> includeMap; 

  std::vector<cfxPass*> passArray;

  std::vector<cfxSurface*> surfaceArray;

  std::string name;

  CGtechnique technique;
  
};


#endif // _CFX_TECHNIQUE_H
