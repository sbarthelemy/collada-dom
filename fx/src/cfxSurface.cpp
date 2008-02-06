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

#include <cfxSurface.h>
#include <cfxPlatform.h>
#include <cfxParam.h>

// cfxSurface 
cfxSurface::cfxSurface(const std::string& _init_from, const std::string& _format, cfxSurface* _parentSurface)
  : init_from(_init_from),
    format(_format),
	parentSurface(_parentSurface)
{
  cfxPrint("Surface created from:  %s\n", init_from.c_str());
}
cfxSurface::~cfxSurface()
{
	for (size_t i=0; i<referencingParams.size(); i++)
	{
		delete referencingParams[i];
	}
	referencingParams.clear();
	mapImageIdToGlTextureObjectId.clear();
}

bool cfxSurface::apply()
{
	if (parentSurface)
	{
		parentSurface->setSurface(init_from, format);
		parentSurface->apply();
	}
	else // this is the parent surface
	{
		// this goes through and calls apply on all the params which reference this surface
		// this causes them to update their init_from and texture object to support setparam of surfaces
		std::vector<cfxParam*>::iterator iter = referencingParams.begin();
		while (iter != referencingParams.end())
		{
			(*iter)->apply();
			iter++;
		}
	}
  return true;
}

bool cfxSurface::validate() const
{
  return true;
}


const std::string& cfxSurface::getInitFrom() const
{
  return init_from;
}

const std::string& cfxSurface::getFormat() const
{
  return format;
}

void cfxSurface::addReferencingParam(cfxParam* param)
{
	if (param)
	{
		referencingParams.push_back(param);
	}
}

void cfxSurface::setSurface(const std::string& _init_from, const std::string& _format)
{
    format = _format;
    init_from = _init_from;
}

std::map<std::string, GLuint> cfxSurface::mapImageIdToGlTextureObjectId;

GLuint cfxSurface::defaultTexture = 0;


void cfxSurface::addImage(const std::string& imageId, GLuint texId)
{
  mapImageIdToGlTextureObjectId.insert(make_pair(imageId, texId));
  cfxPrint("cfxSurface::addImage %s %d\n", imageId.c_str(), texId);
}

GLuint cfxSurface::getTexIdByImageId(const std::string& imageId)
{
  GLuint texId = defaultTexture;
  std::map<std::string, GLuint>::iterator iter = mapImageIdToGlTextureObjectId.find(imageId);
  if (iter != mapImageIdToGlTextureObjectId.end())
    {
      texId = iter->second;
    }
  //cfxPrint("cfxSurface::getTexIdByImageId: %s %d\n", imageId.c_str(), texId);
  return texId;
}

 
void cfxSurface::setDefaultTexture(GLuint texId)
{
    defaultTexture = texId;
}

const cfxSurface* cfxSurface::getParentSurface() const
{
	return parentSurface;
}
