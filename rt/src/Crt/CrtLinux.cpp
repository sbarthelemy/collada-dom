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


#include <sys/time.h>

#include "Crt/CrtCg.h"
#include "Crt/CrtPlatform.h"
#include "Crt/CrtRender.h"
#include "Crt/CrtUtils.h"

CrtChar ShaderFilePrefix[CRT_MAX_NAME_SIZE] = "shaders/advanced/"; 
CrtChar TextureFilePrefix[CRT_MAX_NAME_SIZE]= "images/";
CrtChar BasePath[CRT_MAX_NAME_SIZE]= "";

CrtVoid CrtInitPaths()
{
	
	CrtCpy( ShaderFilePrefix, "shaders/advanced/" ); 
	CrtCpy( TextureFilePrefix, "images/" ); 
}
CrtBool CrtExitCg()
{
	CrtPrint("destroying CG context\n");
	_CrtRender.DisableCgProfiles();
	_CrtRender.DestroyCg();
	return CrtFalse;
}
CrtBool CrtInitCg()
{
	CrtPrint("creating CG context\n");
	cgContext = cgCreateContext();
	if(cgContext == NULL)
	{
		printf("Failed to create CG context\n");
		return CrtFalse;
	}

	// Register GL states
	cgGLRegisterStates(cgContext);
	
	// Get the latest GL Vertex Profile
	cgVertexProfile   = cgGLGetLatestProfile(CG_GL_VERTEX);    // Was hardcoded to CG_PROFILE_SCE_VP_TYPEB
	cgFragmentProfile = cgGLGetLatestProfile(CG_GL_FRAGMENT);  // Was hardcoded to CG_PROFILE_SCE_FP_TYPEB

	// Make sure the profiles came back valid
	if(cgVertexProfile == CG_PROFILE_UNKNOWN || cgFragmentProfile == CG_PROFILE_UNKNOWN)
	{
		CrtPrint("Invalid profile type returned from cgGLGetLatestProfile\n");
		return CrtFalse;
	}
	
	// Set Optimal Options for this profile 
	cgGLSetOptimalOptions(cgVertexProfile);
	cgGLSetOptimalOptions(cgFragmentProfile);
	
	// Check for Cg errors
	if ( !CrtCheckForCgError() )
		return CrtFalse;

	CrtPrint("CG context created\n");

	return CrtTrue; 
}

CrtFloat CrtRender::GetTime(void)
{
 struct timeval		LTV;
 struct timezone	LTZ;

 if(gettimeofday(&LTV, &LTZ) != -1)
 {
  long long	LTime = LTV.tv_sec;

  LTime *= 1000000;LTime += LTV.tv_usec;
  return((CrtFloat)LTime);
 }
 return(0.0);
}

CrtInt CrtRender::LoadCgProgram( CrtChar * fileName, const CrtInt programType )
{
	CrtChar fullFileName[CRT_MAX_NAME_SIZE]; 
	
	CrtCpy( fullFileName, ShaderFilePrefix );
	CrtCat( fullFileName, fileName ); 

	CrtPrint(" Loading %s Shader From Binary \n", fullFileName ); 

	// get the name extention 
	CrtChar * ext = CrtGetExtention( fullFileName );                 
	
	if ( !CrtCmpIn( ext, ".cg" ) && !CrtCmpIn( ext, ".CG" ) )
	{
		CrtPrint("CrtRender::LoadCgProgram: Invalid File Name %s \n", fullFileName ); 
		return -1; 
	}
	// Load And Compile The Vertex Shader From File
	if ( programType == CrtFragmentProgram )
	{	
		CrtCpy( ext, ".cg" ); 
		//CrtPrint("Loading %s Fragment Program \n", fullFileName ); 
//		cgPrograms[NumCgPrograms] =	cgCreateProgramFromFile(cgContext, CG_BINARY, fullFileName, cgFragmentProfile, NULL, NULL);
		cgPrograms[NumCgPrograms] = cgCreateProgramFromFile(cgContext, CG_SOURCE, fullFileName, cgFragmentProfile, NULL, NULL);
	}
	else
	{
		CrtCpy( ext, ".cg" ); 
		//CrtPrint("Loading %s Vertex Program \n", fullFileName ); 
//		cgPrograms[NumCgPrograms] =	cgCreateProgramFromFile(cgContext, CG_BINARY, fullFileName, cgVertexProfile, NULL, NULL);
		cgPrograms[NumCgPrograms] = cgCreateProgramFromFile(cgContext, CG_SOURCE, fullFileName, cgVertexProfile, "main", 0);
	}

	// Validate Success
	if (cgPrograms[NumCgPrograms] == NULL)
	{
		// Check for a Cg Error, If So switch to FixedFunction
		if ( ! CrtCheckForCgError() )
			return -1;

		// failed to load CgShader 
		CrtChar buff[CRT_MAX_NAME_SIZE];
		sprintf(buff," Shader Load Failed %s \n", fileName ); 
		return -1;													
	}
	
	CrtPrint(" Shader ID %d \n", cgPrograms[NumCgPrograms] ); 

	cgGLLoadProgram(cgPrograms[NumCgPrograms]);	
	NumCgPrograms ++;

	return NumCgPrograms - 1; 
}

CrtVoid	CrtInitExtentions(){};

