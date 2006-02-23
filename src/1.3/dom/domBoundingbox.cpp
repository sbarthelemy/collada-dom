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

#include <dae/daeDom.h>
#include <dom/domBoundingbox.h>

daeElementRef
domBoundingbox::create(daeInt bytes)
{
	domBoundingboxRef ref = new(bytes) domBoundingbox;
	return ref;
}


daeMetaElement *
domBoundingbox::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "boundingbox" );
	_Meta->setStaticPointerAddress(&domBoundingbox::_Meta);
	_Meta->registerConstructor(domBoundingbox::create);

	// Add elements: min, max
    _Meta->appendElement(domBoundingbox::domMin::registerElement(),daeOffsetOf(domBoundingbox,elemMin));
    _Meta->appendElement(domBoundingbox::domMax::registerElement(),daeOffsetOf(domBoundingbox,elemMax));

	//	Add attribute: sid
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "sid" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domBoundingbox , attrSid ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domBoundingbox));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domBoundingbox::domMin::create(daeInt bytes)
{
	domBoundingbox::domMinRef ref = new(bytes) domBoundingbox::domMin;
	return ref;
}


daeMetaElement *
domBoundingbox::domMin::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "min" );
	_Meta->setStaticPointerAddress(&domBoundingbox::domMin::_Meta);
	_Meta->registerConstructor(domBoundingbox::domMin::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("Float3"));
		ma->setOffset( daeOffsetOf( domBoundingbox::domMin , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: sid
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "sid" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domBoundingbox::domMin , attrSid ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domBoundingbox::domMin));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domBoundingbox::domMax::create(daeInt bytes)
{
	domBoundingbox::domMaxRef ref = new(bytes) domBoundingbox::domMax;
	return ref;
}


daeMetaElement *
domBoundingbox::domMax::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "max" );
	_Meta->setStaticPointerAddress(&domBoundingbox::domMax::_Meta);
	_Meta->registerConstructor(domBoundingbox::domMax::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("Float3"));
		ma->setOffset( daeOffsetOf( domBoundingbox::domMax , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: sid
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "sid" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domBoundingbox::domMax , attrSid ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domBoundingbox::domMax));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domBoundingbox::_Meta = NULL;
daeMetaElement * domBoundingbox::domMin::_Meta = NULL;
daeMetaElement * domBoundingbox::domMax::_Meta = NULL;


