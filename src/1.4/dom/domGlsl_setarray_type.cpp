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
#include <dom/domGlsl_setarray_type.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domGlsl_setarray_type::create(daeInt bytes)
{
	domGlsl_setarray_typeRef ref = new(bytes) domGlsl_setarray_type;
	return ref;
}


daeMetaElement *
domGlsl_setarray_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "glsl_setarray_type" );
	_Meta->registerClass(domGlsl_setarray_type::create, &_Meta);

	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaChoice( _Meta, cm, 0, 0, 0, -1 );

	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "glsl_param_type" );
	mea->setOffset( daeOffsetOf(domGlsl_setarray_type,elemGlsl_param_type_array) );
	mea->setElementType( domGlsl_param_type::registerElement() );
	cm->appendChild( new daeMetaGroup( mea, _Meta, cm, 0, 1, 1 ) );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "array" );
	mea->setOffset( daeOffsetOf(domGlsl_setarray_type,elemArray_array) );
	mea->setElementType( domGlsl_setarray_type::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 3000 );
	_Meta->setCMRoot( cm );	
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domGlsl_setarray_type,_contents));
    _Meta->addContentsOrder(daeOffsetOf(domGlsl_setarray_type,_contentsOrder));

    _Meta->addCMDataArray(daeOffsetOf(domGlsl_setarray_type,_CMData), 1);
	//	Add attribute: length
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "length" );
		ma->setType( daeAtomicType::get("xsPositiveInteger"));
		ma->setOffset( daeOffsetOf( domGlsl_setarray_type , attrLength ));
		ma->setContainer( _Meta );
		ma->setIsRequired( false );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domGlsl_setarray_type));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domGlsl_setarray_type::_Meta = NULL;


