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
#include <dom/domTrifans.h>

daeElementRef
domTrifans::create(daeInt bytes)
{
	domTrifansRef ref = new(bytes) domTrifans;
	ref->attrMaterial.setContainer( (domTrifans*)ref );
	return ref;
}


daeMetaElement *
domTrifans::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "trifans" );
	_Meta->setStaticPointerAddress(&domTrifans::_Meta);
	_Meta->registerConstructor(domTrifans::create);

	// Add elements: param, input, p
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domTrifans,elemParam_array));
    _Meta->appendArrayElement(domInput::registerElement(),daeOffsetOf(domTrifans,elemInput_array));
    _Meta->appendArrayElement(domTrifans::domP::registerElement(),daeOffsetOf(domTrifans,elemP_array));

	//	Add attribute: count
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "count" );
		ma->setType( daeAtomicType::get("xsNonNegativeInteger"));
		ma->setOffset( daeOffsetOf( domTrifans , attrCount ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: material
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "material" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domTrifans , attrMaterial ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTrifans));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domTrifans::domP::create(daeInt bytes)
{
	domTrifans::domPRef ref = new(bytes) domTrifans::domP;
	return ref;
}


daeMetaElement *
domTrifans::domP::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "p" );
	_Meta->setStaticPointerAddress(&domTrifans::domP::_Meta);
	_Meta->registerConstructor(domTrifans::domP::create);

	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaArrayAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("ListOfInts"));
		ma->setOffset( daeOffsetOf( domTrifans::domP , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domTrifans::domP));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domTrifans::_Meta = NULL;
daeMetaElement * domTrifans::domP::_Meta = NULL;


