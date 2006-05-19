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
#include <dom/domAsset.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domAsset::create(daeInt bytes)
{
	domAssetRef ref = new(bytes) domAsset;
	return ref;
}


daeMetaElement *
domAsset::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "asset" );
	_Meta->registerConstructor(domAsset::create);

	daeMetaCMPolicy *cm = NULL;
	daeMetaElementAttribute *mea = NULL;
	cm = new daeMetaChoice( _Meta, cm, 0, 0, -1 );

	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "author" );
	mea->setOffset( daeOffsetOf(domAsset,elemAuthor_array) );
	mea->setElementType( domAsset::domAuthor::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "authoring_tool" );
	mea->setOffset( daeOffsetOf(domAsset,elemAuthoring_tool_array) );
	mea->setElementType( domAsset::domAuthoring_tool::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "created" );
	mea->setOffset( daeOffsetOf(domAsset,elemCreated_array) );
	mea->setElementType( domAsset::domCreated::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "modified" );
	mea->setOffset( daeOffsetOf(domAsset,elemModified_array) );
	mea->setElementType( domAsset::domModified::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "revision" );
	mea->setOffset( daeOffsetOf(domAsset,elemRevision_array) );
	mea->setElementType( domAsset::domRevision::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "source_data" );
	mea->setOffset( daeOffsetOf(domAsset,elemSource_data_array) );
	mea->setElementType( domAsset::domSource_data::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "copyright" );
	mea->setOffset( daeOffsetOf(domAsset,elemCopyright_array) );
	mea->setElementType( domAsset::domCopyright::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "title" );
	mea->setOffset( daeOffsetOf(domAsset,elemTitle_array) );
	mea->setElementType( domAsset::domTitle::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "subject" );
	mea->setOffset( daeOffsetOf(domAsset,elemSubject_array) );
	mea->setElementType( domAsset::domSubject::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "keywords" );
	mea->setOffset( daeOffsetOf(domAsset,elemKeywords_array) );
	mea->setElementType( domAsset::domKeywords::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "comments" );
	mea->setOffset( daeOffsetOf(domAsset,elemComments_array) );
	mea->setElementType( domAsset::domComments::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "up_axis" );
	mea->setOffset( daeOffsetOf(domAsset,elemUp_axis_array) );
	mea->setElementType( domAsset::domUp_axis::registerElement() );
	cm->appendChild( mea );
	
	mea = new daeMetaElementArrayAttribute( _Meta, cm, 0, 1, 1 );
	mea->setName( "unit" );
	mea->setOffset( daeOffsetOf(domAsset,elemUnit_array) );
	mea->setElementType( domAsset::domUnit::registerElement() );
	cm->appendChild( mea );
	
	cm->setMaxOrdinal( 0 );
	_Meta->setCMRoot( cm );	
	// Ordered list of sub-elements
    _Meta->addContents(daeOffsetOf(domAsset,_contents));
    _Meta->addContentsOrder(daeOffsetOf(domAsset,_contentsOrder));

	
	
	_Meta->setElementSize(sizeof(domAsset));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domAuthor::create(daeInt bytes)
{
	domAsset::domAuthorRef ref = new(bytes) domAsset::domAuthor;
	return ref;
}


daeMetaElement *
domAsset::domAuthor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "author" );
	_Meta->registerConstructor(domAsset::domAuthor::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domAuthor , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domAuthor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domAuthoring_tool::create(daeInt bytes)
{
	domAsset::domAuthoring_toolRef ref = new(bytes) domAsset::domAuthoring_tool;
	return ref;
}


daeMetaElement *
domAsset::domAuthoring_tool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "authoring_tool" );
	_Meta->registerConstructor(domAsset::domAuthoring_tool::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domAuthoring_tool , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domAuthoring_tool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domCreated::create(daeInt bytes)
{
	domAsset::domCreatedRef ref = new(bytes) domAsset::domCreated;
	return ref;
}


daeMetaElement *
domAsset::domCreated::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "created" );
	_Meta->registerConstructor(domAsset::domCreated::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsDateTime"));
		ma->setOffset( daeOffsetOf( domAsset::domCreated , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domCreated));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domModified::create(daeInt bytes)
{
	domAsset::domModifiedRef ref = new(bytes) domAsset::domModified;
	return ref;
}


daeMetaElement *
domAsset::domModified::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "modified" );
	_Meta->registerConstructor(domAsset::domModified::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsDateTime"));
		ma->setOffset( daeOffsetOf( domAsset::domModified , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domModified));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domRevision::create(daeInt bytes)
{
	domAsset::domRevisionRef ref = new(bytes) domAsset::domRevision;
	return ref;
}


daeMetaElement *
domAsset::domRevision::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "revision" );
	_Meta->registerConstructor(domAsset::domRevision::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domRevision , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domRevision));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domSource_data::create(daeInt bytes)
{
	domAsset::domSource_dataRef ref = new(bytes) domAsset::domSource_data;
	ref->_value.setContainer( (domAsset::domSource_data*)ref );
	return ref;
}


