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

#include <string>
#include <map>
#include <dae/daeURI.h>
class DAE;

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
	DLLSPEC daeRawResolver(DAE& dae);
	/**
	 * Destructor.
	 */
	DLLSPEC ~daeRawResolver();

public: // Abstract Interface
	virtual DLLSPEC daeElement* resolveElement(daeURI& uri);
	virtual DLLSPEC daeString getName();
};

// A simple class to make speed up the process of resolving a .raw URI.
// The result of the resolve is cached for future use.
// This is meant for DOM internal use only.
class daeRawRefCache {
public:
	DLLSPEC daeElement* lookup(const daeURI& uri);
	DLLSPEC void add(const daeURI& uri, daeElement* elt);
	DLLSPEC void remove(const daeURI& uri);
	DLLSPEC void clear();

private:
	std::map<std::string, daeElement*> lookupTable;
};

#endif

