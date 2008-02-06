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


#ifndef _CFX_ANNOTATABLE_H
#define _CFX_ANNOTATABLE_H


#include <string>
#include <vector>


class cfxAnnotateData;
class cfxAnnotate;



// cfxAnnotatable
class cfxAnnotatable
{
public:

  cfxAnnotatable();
  virtual ~cfxAnnotatable();
 
  void pushAnnotate(cfxAnnotate* annotate);

  const std::vector<cfxAnnotate*> &getAnnotateArray() const;

 protected:

  std::vector<cfxAnnotate*> annotateArray; // min 0

};


#endif // _CFX_ANNOTATABLE_H
