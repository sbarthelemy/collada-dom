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
#include <dom/domProgram.h>

daeElementRef
domProgram::create(daeInt bytes)
{
	domProgramRef ref = new(bytes) domProgram;
	ref->attrUrl.setContainer( (domProgram*)ref );
	return ref;
}


daeMetaElement *
domProgram::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "program" );
	_Meta->setStaticPointerAddress(&domProgram::_Meta);
	_Meta->registerConstructor(domProgram::create);

	// Add elements: asset, param, entry, code
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domProgram,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domProgram,elemParam_array));
    _Meta->appendArrayElement(domEntry::registerElement(),daeOffsetOf(domProgram,elemEntry_array));
    _Meta->appendArrayElement(domCode::registerElement(),daeOffsetOf(domProgram,elemCode_array));

	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domProgram , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domProgram , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: url
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "url" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domProgram , attrUrl ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domProgram));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domProgram::_Meta = NULL;


