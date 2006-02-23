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
#include <dom/domLines.h>

daeElementRef
domLines::create(daeInt bytes)
{
	domLinesRef ref = new(bytes) domLines;
	ref->attrMaterial.setContainer( (domLines*)ref );
	return ref;
}


daeMetaElement *
domLines::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "lines" );
	_Meta->setStaticPointerAddress(&domLines::_Meta);
	_Meta->registerConstructor(domLines::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domLines,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domLines,elemInput_array));
    _Meta->appendArrayElement(domLines::domP::registerElement(),daeOffsetOf(domLines,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domLines , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domLines , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLines));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domLines::domP::create(daeInt bytes)
{
	domLines::domPRef ref = new(bytes) domLines::domP;
	return ref;
}


daeMetaElement *
domLines::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domLines::domP::_Meta);
	_Meta->registerConstructor(domLines::domP::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domLines::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domLines::domP));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domLines::_Meta = NULL;
daeMetaElement * domLines::domP::_Meta = NULL;


