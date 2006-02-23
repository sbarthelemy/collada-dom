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
#include <dom/domScene.h>

daeElementRef
domScene::create(daeInt bytes)
{
	domSceneRef ref = new(bytes) domScene;
	return ref;
}


daeMetaElement *
domScene::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "scene" );
	_Meta->setStaticPointerAddress(&domScene::_Meta);
	_Meta->registerConstructor(domScene::create);

	// Add elements: lookat, matrix, perspective, rotate, scale, skew, translate, boundingbox, node, extra
    _Meta->appendArrayElement(domLookat::registerElement(),daeOffsetOf(domScene,elemLookat_array));
    _Meta->appendArrayElement(domMatrix::registerElement(),daeOffsetOf(domScene,elemMatrix_array));
    _Meta->appendArrayElement(domPerspective::registerElement(),daeOffsetOf(domScene,elemPerspective_array));
    _Meta->appendArrayElement(domRotate::registerElement(),daeOffsetOf(domScene,elemRotate_array));
    _Meta->appendArrayElement(domScale::registerElement(),daeOffsetOf(domScene,elemScale_array));
    _Meta->appendArrayElement(domSkew::registerElement(),daeOffsetOf(domScene,elemSkew_array));
    _Meta->appendArrayElement(domTranslate::registerElement(),daeOffsetOf(domScene,elemTranslate_array));
    _Meta->appendArrayElement(domBoundingbox::registerElement(),daeOffsetOf(domScene,elemBoundingbox_array));
    _Meta->appendArrayElement(domNode::registerElement(),daeOffsetOf(domScene,elemNode_array));
    _Meta->appendArrayElement(domExtra::registerElement(),daeOffsetOf(domScene,elemExtra_array));
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domScene,_contents));


	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domScene , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domScene , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domScene));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domScene::_Meta = NULL;


