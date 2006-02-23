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
#include <dom/domExtra.h>

daeElementRef
domExtra::create(daeInt bytes)
{
	domExtraRef ref = new(bytes) domExtra;
	return ref;
}


daeMetaElement *
domExtra::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "extra" );
	_Meta->setStaticPointerAddress(&domExtra::_Meta);
	_Meta->registerConstructor(domExtra::create);

	// Add elements: technique
    _Meta->appendArrayElement(domExtra::domTechnique::registerElement(),daeOffsetOf(domExtra,elemTechnique_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domExtra , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domExtra , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: type
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "type" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domExtra , attrType ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domExtra));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domExtra::domTechnique::create(daeInt bytes)
{
	domExtra::domTechniqueRef ref = new(bytes) domExtra::domTechnique;
	return ref;
}


daeMetaElement *
domExtra::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&domExtra::domTechnique::_Meta);
	_Meta->registerConstructor(domExtra::domTechnique::create);

	// Add elements: asset, param
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domExtra::domTechnique,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domExtra::domTechnique,elemParam_array));

	//	Add attribute: profile
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domExtra::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domExtra::domTechnique));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domExtra::_Meta = NULL;
daeMetaElement * domExtra::domTechnique::_Meta = NULL;


