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

#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include <cfxError.h>


// this is a handy callback for the cg errors
void cfxCgErrorCallback()
{
		CGerror error = cgGetError();
			
#ifndef _LIB
		const char* report = cgGetErrorString(error);
		printf("CG Error Detected:  %s\n", report);

		assert(0 && report);
#endif
}


CGerror cfxCheckCgError()
{
		CGerror error = cgGetError();
			
		if (error != CG_NO_ERROR)
		{
			const char* report = cgGetErrorString(error);
			printf("CG Error Detected:  %s\n", report);
			assert(0 && report);
		}

		return error;
}