daeMetaElement *
domAsset::domSource_data::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "source_data" );
	_Meta->registerConstructor(domAsset::domSource_data::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsAnyURI"));
		ma->setOffset( daeOffsetOf( domAsset::domSource_data , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domSource_data));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domCopyright::create(daeInt bytes)
{
	domAsset::domCopyrightRef ref = new(bytes) domAsset::domCopyright;
	return ref;
}


daeMetaElement *
domAsset::domCopyright::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "copyright" );
	_Meta->registerConstructor(domAsset::domCopyright::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domCopyright , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domCopyright));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domTitle::create(daeInt bytes)
{
	domAsset::domTitleRef ref = new(bytes) domAsset::domTitle;
	return ref;
}


daeMetaElement *
domAsset::domTitle::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "title" );
	_Meta->registerConstructor(domAsset::domTitle::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domTitle , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domTitle));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domSubject::create(daeInt bytes)
{
	domAsset::domSubjectRef ref = new(bytes) domAsset::domSubject;
	return ref;
}


daeMetaElement *
domAsset::domSubject::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "subject" );
	_Meta->registerConstructor(domAsset::domSubject::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domSubject , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domSubject));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domKeywords::create(daeInt bytes)
{
	domAsset::domKeywordsRef ref = new(bytes) domAsset::domKeywords;
	return ref;
}


daeMetaElement *
domAsset::domKeywords::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "keywords" );
	_Meta->registerConstructor(domAsset::domKeywords::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domKeywords , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domKeywords));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domComments::create(daeInt bytes)
{
	domAsset::domCommentsRef ref = new(bytes) domAsset::domComments;
	return ref;
}


daeMetaElement *
domAsset::domComments::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "comments" );
	_Meta->registerConstructor(domAsset::domComments::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("xsString"));
		ma->setOffset( daeOffsetOf( domAsset::domComments , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domComments));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domUp_axis::create(daeInt bytes)
{
	domAsset::domUp_axisRef ref = new(bytes) domAsset::domUp_axis;
	return ref;
}


daeMetaElement *
domAsset::domUp_axis::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "up_axis" );
	_Meta->registerConstructor(domAsset::domUp_axis::create);

	_Meta->setIsInnerClass( true );
	//	Add attribute: _value
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( daeAtomicType::get("UpAxisType"));
		ma->setOffset( daeOffsetOf( domAsset::domUp_axis , _value ));
		ma->setContainer( _Meta );
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domUp_axis));
	_Meta->validate();

	return _Meta;
}

daeElementRef
domAsset::domUnit::create(daeInt bytes)
{
	domAsset::domUnitRef ref = new(bytes) domAsset::domUnit;
	return ref;
}


daeMetaElement *
domAsset::domUnit::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "unit" );
	_Meta->registerConstructor(domAsset::domUnit::create);

	_Meta->setIsInnerClass( true );

	//	Add attribute: meter
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "meter" );
		ma->setType( daeAtomicType::get("xsDouble"));
		ma->setOffset( daeOffsetOf( domAsset::domUnit , attrMeter ));
		ma->setContainer( _Meta );
		ma->setDefault( "1.000");
	
		_Meta->appendAttribute(ma);
	}

	//	Add attribute: name
 	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "name" );
		ma->setType( daeAtomicType::get("xsNMTOKEN"));
		ma->setOffset( daeOffsetOf( domAsset::domUnit , attrName ));
		ma->setContainer( _Meta );
		ma->setDefault( "meter");
	
		_Meta->appendAttribute(ma);
	}
	
	
	_Meta->setElementSize(sizeof(domAsset::domUnit));
	_Meta->validate();

	return _Meta;
}


daeMetaElement * domAsset::_Meta = NULL;
daeMetaElement * domAsset::domAuthor::_Meta = NULL;
daeMetaElement * domAsset::domAuthoring_tool::_Meta = NULL;
daeMetaElement * domAsset::domCreated::_Meta = NULL;
daeMetaElement * domAsset::domModified::_Meta = NULL;
daeMetaElement * domAsset::domRevision::_Meta = NULL;
daeMetaElement * domAsset::domSource_data::_Meta = NULL;
daeMetaElement * domAsset::domCopyright::_Meta = NULL;
daeMetaElement * domAsset::domTitle::_Meta = NULL;
daeMetaElement * domAsset::domSubject::_Meta = NULL;
daeMetaElement * domAsset::domKeywords::_Meta = NULL;
daeMetaElement * domAsset::domComments::_Meta = NULL;
daeMetaElement * domAsset::domUp_axis::_Meta = NULL;
daeMetaElement * domAsset::domUnit::_Meta = NULL;


