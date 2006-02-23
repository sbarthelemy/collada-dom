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
#include <dom/domCOLLADA.h>

daeElementRef
domCOLLADA::create(daeInt bytes)
{
	domCOLLADARef ref = new(bytes) domCOLLADA;
	ref->attrXmlns.setContainer( (domCOLLADA*)ref );
	return ref;
}


daeMetaElement *
domCOLLADA::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "COLLADA" );
	_Meta->setStaticPointerAddress(&domCOLLADA::_Meta);
	_Meta->registerConstructor(domCOLLADA::create);

	// Add elements: asset, library, scene
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domCOLLADA,elemAsset));
    _Meta->appendArrayElement(domLibrary::registerElement(),daeOffsetOf(domCOLLADA,elemLibrary_array));
    _Meta->appendElement(domScene::registerElement(),daeOffsetOf(domCOLLADA,elemScene));
    //	Add attribute: xmlns
    {
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "xmlns" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domCOLLADA , attrXmlns ));
		ma->setContainer( _Meta );
		//ma->setIsRequired( true );
		_Meta->appendAttribute(ma);
	}
    
	//	Add attribute: version
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "version" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domCOLLADA , attrVersion ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domCOLLADA));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domCOLLADA::_Meta = NULL;


