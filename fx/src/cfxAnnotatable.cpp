/*
* Copyright 2006 Sony Computer Entertainment Inc.
*
* Licensed under the MIT Open Source License, for details please see license.txt or the website
* http://www.opensource.org/licenses/mit-license.php
*
*/
#include <cfxAnnotatable.h>


// cfxAnnotatable
cfxAnnotatable::cfxAnnotatable() 
{
}
 
cfxAnnotatable::~cfxAnnotatable() 
{
}
 
void cfxAnnotatable::pushAnnotate(cfxAnnotate* annotate)
{
  annotateArray.push_back(annotate);
}

const std::vector<cfxAnnotate*> &cfxAnnotatable::getAnnotateArray() const
{
	return annotateArray;
}
