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


#ifndef _CFX_ANNOTATE_H
#define _CFX_ANNOTATE_H


#include <string>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif


class cfxData;
class cfxEffect;
class cfxParam;
class cfxPass;
class cfxTechnique;
class cfxShader;


// cfxAnnotate
class cfxAnnotate
{
public:

  cfxAnnotate(cfxData* _data, const std::string& _name);
  virtual ~cfxAnnotate();
 
  virtual bool apply(const cfxEffect* effect);
  virtual bool apply(const cfxParam* param);
  virtual bool apply(const cfxPass* pass);
  virtual bool apply(const cfxTechnique* technique);
  virtual bool apply(const cfxShader* shader);

  CGannotation getAnnotation() const;

  const cfxData *getData() const;
  const std::string &getName() const;

protected:
  
  cfxData* data;

  std::string name;
  
  CGannotation annotation;

};


#endif // _CFX_ANNOTATE_H
