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

#ifndef __DAE_RAWRESOLVER_H__
#define __DAE_RAWRESOLVER_H__

#include <dae/daeURI.h>

/**
 * The @c daeRawResolver class derives from @c daeURIResolver and implements
 * the .raw backend resolver for raw binary data.
 */
class daeRawResolver : public daeURIResolver
{
public:
	/**
	 * Constructor.
	 */
	DLLSPEC daeRawResolver();
	/**
	 * Destructor.
	 */
	DLLSPEC ~daeRawResolver();

public: // Abstract Interface
	virtual DLLSPEC daeBool resolveElement(daeURI& uri, daeString typeNameHint = NULL);
	virtual DLLSPEC daeBool resolveURI(daeURI& uri);
	virtual DLLSPEC daeString getName();
	virtual DLLSPEC daeBool isProtocolSupported(daeString protocol);
	virtual DLLSPEC daeBool isExtensionSupported(daeString extension);
};


#endif

