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


#ifndef _CFX_LOADER_H
#define _CFX_LOADER_H

#include <vector>
#include <map>
#include <string>

//#ifndef _LIB
#include <Cg/cg.h>
//#else
//#include <cfxNoCg.h>
//#endif
#include <cfxTypes.h>

class DAE;

#include "cfxLoader.h"
#include "cfxEffect.h"
#include "cfxMaterial.h"
#include "cfxSurface.h"
#include "cfxPlatform.h"
class cfxAnnotatable;
class cfxParamable;


// cfxLoader
class cfxLoader
{
 public:

  cfxLoader();
  

  // this routine will load the materials and effects from a COLLADA file and populate the maps 
  // it will resolve the references from materials to effects
  // passing a NULL context will create a new context for this effect 
  static cfxBool loadMaterialsAndEffectsFromFile(const std::string& filename, std::map<std::string, cfxMaterial*>& materials, 
					      std::map<std::string, cfxEffect*>& effects, CGcontext _context = NULL);
  
  // this routine will load the materials and effects and populate the maps 
  // it will resolve the references from materials to effects
  // passing a NULL context will create a new context for this effect 
  static cfxBool loadMaterialsAndEffects(DAE *colladaAsset, std::map<std::string, cfxMaterial*>& materials, 
				      std::map<std::string, cfxEffect*>& effects, CGcontext _context = NULL);
  
  // this routine will load the effects and populate the map
  // passing a NULL context will create a new context for this effect 
  static cfxBool loadEffects(DAE *colladaAsset, std::map<std::string, cfxEffect*>& effects, CGcontext _context = NULL);
  
  // this routine will load the materials and populate the material map 
  // if an effects map is provided it will resolve the references from materials to effects
  static cfxBool loadMaterials(DAE *colladaAsset, std::map<std::string, cfxMaterial*>& materials, 
			    const std::map<std::string, cfxEffect*>* effects = NULL);

  // this is in the process of being deprecated
  // set the COLLADA FX filename to load 
  // passing a NULL context will create a new context for this effect 
  static cfxBool loadFile(const std::string& file, std::vector<cfxEffect*>& effects, CGcontext _context = NULL);
  
public: //binary load/save functionality

  static void setBinaryLoadRemotePath( const std::string &path );

  static cfxBool loadMaterialsAndEffectsFromBinFile(const std::string& file, std::map<std::string, cfxMaterial*>& materials, 
					      std::map<std::string, cfxEffect*>& effects, CGcontext _context = NULL);
  static cfxBool saveBinFile(const std::string& file, const std::map<std::string, cfxMaterial*>& materials, 
					      const std::map<std::string, cfxEffect*>& effects, cfxBool replace = false );

  static void setPlatformString( const std::string &platform );
  static std::string &getPlatformString();
 private:

  static std::string platformString;
};


#endif // _CFX_LOADER_H

