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

#ifndef __DAE_META_CM_POLICY_H__
#define __DAE_META_CM_POLICY_H__

#include <dae/daeTypes.h>
#include <dae/daeElement.h>
//class daeElement;
class daeMetaElement;

class daeMetaCMPolicy
{
public:
	virtual daeBool placeElement( daeElement *parent, daeElement *child, daeUInt &ordinal, daeInt offset = 0, daeElement* before = NULL, daeElement *after = NULL ) = 0;
	virtual daeBool removeElement(daeElement* parent, daeElement* child ) = 0;
	virtual daeMetaElement *findChild( daeString elementName ) = 0;
	virtual void getChildren( daeElement* parent, daeElementRefArray &array ) = 0;

	void appendChild( daeMetaCMPolicy *p ) { _children.append( p ); }

	daeMetaCMPolicy *getParent() { return _parent; }

	void setMaxOrdinal( daeUInt ord ) { _maxOrdinal = ord; }

protected:
	daeMetaCMPolicy( daeMetaElement *container ,daeMetaCMPolicy *parent, daeUInt ordinal, 
					 daeInt minO, daeInt maxO ) : _container( container ), _parent( parent ), _minOccurs( minO ), 
					 _maxOccurs( maxO ), _maxOrdinal( 0 ), _ordinalOffset( ordinal ) {}

	virtual ~daeMetaCMPolicy();

	daeMetaElement * _container;
	daeMetaCMPolicy * _parent;
	daeTArray<daeMetaCMPolicy*> _children;

	/** Minimum number of times this meta element can occur. */
	daeInt _minOccurs;
	/** Maximum number of times this meta element can occur. -1 for unbounded */
	daeInt _maxOccurs;

	daeUInt _maxOrdinal;
	daeUInt _ordinalOffset;

};

#endif

