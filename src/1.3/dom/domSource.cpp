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
#include <dom/domSource.h>

daeElementRef
domSource::create(daeInt bytes)
{
	domSourceRef ref = new(bytes) domSource;
	return ref;
}


daeMetaElement *
domSource::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source" );
	_Meta->setStaticPointerAddress(&domSource::_Meta);
	_Meta->registerConstructor(domSource::create);

	// Add elements: array, bool_array, float_array, int_array, Name_array, technique
    _Meta->appendArrayElement(domArray::registerElement(),daeOffsetOf(domSource,elemArray_array));
    _Meta->appendArrayElement(domBool_array::registerElement(),daeOffsetOf(domSource,elemBool_array_array));
    _Meta->appendArrayElement(domFloat_array::registerElement(),daeOffsetOf(domSource,elemFloat_array_array));
    _Meta->appendArrayElement(domInt_array::registerElement(),daeOffsetOf(domSource,elemInt_array_array));
    _Meta->appendArrayElement(domName_array::registerElement(),daeOffsetOf(domSource,elemName_array_array));
    _Meta->appendArrayElement(domSource::domTechnique::registerElement(),daeOffsetOf(domSource,elemTechnique_array));
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domSource,_contents));


	//	Add attribute: id
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "id" );
		ma->setType( daeAtomicType::get("xsID"));
		ma->setOffset( daeOffsetOf( domSource , attrId ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNCName"));
		ma->setOffset( daeOffsetOf( domSource , attrName ));
		ma->setContainer( _Meta );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSource));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domSource::domTechnique::create(daeInt bytes)
{
	domSource::domTechniqueRef ref = new(bytes) domSource::domTechnique;
	return ref;
}


daeMetaElement *
domSource::domTechnique::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "technique" );
	_Meta->setStaticPointerAddress(&domSource::domTechnique::_Meta);
	_Meta->registerConstructor(domSource::domTechnique::create);

	// Add elements: asset, param, accessor, combiner, joints, program
    _Meta->appendElement(domAsset::registerElement(),daeOffsetOf(domSource::domTechnique,elemAsset));
    _Meta->appendArrayElement(domParam::registerElement(),daeOffsetOf(domSource::domTechnique,elemParam_array));
    _Meta->appendArrayElement(domAccessor::registerElement(),daeOffsetOf(domSource::domTechnique,elemAccessor_array));
    _Meta->appendElement(domCombiner::registerElement(),daeOffsetOf(domSource::domTechnique,elemCombiner));
    _Meta->appendElement(domJoints::registerElement(),daeOffsetOf(domSource::domTechnique,elemJoints));
    _Meta->appendElement(domProgram::registerElement(),daeOffsetOf(domSource::domTechnique,elemProgram));

	//	Add attribute: profile
 	{
		daeMetaAttribute* ma = new daeMetaAttribute;
		ma->setName( "profile" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domSource::domTechnique , attrProfile ));
		ma->setContainer( _Meta );
		ma->setIsRequired( true );
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domSource::domTechnique));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domSource::_Meta = NULL;
daeMetaElement * domSource::domTechnique::_Meta = NULL;


