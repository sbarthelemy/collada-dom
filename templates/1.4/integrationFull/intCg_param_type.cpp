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
#include "intCg_param_type.h"
#include <dom/domCg_param_type.h>

daeMetaElement * intCg_param_type::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool1::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool2::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool3::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool4::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool1x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool1x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool1x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool1x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool2x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool2x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool2x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool2x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool3x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool3x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool3x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool3x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool4x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool4x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool4x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intBool4x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat1x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat1x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat1x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat1x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat2x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat2x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat2x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat2x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat3x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat3x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat3x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat3x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat4x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat4x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat4x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFloat4x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt1::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt2::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt3::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt4::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt1x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt1x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt1x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt1x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt2x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt2x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt2x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt2x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt3x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt3x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt3x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt3x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt4x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt4x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt4x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intInt4x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf1::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf2::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf3::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf4::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf1x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf1x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf1x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf1x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf2x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf2x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf2x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf2x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf3x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf3x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf3x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf3x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf4x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf4x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf4x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intHalf4x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed1x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed1x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed1x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed1x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed2x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed2x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed2x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed2x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed3x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed3x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed3x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed3x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed4x1::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed4x2::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed4x3::_Meta = NULL;
daeMetaElement * intCg_param_type::intFixed4x4::_Meta = NULL;
daeMetaElement * intCg_param_type::intString::_Meta = NULL;
daeMetaElement * intCg_param_type::intEnum::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intCg_param_type::create(daeInt bytes)
{
	intCg_param_typeRef ref = new(bytes) intCg_param_type;
	return ref;
}

