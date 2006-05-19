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

#ifndef __DAE_META_SEQUENCE_H__
#define __DAE_META_SEQUENCE_H__

#include <dae/daeMetaCMPolicy.h>

class daeMetaSequence : public daeMetaCMPolicy
{
public:
	daeMetaSequence( daeMetaElement *container, daeMetaCMPolicy *parent = NULL, daeUInt ordinal = 0, daeInt minO = 1, daeInt maxO = 1 );
	~daeMetaSequence();

	daeBool placeElement( daeElement *parent, daeElement *child, daeUInt &ordinal, daeInt offset = 0, daeElement* before = NULL, daeElement *after = NULL );
	daeBool removeElement(daeElement* parent, daeElement* child);
	daeMetaElement *findChild( daeString elementName );
	void getChildren( daeElement* parent, daeElementRefArray &array );
	
};


#endif


