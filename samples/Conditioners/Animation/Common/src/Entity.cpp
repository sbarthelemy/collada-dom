//================================================================================================
// Interchange file viewer C++ version
//
// DESCRIPTION:	
//  Entity base class
//
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
//================================================================================================
#include <iostream>
#include <typeinfo>

#include <assert.h>

#include <Cv/Types.h>



CvEntity::CvEntity()
{
 this->RefCnt = 0;
 this->Name = NULL;

//printf("%s() <%s> '%s'\n", __func__, typeid(this).name(), this->Name);fflush(stdout);
// std::cout << "Constructing CvEntity <" << this->Name << ">\n";
}


CvEntity::~CvEntity()
{
// printf("%s() <%s> '%s'\n", __func__, typeid(this).name(), this->Name);fflush(stdout);

// std::cout << "Destructing CvEntity <" << this->Name << ">\n";

 if(this->Name) free(this->Name);
}


//================================================================
// Assign an Entity to a Target and update reference count
//
// Argument
//  LTarget   Pointer to the Target
//
// Description
//  This function checks if the target already refers to the Entity
//  The reason we don't just overload the assignment operator is
//  that we need control over when the RefCnt is incremented.
//  There might be local references and tight inner loops when we
//  don't want to waste CPU time by calling an operator and the
//  corresponding CvEntity::Free().
//  If the assignment was already made, you should pass NULL as
//  LTarget. This will make Assign treat it as a new reference.
//
// Return value
//  1 if this was a new reference, 0 otherwise
//================================================================
int CvEntity::Assign(CvEntity** LTarget)
{
//printf("%s() <%s> '%s'\n", __func__, typeid(*this).name(), this->Name);fflush(stdout);

 if(LTarget)
 {
  if(*LTarget)
  {
   if(*LTarget == this) return(0);
   else (*LTarget)->Free();
  }
  *LTarget = this;this->RefCnt += 1;
 }
 else this->RefCnt += 1;

 return(0);
}


//================================================================
// Release a reference of a CvEntity and if RefCnt < 1, free
// the object
//
// Return value
//  The number of references remaining for the object
//================================================================
int CvEntity::Free()
{
 if(this->RefCnt) this->RefCnt -= 1;
 if(this->RefCnt) return(this->RefCnt);

 delete(this);
 return(0);
}
