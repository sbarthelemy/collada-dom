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
#include <cfxPlatform.h>
// User includes

#include <cfxTypes.h>
#include <cfxShader.h>
#include <cfxAnnotate.h>
#include <cfxParam.h>
#include <cfxPass.h>
#include <cfxTechnique.h>
#include <cfxEffect.h>



// cfxShader 
cfxShader::cfxShader(cfxPass* _pass, const std::string& _source, const std::string& _name, CGprofile _target, type_enum type)
  : pass(_pass),
    source(_source),
    name(_name),
    target(_target)
{
	originalType = type;
	program = NULL;
	const char* fullPath = pass->getTechnique()->mapNameToFullPath(source);

	if (fullPath)
	{
#ifndef _LIB
#ifdef NORMAL_OS 

		// this needs to cope with absolute paths being returned beginning with a / according to URI RFC
		std::string adjustedFullPath(fullPath, 1, strlen(fullPath));

		printf("program %s at %s has value:  %p\n", source.c_str(), fullPath, program);

		// this needs cg files, not cgfx 
		program = cgCreateProgramFromFile(pass->getTechnique()->getEffect()->getContext(), CG_FILE_TYPE, adjustedFullPath.c_str(), target /*profile*/, name.c_str(), NULL);

		printf("program %s at %s has value:  %p\n", source.c_str(), fullPath, program);
#else
		unsigned int numCg = 0;
		unsigned int indexCg = 0;
		fullPath = pass->getTechnique()->getFullPathCg(numCg, indexCg);

		printf("PROGRAM %s at %s %s %d\n", source.c_str(), fullPath, name.c_str(), (int)target);
		//printf("cgGLGetLatestProfile(CG_GL_VERTEX) vs %d cgGLGetLatestProfile(CG_GL_FRAGMENT) %d \n", 
		//	cgGLGetLatestProfile(CG_GL_VERTEX), cgGLGetLatestProfile(CG_GL_FRAGMENT) ); 
			
		program = cgCreateProgramFromFile(pass->getTechnique()->getEffect()->getContext(), CG_SOURCE, fullPath, target, name.c_str(), NULL);
		
		printf ("Cg program load successfull\n" ); 
#endif
#endif
		if (program)
		{
			if (target == cgGLGetLatestProfile( CG_GL_VERTEX ))	      
			{
				printf("vertex program %s\n", source.c_str());
				state = cgGetNamedState(pass->getTechnique()->getEffect()->getContext(), "VertexProgram");
			}
			else if (target == cgGLGetLatestProfile( CG_GL_FRAGMENT ))
			{
				printf("fragment program %s\n", source.c_str());
				state = cgGetNamedState(pass->getTechnique()->getEffect()->getContext(), "FragmentProgram");  
			}
			else
			{
				printf("ERROR.  Unsupported target profile.\n");
			}


			assignment = cgCreateStateAssignment(pass->getPass(), state);

			cgSetProgramStateAssignment(assignment, program);
		}
		else
		{
			printf("program could not be created:  %s\n", fullPath);
		}
	} 
	else
	{
		printf("ERROR:  program name not found:  %s\n", source.c_str());
	}  
}

bool cfxShader::apply()
{
  std::vector<cfxParam*>::iterator paramIter = paramArray.begin();
  while (paramIter != paramArray.end())
    {
      (*paramIter)->apply();
      paramIter++;
    }

  return true;
}

bool cfxShader::validate() const
{
  return true;
}

cfxPass* cfxShader::getPass() const
{
  return pass;
}

CGprogram cfxShader::getProgram() const
{
  return program;
}

const std::string &cfxShader::getName() const
{
	return name;
}

const std::string &cfxShader::getSource() const
{
	return source;
}

const CGprofile &cfxShader::getTarget() const
{
	return target;
}

cfxShader::type_enum cfxShader::getOriginalType() const
{
	return originalType;
}