daeMetaElement *
intCg_param_type::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "cg_param_type" );
	_Meta->registerClass(intCg_param_type::create, &_Meta);

	domCg_param_type::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool::create(daeInt bytes)
{
	intCg_param_type::intBoolRef ref = new(bytes) intCg_param_type::intBool;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool" );
	_Meta->registerClass(intCg_param_type::intBool::create, &_Meta);

	domCg_param_type::domBool::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool1::create(daeInt bytes)
{
	intCg_param_type::intBool1Ref ref = new(bytes) intCg_param_type::intBool1;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool1" );
	_Meta->registerClass(intCg_param_type::intBool1::create, &_Meta);

	domCg_param_type::domBool1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool2::create(daeInt bytes)
{
	intCg_param_type::intBool2Ref ref = new(bytes) intCg_param_type::intBool2;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2" );
	_Meta->registerClass(intCg_param_type::intBool2::create, &_Meta);

	domCg_param_type::domBool2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool3::create(daeInt bytes)
{
	intCg_param_type::intBool3Ref ref = new(bytes) intCg_param_type::intBool3;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3" );
	_Meta->registerClass(intCg_param_type::intBool3::create, &_Meta);

	domCg_param_type::domBool3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool4::create(daeInt bytes)
{
	intCg_param_type::intBool4Ref ref = new(bytes) intCg_param_type::intBool4;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4" );
	_Meta->registerClass(intCg_param_type::intBool4::create, &_Meta);

	domCg_param_type::domBool4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool1x1::create(daeInt bytes)
{
	intCg_param_type::intBool1x1Ref ref = new(bytes) intCg_param_type::intBool1x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool1x1" );
	_Meta->registerClass(intCg_param_type::intBool1x1::create, &_Meta);

	domCg_param_type::domBool1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool1x2::create(daeInt bytes)
{
	intCg_param_type::intBool1x2Ref ref = new(bytes) intCg_param_type::intBool1x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool1x2" );
	_Meta->registerClass(intCg_param_type::intBool1x2::create, &_Meta);

	domCg_param_type::domBool1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool1x3::create(daeInt bytes)
{
	intCg_param_type::intBool1x3Ref ref = new(bytes) intCg_param_type::intBool1x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool1x3" );
	_Meta->registerClass(intCg_param_type::intBool1x3::create, &_Meta);

	domCg_param_type::domBool1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool1x4::create(daeInt bytes)
{
	intCg_param_type::intBool1x4Ref ref = new(bytes) intCg_param_type::intBool1x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool1x4" );
	_Meta->registerClass(intCg_param_type::intBool1x4::create, &_Meta);

	domCg_param_type::domBool1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool2x1::create(daeInt bytes)
{
	intCg_param_type::intBool2x1Ref ref = new(bytes) intCg_param_type::intBool2x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2x1" );
	_Meta->registerClass(intCg_param_type::intBool2x1::create, &_Meta);

	domCg_param_type::domBool2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool2x2::create(daeInt bytes)
{
	intCg_param_type::intBool2x2Ref ref = new(bytes) intCg_param_type::intBool2x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2x2" );
	_Meta->registerClass(intCg_param_type::intBool2x2::create, &_Meta);

	domCg_param_type::domBool2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool2x3::create(daeInt bytes)
{
	intCg_param_type::intBool2x3Ref ref = new(bytes) intCg_param_type::intBool2x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2x3" );
	_Meta->registerClass(intCg_param_type::intBool2x3::create, &_Meta);

	domCg_param_type::domBool2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool2x4::create(daeInt bytes)
{
	intCg_param_type::intBool2x4Ref ref = new(bytes) intCg_param_type::intBool2x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2x4" );
	_Meta->registerClass(intCg_param_type::intBool2x4::create, &_Meta);

	domCg_param_type::domBool2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool3x1::create(daeInt bytes)
{
	intCg_param_type::intBool3x1Ref ref = new(bytes) intCg_param_type::intBool3x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3x1" );
	_Meta->registerClass(intCg_param_type::intBool3x1::create, &_Meta);

	domCg_param_type::domBool3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool3x2::create(daeInt bytes)
{
	intCg_param_type::intBool3x2Ref ref = new(bytes) intCg_param_type::intBool3x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3x2" );
	_Meta->registerClass(intCg_param_type::intBool3x2::create, &_Meta);

	domCg_param_type::domBool3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool3x3::create(daeInt bytes)
{
	intCg_param_type::intBool3x3Ref ref = new(bytes) intCg_param_type::intBool3x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3x3" );
	_Meta->registerClass(intCg_param_type::intBool3x3::create, &_Meta);

	domCg_param_type::domBool3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool3x4::create(daeInt bytes)
{
	intCg_param_type::intBool3x4Ref ref = new(bytes) intCg_param_type::intBool3x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3x4" );
	_Meta->registerClass(intCg_param_type::intBool3x4::create, &_Meta);

	domCg_param_type::domBool3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool4x1::create(daeInt bytes)
{
	intCg_param_type::intBool4x1Ref ref = new(bytes) intCg_param_type::intBool4x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4x1" );
	_Meta->registerClass(intCg_param_type::intBool4x1::create, &_Meta);

	domCg_param_type::domBool4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool4x2::create(daeInt bytes)
{
	intCg_param_type::intBool4x2Ref ref = new(bytes) intCg_param_type::intBool4x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4x2" );
	_Meta->registerClass(intCg_param_type::intBool4x2::create, &_Meta);

	domCg_param_type::domBool4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool4x3::create(daeInt bytes)
{
	intCg_param_type::intBool4x3Ref ref = new(bytes) intCg_param_type::intBool4x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4x3" );
	_Meta->registerClass(intCg_param_type::intBool4x3::create, &_Meta);

	domCg_param_type::domBool4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intBool4x4::create(daeInt bytes)
{
	intCg_param_type::intBool4x4Ref ref = new(bytes) intCg_param_type::intBool4x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intBool4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4x4" );
	_Meta->registerClass(intCg_param_type::intBool4x4::create, &_Meta);

	domCg_param_type::domBool4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intBool4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat::create(daeInt bytes)
{
	intCg_param_type::intFloatRef ref = new(bytes) intCg_param_type::intFloat;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerClass(intCg_param_type::intFloat::create, &_Meta);

	domCg_param_type::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat1::create(daeInt bytes)
{
	intCg_param_type::intFloat1Ref ref = new(bytes) intCg_param_type::intFloat1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1" );
	_Meta->registerClass(intCg_param_type::intFloat1::create, &_Meta);

	domCg_param_type::domFloat1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat2::create(daeInt bytes)
{
	intCg_param_type::intFloat2Ref ref = new(bytes) intCg_param_type::intFloat2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2" );
	_Meta->registerClass(intCg_param_type::intFloat2::create, &_Meta);

	domCg_param_type::domFloat2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat3::create(daeInt bytes)
{
	intCg_param_type::intFloat3Ref ref = new(bytes) intCg_param_type::intFloat3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3" );
	_Meta->registerClass(intCg_param_type::intFloat3::create, &_Meta);

	domCg_param_type::domFloat3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat4::create(daeInt bytes)
{
	intCg_param_type::intFloat4Ref ref = new(bytes) intCg_param_type::intFloat4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4" );
	_Meta->registerClass(intCg_param_type::intFloat4::create, &_Meta);

	domCg_param_type::domFloat4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat1x1::create(daeInt bytes)
{
	intCg_param_type::intFloat1x1Ref ref = new(bytes) intCg_param_type::intFloat1x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x1" );
	_Meta->registerClass(intCg_param_type::intFloat1x1::create, &_Meta);

	domCg_param_type::domFloat1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat1x2::create(daeInt bytes)
{
	intCg_param_type::intFloat1x2Ref ref = new(bytes) intCg_param_type::intFloat1x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x2" );
	_Meta->registerClass(intCg_param_type::intFloat1x2::create, &_Meta);

	domCg_param_type::domFloat1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat1x3::create(daeInt bytes)
{
	intCg_param_type::intFloat1x3Ref ref = new(bytes) intCg_param_type::intFloat1x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x3" );
	_Meta->registerClass(intCg_param_type::intFloat1x3::create, &_Meta);

	domCg_param_type::domFloat1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat1x4::create(daeInt bytes)
{
	intCg_param_type::intFloat1x4Ref ref = new(bytes) intCg_param_type::intFloat1x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x4" );
	_Meta->registerClass(intCg_param_type::intFloat1x4::create, &_Meta);

	domCg_param_type::domFloat1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat2x1::create(daeInt bytes)
{
	intCg_param_type::intFloat2x1Ref ref = new(bytes) intCg_param_type::intFloat2x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x1" );
	_Meta->registerClass(intCg_param_type::intFloat2x1::create, &_Meta);

	domCg_param_type::domFloat2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat2x2::create(daeInt bytes)
{
	intCg_param_type::intFloat2x2Ref ref = new(bytes) intCg_param_type::intFloat2x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x2" );
	_Meta->registerClass(intCg_param_type::intFloat2x2::create, &_Meta);

	domCg_param_type::domFloat2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat2x3::create(daeInt bytes)
{
	intCg_param_type::intFloat2x3Ref ref = new(bytes) intCg_param_type::intFloat2x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x3" );
	_Meta->registerClass(intCg_param_type::intFloat2x3::create, &_Meta);

	domCg_param_type::domFloat2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat2x4::create(daeInt bytes)
{
	intCg_param_type::intFloat2x4Ref ref = new(bytes) intCg_param_type::intFloat2x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x4" );
	_Meta->registerClass(intCg_param_type::intFloat2x4::create, &_Meta);

	domCg_param_type::domFloat2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat3x1::create(daeInt bytes)
{
	intCg_param_type::intFloat3x1Ref ref = new(bytes) intCg_param_type::intFloat3x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x1" );
	_Meta->registerClass(intCg_param_type::intFloat3x1::create, &_Meta);

	domCg_param_type::domFloat3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat3x2::create(daeInt bytes)
{
	intCg_param_type::intFloat3x2Ref ref = new(bytes) intCg_param_type::intFloat3x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x2" );
	_Meta->registerClass(intCg_param_type::intFloat3x2::create, &_Meta);

	domCg_param_type::domFloat3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat3x3::create(daeInt bytes)
{
	intCg_param_type::intFloat3x3Ref ref = new(bytes) intCg_param_type::intFloat3x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x3" );
	_Meta->registerClass(intCg_param_type::intFloat3x3::create, &_Meta);

	domCg_param_type::domFloat3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat3x4::create(daeInt bytes)
{
	intCg_param_type::intFloat3x4Ref ref = new(bytes) intCg_param_type::intFloat3x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x4" );
	_Meta->registerClass(intCg_param_type::intFloat3x4::create, &_Meta);

	domCg_param_type::domFloat3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat4x1::create(daeInt bytes)
{
	intCg_param_type::intFloat4x1Ref ref = new(bytes) intCg_param_type::intFloat4x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x1" );
	_Meta->registerClass(intCg_param_type::intFloat4x1::create, &_Meta);

	domCg_param_type::domFloat4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat4x2::create(daeInt bytes)
{
	intCg_param_type::intFloat4x2Ref ref = new(bytes) intCg_param_type::intFloat4x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x2" );
	_Meta->registerClass(intCg_param_type::intFloat4x2::create, &_Meta);

	domCg_param_type::domFloat4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat4x3::create(daeInt bytes)
{
	intCg_param_type::intFloat4x3Ref ref = new(bytes) intCg_param_type::intFloat4x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x3" );
	_Meta->registerClass(intCg_param_type::intFloat4x3::create, &_Meta);

	domCg_param_type::domFloat4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFloat4x4::create(daeInt bytes)
{
	intCg_param_type::intFloat4x4Ref ref = new(bytes) intCg_param_type::intFloat4x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFloat4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x4" );
	_Meta->registerClass(intCg_param_type::intFloat4x4::create, &_Meta);

	domCg_param_type::domFloat4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFloat4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt::create(daeInt bytes)
{
	intCg_param_type::intIntRef ref = new(bytes) intCg_param_type::intInt;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int" );
	_Meta->registerClass(intCg_param_type::intInt::create, &_Meta);

	domCg_param_type::domInt::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt1::create(daeInt bytes)
{
	intCg_param_type::intInt1Ref ref = new(bytes) intCg_param_type::intInt1;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int1" );
	_Meta->registerClass(intCg_param_type::intInt1::create, &_Meta);

	domCg_param_type::domInt1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt2::create(daeInt bytes)
{
	intCg_param_type::intInt2Ref ref = new(bytes) intCg_param_type::intInt2;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2" );
	_Meta->registerClass(intCg_param_type::intInt2::create, &_Meta);

	domCg_param_type::domInt2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt3::create(daeInt bytes)
{
	intCg_param_type::intInt3Ref ref = new(bytes) intCg_param_type::intInt3;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3" );
	_Meta->registerClass(intCg_param_type::intInt3::create, &_Meta);

	domCg_param_type::domInt3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt4::create(daeInt bytes)
{
	intCg_param_type::intInt4Ref ref = new(bytes) intCg_param_type::intInt4;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4" );
	_Meta->registerClass(intCg_param_type::intInt4::create, &_Meta);

	domCg_param_type::domInt4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt1x1::create(daeInt bytes)
{
	intCg_param_type::intInt1x1Ref ref = new(bytes) intCg_param_type::intInt1x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int1x1" );
	_Meta->registerClass(intCg_param_type::intInt1x1::create, &_Meta);

	domCg_param_type::domInt1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt1x2::create(daeInt bytes)
{
	intCg_param_type::intInt1x2Ref ref = new(bytes) intCg_param_type::intInt1x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int1x2" );
	_Meta->registerClass(intCg_param_type::intInt1x2::create, &_Meta);

	domCg_param_type::domInt1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt1x3::create(daeInt bytes)
{
	intCg_param_type::intInt1x3Ref ref = new(bytes) intCg_param_type::intInt1x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int1x3" );
	_Meta->registerClass(intCg_param_type::intInt1x3::create, &_Meta);

	domCg_param_type::domInt1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt1x4::create(daeInt bytes)
{
	intCg_param_type::intInt1x4Ref ref = new(bytes) intCg_param_type::intInt1x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int1x4" );
	_Meta->registerClass(intCg_param_type::intInt1x4::create, &_Meta);

	domCg_param_type::domInt1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt2x1::create(daeInt bytes)
{
	intCg_param_type::intInt2x1Ref ref = new(bytes) intCg_param_type::intInt2x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2x1" );
	_Meta->registerClass(intCg_param_type::intInt2x1::create, &_Meta);

	domCg_param_type::domInt2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt2x2::create(daeInt bytes)
{
	intCg_param_type::intInt2x2Ref ref = new(bytes) intCg_param_type::intInt2x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2x2" );
	_Meta->registerClass(intCg_param_type::intInt2x2::create, &_Meta);

	domCg_param_type::domInt2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt2x3::create(daeInt bytes)
{
	intCg_param_type::intInt2x3Ref ref = new(bytes) intCg_param_type::intInt2x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2x3" );
	_Meta->registerClass(intCg_param_type::intInt2x3::create, &_Meta);

	domCg_param_type::domInt2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt2x4::create(daeInt bytes)
{
	intCg_param_type::intInt2x4Ref ref = new(bytes) intCg_param_type::intInt2x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2x4" );
	_Meta->registerClass(intCg_param_type::intInt2x4::create, &_Meta);

	domCg_param_type::domInt2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt3x1::create(daeInt bytes)
{
	intCg_param_type::intInt3x1Ref ref = new(bytes) intCg_param_type::intInt3x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3x1" );
	_Meta->registerClass(intCg_param_type::intInt3x1::create, &_Meta);

	domCg_param_type::domInt3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt3x2::create(daeInt bytes)
{
	intCg_param_type::intInt3x2Ref ref = new(bytes) intCg_param_type::intInt3x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3x2" );
	_Meta->registerClass(intCg_param_type::intInt3x2::create, &_Meta);

	domCg_param_type::domInt3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt3x3::create(daeInt bytes)
{
	intCg_param_type::intInt3x3Ref ref = new(bytes) intCg_param_type::intInt3x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3x3" );
	_Meta->registerClass(intCg_param_type::intInt3x3::create, &_Meta);

	domCg_param_type::domInt3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt3x4::create(daeInt bytes)
{
	intCg_param_type::intInt3x4Ref ref = new(bytes) intCg_param_type::intInt3x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3x4" );
	_Meta->registerClass(intCg_param_type::intInt3x4::create, &_Meta);

	domCg_param_type::domInt3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt4x1::create(daeInt bytes)
{
	intCg_param_type::intInt4x1Ref ref = new(bytes) intCg_param_type::intInt4x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4x1" );
	_Meta->registerClass(intCg_param_type::intInt4x1::create, &_Meta);

	domCg_param_type::domInt4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt4x2::create(daeInt bytes)
{
	intCg_param_type::intInt4x2Ref ref = new(bytes) intCg_param_type::intInt4x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4x2" );
	_Meta->registerClass(intCg_param_type::intInt4x2::create, &_Meta);

	domCg_param_type::domInt4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt4x3::create(daeInt bytes)
{
	intCg_param_type::intInt4x3Ref ref = new(bytes) intCg_param_type::intInt4x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4x3" );
	_Meta->registerClass(intCg_param_type::intInt4x3::create, &_Meta);

	domCg_param_type::domInt4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intInt4x4::create(daeInt bytes)
{
	intCg_param_type::intInt4x4Ref ref = new(bytes) intCg_param_type::intInt4x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intInt4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4x4" );
	_Meta->registerClass(intCg_param_type::intInt4x4::create, &_Meta);

	domCg_param_type::domInt4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intInt4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf::create(daeInt bytes)
{
	intCg_param_type::intHalfRef ref = new(bytes) intCg_param_type::intHalf;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half" );
	_Meta->registerClass(intCg_param_type::intHalf::create, &_Meta);

	domCg_param_type::domHalf::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf1::create(daeInt bytes)
{
	intCg_param_type::intHalf1Ref ref = new(bytes) intCg_param_type::intHalf1;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half1" );
	_Meta->registerClass(intCg_param_type::intHalf1::create, &_Meta);

	domCg_param_type::domHalf1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf2::create(daeInt bytes)
{
	intCg_param_type::intHalf2Ref ref = new(bytes) intCg_param_type::intHalf2;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half2" );
	_Meta->registerClass(intCg_param_type::intHalf2::create, &_Meta);

	domCg_param_type::domHalf2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf3::create(daeInt bytes)
{
	intCg_param_type::intHalf3Ref ref = new(bytes) intCg_param_type::intHalf3;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half3" );
	_Meta->registerClass(intCg_param_type::intHalf3::create, &_Meta);

	domCg_param_type::domHalf3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf4::create(daeInt bytes)
{
	intCg_param_type::intHalf4Ref ref = new(bytes) intCg_param_type::intHalf4;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half4" );
	_Meta->registerClass(intCg_param_type::intHalf4::create, &_Meta);

	domCg_param_type::domHalf4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf1x1::create(daeInt bytes)
{
	intCg_param_type::intHalf1x1Ref ref = new(bytes) intCg_param_type::intHalf1x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half1x1" );
	_Meta->registerClass(intCg_param_type::intHalf1x1::create, &_Meta);

	domCg_param_type::domHalf1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf1x2::create(daeInt bytes)
{
	intCg_param_type::intHalf1x2Ref ref = new(bytes) intCg_param_type::intHalf1x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half1x2" );
	_Meta->registerClass(intCg_param_type::intHalf1x2::create, &_Meta);

	domCg_param_type::domHalf1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf1x3::create(daeInt bytes)
{
	intCg_param_type::intHalf1x3Ref ref = new(bytes) intCg_param_type::intHalf1x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half1x3" );
	_Meta->registerClass(intCg_param_type::intHalf1x3::create, &_Meta);

	domCg_param_type::domHalf1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf1x4::create(daeInt bytes)
{
	intCg_param_type::intHalf1x4Ref ref = new(bytes) intCg_param_type::intHalf1x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half1x4" );
	_Meta->registerClass(intCg_param_type::intHalf1x4::create, &_Meta);

	domCg_param_type::domHalf1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf2x1::create(daeInt bytes)
{
	intCg_param_type::intHalf2x1Ref ref = new(bytes) intCg_param_type::intHalf2x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half2x1" );
	_Meta->registerClass(intCg_param_type::intHalf2x1::create, &_Meta);

	domCg_param_type::domHalf2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf2x2::create(daeInt bytes)
{
	intCg_param_type::intHalf2x2Ref ref = new(bytes) intCg_param_type::intHalf2x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half2x2" );
	_Meta->registerClass(intCg_param_type::intHalf2x2::create, &_Meta);

	domCg_param_type::domHalf2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf2x3::create(daeInt bytes)
{
	intCg_param_type::intHalf2x3Ref ref = new(bytes) intCg_param_type::intHalf2x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half2x3" );
	_Meta->registerClass(intCg_param_type::intHalf2x3::create, &_Meta);

	domCg_param_type::domHalf2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf2x4::create(daeInt bytes)
{
	intCg_param_type::intHalf2x4Ref ref = new(bytes) intCg_param_type::intHalf2x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half2x4" );
	_Meta->registerClass(intCg_param_type::intHalf2x4::create, &_Meta);

	domCg_param_type::domHalf2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf3x1::create(daeInt bytes)
{
	intCg_param_type::intHalf3x1Ref ref = new(bytes) intCg_param_type::intHalf3x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half3x1" );
	_Meta->registerClass(intCg_param_type::intHalf3x1::create, &_Meta);

	domCg_param_type::domHalf3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf3x2::create(daeInt bytes)
{
	intCg_param_type::intHalf3x2Ref ref = new(bytes) intCg_param_type::intHalf3x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half3x2" );
	_Meta->registerClass(intCg_param_type::intHalf3x2::create, &_Meta);

	domCg_param_type::domHalf3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf3x3::create(daeInt bytes)
{
	intCg_param_type::intHalf3x3Ref ref = new(bytes) intCg_param_type::intHalf3x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half3x3" );
	_Meta->registerClass(intCg_param_type::intHalf3x3::create, &_Meta);

	domCg_param_type::domHalf3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf3x4::create(daeInt bytes)
{
	intCg_param_type::intHalf3x4Ref ref = new(bytes) intCg_param_type::intHalf3x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half3x4" );
	_Meta->registerClass(intCg_param_type::intHalf3x4::create, &_Meta);

	domCg_param_type::domHalf3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf4x1::create(daeInt bytes)
{
	intCg_param_type::intHalf4x1Ref ref = new(bytes) intCg_param_type::intHalf4x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half4x1" );
	_Meta->registerClass(intCg_param_type::intHalf4x1::create, &_Meta);

	domCg_param_type::domHalf4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf4x2::create(daeInt bytes)
{
	intCg_param_type::intHalf4x2Ref ref = new(bytes) intCg_param_type::intHalf4x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half4x2" );
	_Meta->registerClass(intCg_param_type::intHalf4x2::create, &_Meta);

	domCg_param_type::domHalf4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf4x3::create(daeInt bytes)
{
	intCg_param_type::intHalf4x3Ref ref = new(bytes) intCg_param_type::intHalf4x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half4x3" );
	_Meta->registerClass(intCg_param_type::intHalf4x3::create, &_Meta);

	domCg_param_type::domHalf4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intHalf4x4::create(daeInt bytes)
{
	intCg_param_type::intHalf4x4Ref ref = new(bytes) intCg_param_type::intHalf4x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intHalf4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "half4x4" );
	_Meta->registerClass(intCg_param_type::intHalf4x4::create, &_Meta);

	domCg_param_type::domHalf4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intHalf4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed::create(daeInt bytes)
{
	intCg_param_type::intFixedRef ref = new(bytes) intCg_param_type::intFixed;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed" );
	_Meta->registerClass(intCg_param_type::intFixed::create, &_Meta);

	domCg_param_type::domFixed::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed1::create(daeInt bytes)
{
	intCg_param_type::intFixed1Ref ref = new(bytes) intCg_param_type::intFixed1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed1" );
	_Meta->registerClass(intCg_param_type::intFixed1::create, &_Meta);

	domCg_param_type::domFixed1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed2::create(daeInt bytes)
{
	intCg_param_type::intFixed2Ref ref = new(bytes) intCg_param_type::intFixed2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed2" );
	_Meta->registerClass(intCg_param_type::intFixed2::create, &_Meta);

	domCg_param_type::domFixed2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed3::create(daeInt bytes)
{
	intCg_param_type::intFixed3Ref ref = new(bytes) intCg_param_type::intFixed3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed3" );
	_Meta->registerClass(intCg_param_type::intFixed3::create, &_Meta);

	domCg_param_type::domFixed3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed4::create(daeInt bytes)
{
	intCg_param_type::intFixed4Ref ref = new(bytes) intCg_param_type::intFixed4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed4" );
	_Meta->registerClass(intCg_param_type::intFixed4::create, &_Meta);

	domCg_param_type::domFixed4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed1x1::create(daeInt bytes)
{
	intCg_param_type::intFixed1x1Ref ref = new(bytes) intCg_param_type::intFixed1x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed1x1" );
	_Meta->registerClass(intCg_param_type::intFixed1x1::create, &_Meta);

	domCg_param_type::domFixed1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed1x2::create(daeInt bytes)
{
	intCg_param_type::intFixed1x2Ref ref = new(bytes) intCg_param_type::intFixed1x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed1x2" );
	_Meta->registerClass(intCg_param_type::intFixed1x2::create, &_Meta);

	domCg_param_type::domFixed1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed1x3::create(daeInt bytes)
{
	intCg_param_type::intFixed1x3Ref ref = new(bytes) intCg_param_type::intFixed1x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed1x3" );
	_Meta->registerClass(intCg_param_type::intFixed1x3::create, &_Meta);

	domCg_param_type::domFixed1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed1x4::create(daeInt bytes)
{
	intCg_param_type::intFixed1x4Ref ref = new(bytes) intCg_param_type::intFixed1x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed1x4" );
	_Meta->registerClass(intCg_param_type::intFixed1x4::create, &_Meta);

	domCg_param_type::domFixed1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed2x1::create(daeInt bytes)
{
	intCg_param_type::intFixed2x1Ref ref = new(bytes) intCg_param_type::intFixed2x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed2x1" );
	_Meta->registerClass(intCg_param_type::intFixed2x1::create, &_Meta);

	domCg_param_type::domFixed2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed2x2::create(daeInt bytes)
{
	intCg_param_type::intFixed2x2Ref ref = new(bytes) intCg_param_type::intFixed2x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed2x2" );
	_Meta->registerClass(intCg_param_type::intFixed2x2::create, &_Meta);

	domCg_param_type::domFixed2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed2x3::create(daeInt bytes)
{
	intCg_param_type::intFixed2x3Ref ref = new(bytes) intCg_param_type::intFixed2x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed2x3" );
	_Meta->registerClass(intCg_param_type::intFixed2x3::create, &_Meta);

	domCg_param_type::domFixed2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed2x4::create(daeInt bytes)
{
	intCg_param_type::intFixed2x4Ref ref = new(bytes) intCg_param_type::intFixed2x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed2x4" );
	_Meta->registerClass(intCg_param_type::intFixed2x4::create, &_Meta);

	domCg_param_type::domFixed2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed3x1::create(daeInt bytes)
{
	intCg_param_type::intFixed3x1Ref ref = new(bytes) intCg_param_type::intFixed3x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed3x1" );
	_Meta->registerClass(intCg_param_type::intFixed3x1::create, &_Meta);

	domCg_param_type::domFixed3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed3x2::create(daeInt bytes)
{
	intCg_param_type::intFixed3x2Ref ref = new(bytes) intCg_param_type::intFixed3x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed3x2" );
	_Meta->registerClass(intCg_param_type::intFixed3x2::create, &_Meta);

	domCg_param_type::domFixed3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed3x3::create(daeInt bytes)
{
	intCg_param_type::intFixed3x3Ref ref = new(bytes) intCg_param_type::intFixed3x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed3x3" );
	_Meta->registerClass(intCg_param_type::intFixed3x3::create, &_Meta);

	domCg_param_type::domFixed3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed3x4::create(daeInt bytes)
{
	intCg_param_type::intFixed3x4Ref ref = new(bytes) intCg_param_type::intFixed3x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed3x4" );
	_Meta->registerClass(intCg_param_type::intFixed3x4::create, &_Meta);

	domCg_param_type::domFixed3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed4x1::create(daeInt bytes)
{
	intCg_param_type::intFixed4x1Ref ref = new(bytes) intCg_param_type::intFixed4x1;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed4x1" );
	_Meta->registerClass(intCg_param_type::intFixed4x1::create, &_Meta);

	domCg_param_type::domFixed4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed4x2::create(daeInt bytes)
{
	intCg_param_type::intFixed4x2Ref ref = new(bytes) intCg_param_type::intFixed4x2;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed4x2" );
	_Meta->registerClass(intCg_param_type::intFixed4x2::create, &_Meta);

	domCg_param_type::domFixed4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed4x3::create(daeInt bytes)
{
	intCg_param_type::intFixed4x3Ref ref = new(bytes) intCg_param_type::intFixed4x3;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed4x3" );
	_Meta->registerClass(intCg_param_type::intFixed4x3::create, &_Meta);

	domCg_param_type::domFixed4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intFixed4x4::create(daeInt bytes)
{
	intCg_param_type::intFixed4x4Ref ref = new(bytes) intCg_param_type::intFixed4x4;
	return ref;
}

daeMetaElement *
intCg_param_type::intFixed4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fixed4x4" );
	_Meta->registerClass(intCg_param_type::intFixed4x4::create, &_Meta);

	domCg_param_type::domFixed4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intFixed4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intString::create(daeInt bytes)
{
	intCg_param_type::intStringRef ref = new(bytes) intCg_param_type::intString;
	return ref;
}

daeMetaElement *
intCg_param_type::intString::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "string" );
	_Meta->registerClass(intCg_param_type::intString::create, &_Meta);

	domCg_param_type::domString::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intString));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intCg_param_type::intEnum::create(daeInt bytes)
{
	intCg_param_type::intEnumRef ref = new(bytes) intCg_param_type::intEnum;
	return ref;
}

daeMetaElement *
intCg_param_type::intEnum::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "enum" );
	_Meta->registerClass(intCg_param_type::intEnum::create, &_Meta);

	domCg_param_type::domEnum::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intCg_param_type::intEnum));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intCg_param_type() {
}

intCg_param_type::~intCg_param_type() {
}

// IMPORT

void
intCg_param_type::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool::intBool() {
}

intCg_param_type::intBool::~intBool() {
}

// IMPORT

void
intCg_param_type::intBool::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool1::intBool1() {
}

intCg_param_type::intBool1::~intBool1() {
}

// IMPORT

void
intCg_param_type::intBool1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool2::intBool2() {
}

intCg_param_type::intBool2::~intBool2() {
}

// IMPORT

void
intCg_param_type::intBool2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool3::intBool3() {
}

intCg_param_type::intBool3::~intBool3() {
}

// IMPORT

void
intCg_param_type::intBool3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool4::intBool4() {
}

intCg_param_type::intBool4::~intBool4() {
}

// IMPORT

void
intCg_param_type::intBool4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool1x1::intBool1x1() {
}

intCg_param_type::intBool1x1::~intBool1x1() {
}

// IMPORT

void
intCg_param_type::intBool1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool1x2::intBool1x2() {
}

intCg_param_type::intBool1x2::~intBool1x2() {
}

// IMPORT

void
intCg_param_type::intBool1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool1x3::intBool1x3() {
}

intCg_param_type::intBool1x3::~intBool1x3() {
}

// IMPORT

void
intCg_param_type::intBool1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool1x4::intBool1x4() {
}

intCg_param_type::intBool1x4::~intBool1x4() {
}

// IMPORT

void
intCg_param_type::intBool1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool2x1::intBool2x1() {
}

intCg_param_type::intBool2x1::~intBool2x1() {
}

// IMPORT

void
intCg_param_type::intBool2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool2x2::intBool2x2() {
}

intCg_param_type::intBool2x2::~intBool2x2() {
}

// IMPORT

void
intCg_param_type::intBool2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool2x3::intBool2x3() {
}

intCg_param_type::intBool2x3::~intBool2x3() {
}

// IMPORT

void
intCg_param_type::intBool2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool2x4::intBool2x4() {
}

intCg_param_type::intBool2x4::~intBool2x4() {
}

// IMPORT

void
intCg_param_type::intBool2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool3x1::intBool3x1() {
}

intCg_param_type::intBool3x1::~intBool3x1() {
}

// IMPORT

void
intCg_param_type::intBool3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool3x2::intBool3x2() {
}

intCg_param_type::intBool3x2::~intBool3x2() {
}

// IMPORT

void
intCg_param_type::intBool3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool3x3::intBool3x3() {
}

intCg_param_type::intBool3x3::~intBool3x3() {
}

// IMPORT

void
intCg_param_type::intBool3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool3x4::intBool3x4() {
}

intCg_param_type::intBool3x4::~intBool3x4() {
}

// IMPORT

void
intCg_param_type::intBool3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool4x1::intBool4x1() {
}

intCg_param_type::intBool4x1::~intBool4x1() {
}

// IMPORT

void
intCg_param_type::intBool4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool4x2::intBool4x2() {
}

intCg_param_type::intBool4x2::~intBool4x2() {
}

// IMPORT

void
intCg_param_type::intBool4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool4x3::intBool4x3() {
}

intCg_param_type::intBool4x3::~intBool4x3() {
}

// IMPORT

void
intCg_param_type::intBool4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intBool4x4::intBool4x4() {
}

intCg_param_type::intBool4x4::~intBool4x4() {
}

// IMPORT

void
intCg_param_type::intBool4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intBool4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intBool4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intBool4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intBool4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intBool4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat::intFloat() {
}

intCg_param_type::intFloat::~intFloat() {
}

// IMPORT

void
intCg_param_type::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat1::intFloat1() {
}

intCg_param_type::intFloat1::~intFloat1() {
}

// IMPORT

void
intCg_param_type::intFloat1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat2::intFloat2() {
}

intCg_param_type::intFloat2::~intFloat2() {
}

// IMPORT

void
intCg_param_type::intFloat2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat3::intFloat3() {
}

intCg_param_type::intFloat3::~intFloat3() {
}

// IMPORT

void
intCg_param_type::intFloat3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat4::intFloat4() {
}

intCg_param_type::intFloat4::~intFloat4() {
}

// IMPORT

void
intCg_param_type::intFloat4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat1x1::intFloat1x1() {
}

intCg_param_type::intFloat1x1::~intFloat1x1() {
}

// IMPORT

void
intCg_param_type::intFloat1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat1x2::intFloat1x2() {
}

intCg_param_type::intFloat1x2::~intFloat1x2() {
}

// IMPORT

void
intCg_param_type::intFloat1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat1x3::intFloat1x3() {
}

intCg_param_type::intFloat1x3::~intFloat1x3() {
}

// IMPORT

void
intCg_param_type::intFloat1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat1x4::intFloat1x4() {
}

intCg_param_type::intFloat1x4::~intFloat1x4() {
}

// IMPORT

void
intCg_param_type::intFloat1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat2x1::intFloat2x1() {
}

intCg_param_type::intFloat2x1::~intFloat2x1() {
}

// IMPORT

void
intCg_param_type::intFloat2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat2x2::intFloat2x2() {
}

intCg_param_type::intFloat2x2::~intFloat2x2() {
}

// IMPORT

void
intCg_param_type::intFloat2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat2x3::intFloat2x3() {
}

intCg_param_type::intFloat2x3::~intFloat2x3() {
}

// IMPORT

void
intCg_param_type::intFloat2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat2x4::intFloat2x4() {
}

intCg_param_type::intFloat2x4::~intFloat2x4() {
}

// IMPORT

void
intCg_param_type::intFloat2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat3x1::intFloat3x1() {
}

intCg_param_type::intFloat3x1::~intFloat3x1() {
}

// IMPORT

void
intCg_param_type::intFloat3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat3x2::intFloat3x2() {
}

intCg_param_type::intFloat3x2::~intFloat3x2() {
}

// IMPORT

void
intCg_param_type::intFloat3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat3x3::intFloat3x3() {
}

intCg_param_type::intFloat3x3::~intFloat3x3() {
}

// IMPORT

void
intCg_param_type::intFloat3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat3x4::intFloat3x4() {
}

intCg_param_type::intFloat3x4::~intFloat3x4() {
}

// IMPORT

void
intCg_param_type::intFloat3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat4x1::intFloat4x1() {
}

intCg_param_type::intFloat4x1::~intFloat4x1() {
}

// IMPORT

void
intCg_param_type::intFloat4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat4x2::intFloat4x2() {
}

intCg_param_type::intFloat4x2::~intFloat4x2() {
}

// IMPORT

void
intCg_param_type::intFloat4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat4x3::intFloat4x3() {
}

intCg_param_type::intFloat4x3::~intFloat4x3() {
}

// IMPORT

void
intCg_param_type::intFloat4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFloat4x4::intFloat4x4() {
}

intCg_param_type::intFloat4x4::~intFloat4x4() {
}

// IMPORT

void
intCg_param_type::intFloat4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFloat4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFloat4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFloat4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFloat4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFloat4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt::intInt() {
}

intCg_param_type::intInt::~intInt() {
}

// IMPORT

void
intCg_param_type::intInt::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt1::intInt1() {
}

intCg_param_type::intInt1::~intInt1() {
}

// IMPORT

void
intCg_param_type::intInt1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt2::intInt2() {
}

intCg_param_type::intInt2::~intInt2() {
}

// IMPORT

void
intCg_param_type::intInt2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt3::intInt3() {
}

intCg_param_type::intInt3::~intInt3() {
}

// IMPORT

void
intCg_param_type::intInt3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt4::intInt4() {
}

intCg_param_type::intInt4::~intInt4() {
}

// IMPORT

void
intCg_param_type::intInt4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt1x1::intInt1x1() {
}

intCg_param_type::intInt1x1::~intInt1x1() {
}

// IMPORT

void
intCg_param_type::intInt1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt1x2::intInt1x2() {
}

intCg_param_type::intInt1x2::~intInt1x2() {
}

// IMPORT

void
intCg_param_type::intInt1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt1x3::intInt1x3() {
}

intCg_param_type::intInt1x3::~intInt1x3() {
}

// IMPORT

void
intCg_param_type::intInt1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt1x4::intInt1x4() {
}

intCg_param_type::intInt1x4::~intInt1x4() {
}

// IMPORT

void
intCg_param_type::intInt1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt2x1::intInt2x1() {
}

intCg_param_type::intInt2x1::~intInt2x1() {
}

// IMPORT

void
intCg_param_type::intInt2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt2x2::intInt2x2() {
}

intCg_param_type::intInt2x2::~intInt2x2() {
}

// IMPORT

void
intCg_param_type::intInt2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt2x3::intInt2x3() {
}

intCg_param_type::intInt2x3::~intInt2x3() {
}

// IMPORT

void
intCg_param_type::intInt2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt2x4::intInt2x4() {
}

intCg_param_type::intInt2x4::~intInt2x4() {
}

// IMPORT

void
intCg_param_type::intInt2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt3x1::intInt3x1() {
}

intCg_param_type::intInt3x1::~intInt3x1() {
}

// IMPORT

void
intCg_param_type::intInt3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt3x2::intInt3x2() {
}

intCg_param_type::intInt3x2::~intInt3x2() {
}

// IMPORT

void
intCg_param_type::intInt3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt3x3::intInt3x3() {
}

intCg_param_type::intInt3x3::~intInt3x3() {
}

// IMPORT

void
intCg_param_type::intInt3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt3x4::intInt3x4() {
}

intCg_param_type::intInt3x4::~intInt3x4() {
}

// IMPORT

void
intCg_param_type::intInt3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt4x1::intInt4x1() {
}

intCg_param_type::intInt4x1::~intInt4x1() {
}

// IMPORT

void
intCg_param_type::intInt4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt4x2::intInt4x2() {
}

intCg_param_type::intInt4x2::~intInt4x2() {
}

// IMPORT

void
intCg_param_type::intInt4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt4x3::intInt4x3() {
}

intCg_param_type::intInt4x3::~intInt4x3() {
}

// IMPORT

void
intCg_param_type::intInt4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intInt4x4::intInt4x4() {
}

intCg_param_type::intInt4x4::~intInt4x4() {
}

// IMPORT

void
intCg_param_type::intInt4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intInt4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intInt4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intInt4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intInt4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intInt4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf::intHalf() {
}

intCg_param_type::intHalf::~intHalf() {
}

// IMPORT

void
intCg_param_type::intHalf::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf1::intHalf1() {
}

intCg_param_type::intHalf1::~intHalf1() {
}

// IMPORT

void
intCg_param_type::intHalf1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf2::intHalf2() {
}

intCg_param_type::intHalf2::~intHalf2() {
}

// IMPORT

void
intCg_param_type::intHalf2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf3::intHalf3() {
}

intCg_param_type::intHalf3::~intHalf3() {
}

// IMPORT

void
intCg_param_type::intHalf3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf4::intHalf4() {
}

intCg_param_type::intHalf4::~intHalf4() {
}

// IMPORT

void
intCg_param_type::intHalf4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf1x1::intHalf1x1() {
}

intCg_param_type::intHalf1x1::~intHalf1x1() {
}

// IMPORT

void
intCg_param_type::intHalf1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf1x2::intHalf1x2() {
}

intCg_param_type::intHalf1x2::~intHalf1x2() {
}

// IMPORT

void
intCg_param_type::intHalf1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf1x3::intHalf1x3() {
}

intCg_param_type::intHalf1x3::~intHalf1x3() {
}

// IMPORT

void
intCg_param_type::intHalf1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf1x4::intHalf1x4() {
}

intCg_param_type::intHalf1x4::~intHalf1x4() {
}

// IMPORT

void
intCg_param_type::intHalf1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf2x1::intHalf2x1() {
}

intCg_param_type::intHalf2x1::~intHalf2x1() {
}

// IMPORT

void
intCg_param_type::intHalf2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf2x2::intHalf2x2() {
}

intCg_param_type::intHalf2x2::~intHalf2x2() {
}

// IMPORT

void
intCg_param_type::intHalf2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf2x3::intHalf2x3() {
}

intCg_param_type::intHalf2x3::~intHalf2x3() {
}

// IMPORT

void
intCg_param_type::intHalf2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf2x4::intHalf2x4() {
}

intCg_param_type::intHalf2x4::~intHalf2x4() {
}

// IMPORT

void
intCg_param_type::intHalf2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf3x1::intHalf3x1() {
}

intCg_param_type::intHalf3x1::~intHalf3x1() {
}

// IMPORT

void
intCg_param_type::intHalf3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf3x2::intHalf3x2() {
}

intCg_param_type::intHalf3x2::~intHalf3x2() {
}

// IMPORT

void
intCg_param_type::intHalf3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf3x3::intHalf3x3() {
}

intCg_param_type::intHalf3x3::~intHalf3x3() {
}

// IMPORT

void
intCg_param_type::intHalf3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf3x4::intHalf3x4() {
}

intCg_param_type::intHalf3x4::~intHalf3x4() {
}

// IMPORT

void
intCg_param_type::intHalf3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf4x1::intHalf4x1() {
}

intCg_param_type::intHalf4x1::~intHalf4x1() {
}

// IMPORT

void
intCg_param_type::intHalf4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf4x2::intHalf4x2() {
}

intCg_param_type::intHalf4x2::~intHalf4x2() {
}

// IMPORT

void
intCg_param_type::intHalf4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf4x3::intHalf4x3() {
}

intCg_param_type::intHalf4x3::~intHalf4x3() {
}

// IMPORT

void
intCg_param_type::intHalf4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intHalf4x4::intHalf4x4() {
}

intCg_param_type::intHalf4x4::~intHalf4x4() {
}

// IMPORT

void
intCg_param_type::intHalf4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intHalf4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intHalf4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intHalf4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intHalf4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intHalf4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed::intFixed() {
}

intCg_param_type::intFixed::~intFixed() {
}

// IMPORT

void
intCg_param_type::intFixed::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed1::intFixed1() {
}

intCg_param_type::intFixed1::~intFixed1() {
}

// IMPORT

void
intCg_param_type::intFixed1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed2::intFixed2() {
}

intCg_param_type::intFixed2::~intFixed2() {
}

// IMPORT

void
intCg_param_type::intFixed2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed3::intFixed3() {
}

intCg_param_type::intFixed3::~intFixed3() {
}

// IMPORT

void
intCg_param_type::intFixed3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed4::intFixed4() {
}

intCg_param_type::intFixed4::~intFixed4() {
}

// IMPORT

void
intCg_param_type::intFixed4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed1x1::intFixed1x1() {
}

intCg_param_type::intFixed1x1::~intFixed1x1() {
}

// IMPORT

void
intCg_param_type::intFixed1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed1x2::intFixed1x2() {
}

intCg_param_type::intFixed1x2::~intFixed1x2() {
}

// IMPORT

void
intCg_param_type::intFixed1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed1x3::intFixed1x3() {
}

intCg_param_type::intFixed1x3::~intFixed1x3() {
}

// IMPORT

void
intCg_param_type::intFixed1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed1x4::intFixed1x4() {
}

intCg_param_type::intFixed1x4::~intFixed1x4() {
}

// IMPORT

void
intCg_param_type::intFixed1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed2x1::intFixed2x1() {
}

intCg_param_type::intFixed2x1::~intFixed2x1() {
}

// IMPORT

void
intCg_param_type::intFixed2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed2x2::intFixed2x2() {
}

intCg_param_type::intFixed2x2::~intFixed2x2() {
}

// IMPORT

void
intCg_param_type::intFixed2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed2x3::intFixed2x3() {
}

intCg_param_type::intFixed2x3::~intFixed2x3() {
}

// IMPORT

void
intCg_param_type::intFixed2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed2x4::intFixed2x4() {
}

intCg_param_type::intFixed2x4::~intFixed2x4() {
}

// IMPORT

void
intCg_param_type::intFixed2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed3x1::intFixed3x1() {
}

intCg_param_type::intFixed3x1::~intFixed3x1() {
}

// IMPORT

void
intCg_param_type::intFixed3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed3x2::intFixed3x2() {
}

intCg_param_type::intFixed3x2::~intFixed3x2() {
}

// IMPORT

void
intCg_param_type::intFixed3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed3x3::intFixed3x3() {
}

intCg_param_type::intFixed3x3::~intFixed3x3() {
}

// IMPORT

void
intCg_param_type::intFixed3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed3x4::intFixed3x4() {
}

intCg_param_type::intFixed3x4::~intFixed3x4() {
}

// IMPORT

void
intCg_param_type::intFixed3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed4x1::intFixed4x1() {
}

intCg_param_type::intFixed4x1::~intFixed4x1() {
}

// IMPORT

void
intCg_param_type::intFixed4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed4x2::intFixed4x2() {
}

intCg_param_type::intFixed4x2::~intFixed4x2() {
}

// IMPORT

void
intCg_param_type::intFixed4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed4x3::intFixed4x3() {
}

intCg_param_type::intFixed4x3::~intFixed4x3() {
}

// IMPORT

void
intCg_param_type::intFixed4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intFixed4x4::intFixed4x4() {
}

intCg_param_type::intFixed4x4::~intFixed4x4() {
}

// IMPORT

void
intCg_param_type::intFixed4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intFixed4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intFixed4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intFixed4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intFixed4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intFixed4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intString::intString() {
}

intCg_param_type::intString::~intString() {
}

// IMPORT

void
intCg_param_type::intString::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intString::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intString::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intString::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intString::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intString::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intCg_param_type::intEnum::intEnum() {
}

intCg_param_type::intEnum::~intEnum() {
}

// IMPORT

void
intCg_param_type::intEnum::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intCg_param_type::intEnum::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intCg_param_type::intEnum::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intCg_param_type::intEnum::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intCg_param_type::intEnum::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intCg_param_type::intEnum::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


