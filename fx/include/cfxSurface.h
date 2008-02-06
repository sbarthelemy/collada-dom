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


#ifndef _CFX_SURFACE_H
#define _CFX_SURFACE_H

#include <string>
#include <map>
#include <vector>

#include <cfxPlatform.h>

class cfxParam;

// cfxSurface 
class cfxSurface
{
public:

  cfxSurface(const std::string& _init_from, const std::string& _format, cfxSurface* parentSurface = NULL);
  ~cfxSurface();

  bool apply();
  bool validate() const;

  const std::string& getInitFrom() const;
  const std::string& getFormat() const;

  void addReferencingParam(cfxParam* param);

  // load images in some other library
  // this must then be called for all loaded images so cfx can access their GL ids
  static void addImage(const std::string& imageId, GLuint texId);
  static void setDefaultTexture(GLuint texId);
  // to retrieve tex ids lookup by image id
  static GLuint getTexIdByImageId(const std::string& imageId);

  const cfxSurface* getParentSurface() const;

private:

  void setSurface(const std::string& _init_from, const std::string& _format);

  std::string init_from;
  std::string format;

  std::vector<cfxParam*> referencingParams;

	cfxSurface* parentSurface;

  static std::map<std::string, GLuint> mapImageIdToGlTextureObjectId;

  static GLuint defaultTexture;

};



#endif // _CFX_SURFACE_H
