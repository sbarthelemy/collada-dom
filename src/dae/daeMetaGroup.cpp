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

#include <dae/daeMetaGroup.h>
#include <dae/daeMetaElementAttribute.h>
#include <dae/daeMetaElement.h>

daeMetaGroup::daeMetaGroup( daeMetaElementAttribute *econ, daeMetaElement *container, 
							daeMetaCMPolicy *parent, daeUInt ordinal, daeInt minO, daeInt maxO) : 
							daeMetaCMPolicy( container, parent, ordinal, minO, maxO ), _elementContainer( econ )
{}

daeMetaGroup::~daeMetaGroup()
{
	if ( _elementContainer != NULL ) {
		delete _elementContainer;
	}
}

daeBool daeMetaGroup::placeElement( daeElement *parent, daeElement *child, daeUInt &ordinal, daeInt offset, daeElement* before, daeElement *after ) {
	(void)offset;
	daeString nm = child->getElementName();
	if ( nm == NULL ) {
		nm = child->getTypeName();
	}
	if ( findChild( nm ) == NULL ) {
		return false;
	}
	daeInt elCnt = _elementContainer->getCount(parent);
	daeElementRef el;
	//check existing groups
	for ( daeInt x = 0; x < elCnt; x++ ) {
		daeMemoryRef mem = _elementContainer->get(parent, x );
		if ( mem != NULL ) {
			el = *(daeElementRef*)mem;
		}
		if ( el == NULL ) {
			continue;
		}
		if ( before != NULL ) {
			if ( _elementContainer->_elementType->placeBefore( before, el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
		else if ( after != NULL ) {
			if ( _elementContainer->_elementType->placeAfter( after, el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
		else {
			if ( _elementContainer->_elementType->place( el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
	}
	//if you couldn't place in existing groups make a new one if you can
	if ( _elementContainer->placeElement(parent, _elementContainer->_elementType->create(), ordinal ) ) {
		el = *(daeElementRef*)_elementContainer->get(parent, elCnt );
		if ( before != NULL ) {
			if ( _elementContainer->_elementType->placeBefore( before, el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
		else if ( after != NULL ) {
			if ( _elementContainer->_elementType->placeAfter( after, el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
		else {
			if ( _elementContainer->_elementType->place( el, child, &ordinal ) ) {
				ordinal = ordinal + _ordinalOffset;
				return true;
			}
		}
	}
	return false;
}

daeBool daeMetaGroup::removeElement( daeElement *parent, daeElement *child ) {
	//TODO: This will always fail. Make it work
	return _elementContainer->removeElement( parent, child );
}

daeMetaElement * daeMetaGroup::findChild( daeString elementName ) {
	return _elementContainer->_elementType->getCMRoot()->findChild( elementName );
}

void daeMetaGroup::getChildren( daeElement *parent, daeElementRefArray &array ) {
	size_t cnt = _elementContainer->getCount( parent );
	for ( size_t x = 0; x < cnt; x++ ) {
		(*((daeElementRef*)_elementContainer->get(parent, (daeInt)x )))->getChildren(array);
	}
	//_elementContainer->_elementType->getChildren( parent, array );
}

