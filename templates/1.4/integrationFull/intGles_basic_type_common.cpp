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
#include "intGles_basic_type_common.h"
#include <dom/domGles_basic_type_common.h>

daeMetaElement * intGles_basic_type_common::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intBool::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intBool2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intBool3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intBool4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intInt::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intInt2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intInt3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intInt4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat1x1::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat1x2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat1x3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat1x4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat2x1::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat2x2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat2x3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat2x4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat3x1::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat3x2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat3x3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat3x4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat4x1::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat4x2::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat4x3::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intFloat4x4::_Meta = NULL;
daeMetaElement * intGles_basic_type_common::intEnum::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGles_basic_type_common::create(daeInt bytes)
{
	intGles_basic_type_commonRef ref = new(bytes) intGles_basic_type_common;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "gles_basic_type_common" );
	_Meta->registerClass(intGles_basic_type_common::create, &_Meta);

	domGles_basic_type_common::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intBool::create(daeInt bytes)
{
	intGles_basic_type_common::intBoolRef ref = new(bytes) intGles_basic_type_common::intBool;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intBool::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool" );
	_Meta->registerClass(intGles_basic_type_common::intBool::create, &_Meta);

	domGles_basic_type_common::domBool::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intBool));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intBool2::create(daeInt bytes)
{
	intGles_basic_type_common::intBool2Ref ref = new(bytes) intGles_basic_type_common::intBool2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intBool2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool2" );
	_Meta->registerClass(intGles_basic_type_common::intBool2::create, &_Meta);

	domGles_basic_type_common::domBool2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intBool2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intBool3::create(daeInt bytes)
{
	intGles_basic_type_common::intBool3Ref ref = new(bytes) intGles_basic_type_common::intBool3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intBool3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool3" );
	_Meta->registerClass(intGles_basic_type_common::intBool3::create, &_Meta);

	domGles_basic_type_common::domBool3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intBool3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intBool4::create(daeInt bytes)
{
	intGles_basic_type_common::intBool4Ref ref = new(bytes) intGles_basic_type_common::intBool4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intBool4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "bool4" );
	_Meta->registerClass(intGles_basic_type_common::intBool4::create, &_Meta);

	domGles_basic_type_common::domBool4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intBool4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intInt::create(daeInt bytes)
{
	intGles_basic_type_common::intIntRef ref = new(bytes) intGles_basic_type_common::intInt;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intInt::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int" );
	_Meta->registerClass(intGles_basic_type_common::intInt::create, &_Meta);

	domGles_basic_type_common::domInt::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intInt));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intInt2::create(daeInt bytes)
{
	intGles_basic_type_common::intInt2Ref ref = new(bytes) intGles_basic_type_common::intInt2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intInt2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int2" );
	_Meta->registerClass(intGles_basic_type_common::intInt2::create, &_Meta);

	domGles_basic_type_common::domInt2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intInt2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intInt3::create(daeInt bytes)
{
	intGles_basic_type_common::intInt3Ref ref = new(bytes) intGles_basic_type_common::intInt3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intInt3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int3" );
	_Meta->registerClass(intGles_basic_type_common::intInt3::create, &_Meta);

	domGles_basic_type_common::domInt3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intInt3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intInt4::create(daeInt bytes)
{
	intGles_basic_type_common::intInt4Ref ref = new(bytes) intGles_basic_type_common::intInt4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intInt4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "int4" );
	_Meta->registerClass(intGles_basic_type_common::intInt4::create, &_Meta);

	domGles_basic_type_common::domInt4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intInt4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat::create(daeInt bytes)
{
	intGles_basic_type_common::intFloatRef ref = new(bytes) intGles_basic_type_common::intFloat;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float" );
	_Meta->registerClass(intGles_basic_type_common::intFloat::create, &_Meta);

	domGles_basic_type_common::domFloat::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat2::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat2Ref ref = new(bytes) intGles_basic_type_common::intFloat2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2" );
	_Meta->registerClass(intGles_basic_type_common::intFloat2::create, &_Meta);

	domGles_basic_type_common::domFloat2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat3::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat3Ref ref = new(bytes) intGles_basic_type_common::intFloat3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3" );
	_Meta->registerClass(intGles_basic_type_common::intFloat3::create, &_Meta);

	domGles_basic_type_common::domFloat3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat4::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat4Ref ref = new(bytes) intGles_basic_type_common::intFloat4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4" );
	_Meta->registerClass(intGles_basic_type_common::intFloat4::create, &_Meta);

	domGles_basic_type_common::domFloat4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat1x1::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat1x1Ref ref = new(bytes) intGles_basic_type_common::intFloat1x1;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat1x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x1" );
	_Meta->registerClass(intGles_basic_type_common::intFloat1x1::create, &_Meta);

	domGles_basic_type_common::domFloat1x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat1x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat1x2::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat1x2Ref ref = new(bytes) intGles_basic_type_common::intFloat1x2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat1x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x2" );
	_Meta->registerClass(intGles_basic_type_common::intFloat1x2::create, &_Meta);

	domGles_basic_type_common::domFloat1x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat1x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat1x3::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat1x3Ref ref = new(bytes) intGles_basic_type_common::intFloat1x3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat1x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x3" );
	_Meta->registerClass(intGles_basic_type_common::intFloat1x3::create, &_Meta);

	domGles_basic_type_common::domFloat1x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat1x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat1x4::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat1x4Ref ref = new(bytes) intGles_basic_type_common::intFloat1x4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat1x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float1x4" );
	_Meta->registerClass(intGles_basic_type_common::intFloat1x4::create, &_Meta);

	domGles_basic_type_common::domFloat1x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat1x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat2x1::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat2x1Ref ref = new(bytes) intGles_basic_type_common::intFloat2x1;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat2x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x1" );
	_Meta->registerClass(intGles_basic_type_common::intFloat2x1::create, &_Meta);

	domGles_basic_type_common::domFloat2x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat2x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat2x2::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat2x2Ref ref = new(bytes) intGles_basic_type_common::intFloat2x2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat2x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x2" );
	_Meta->registerClass(intGles_basic_type_common::intFloat2x2::create, &_Meta);

	domGles_basic_type_common::domFloat2x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat2x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat2x3::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat2x3Ref ref = new(bytes) intGles_basic_type_common::intFloat2x3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat2x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x3" );
	_Meta->registerClass(intGles_basic_type_common::intFloat2x3::create, &_Meta);

	domGles_basic_type_common::domFloat2x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat2x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat2x4::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat2x4Ref ref = new(bytes) intGles_basic_type_common::intFloat2x4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat2x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float2x4" );
	_Meta->registerClass(intGles_basic_type_common::intFloat2x4::create, &_Meta);

	domGles_basic_type_common::domFloat2x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat2x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat3x1::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat3x1Ref ref = new(bytes) intGles_basic_type_common::intFloat3x1;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat3x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x1" );
	_Meta->registerClass(intGles_basic_type_common::intFloat3x1::create, &_Meta);

	domGles_basic_type_common::domFloat3x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat3x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat3x2::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat3x2Ref ref = new(bytes) intGles_basic_type_common::intFloat3x2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat3x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x2" );
	_Meta->registerClass(intGles_basic_type_common::intFloat3x2::create, &_Meta);

	domGles_basic_type_common::domFloat3x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat3x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat3x3::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat3x3Ref ref = new(bytes) intGles_basic_type_common::intFloat3x3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat3x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x3" );
	_Meta->registerClass(intGles_basic_type_common::intFloat3x3::create, &_Meta);

	domGles_basic_type_common::domFloat3x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat3x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat3x4::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat3x4Ref ref = new(bytes) intGles_basic_type_common::intFloat3x4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat3x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float3x4" );
	_Meta->registerClass(intGles_basic_type_common::intFloat3x4::create, &_Meta);

	domGles_basic_type_common::domFloat3x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat3x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat4x1::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat4x1Ref ref = new(bytes) intGles_basic_type_common::intFloat4x1;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat4x1::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x1" );
	_Meta->registerClass(intGles_basic_type_common::intFloat4x1::create, &_Meta);

	domGles_basic_type_common::domFloat4x1::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat4x1));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat4x2::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat4x2Ref ref = new(bytes) intGles_basic_type_common::intFloat4x2;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat4x2::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x2" );
	_Meta->registerClass(intGles_basic_type_common::intFloat4x2::create, &_Meta);

	domGles_basic_type_common::domFloat4x2::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat4x2));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat4x3::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat4x3Ref ref = new(bytes) intGles_basic_type_common::intFloat4x3;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat4x3::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x3" );
	_Meta->registerClass(intGles_basic_type_common::intFloat4x3::create, &_Meta);

	domGles_basic_type_common::domFloat4x3::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat4x3));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intFloat4x4::create(daeInt bytes)
{
	intGles_basic_type_common::intFloat4x4Ref ref = new(bytes) intGles_basic_type_common::intFloat4x4;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intFloat4x4::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "float4x4" );
	_Meta->registerClass(intGles_basic_type_common::intFloat4x4::create, &_Meta);

	domGles_basic_type_common::domFloat4x4::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intFloat4x4));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_basic_type_common::intEnum::create(daeInt bytes)
{
	intGles_basic_type_common::intEnumRef ref = new(bytes) intGles_basic_type_common::intEnum;
	return ref;
}

daeMetaElement *
intGles_basic_type_common::intEnum::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "enum" );
	_Meta->registerClass(intGles_basic_type_common::intEnum::create, &_Meta);

	domGles_basic_type_common::domEnum::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_basic_type_common::intEnum));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intGles_basic_type_common() {
}

intGles_basic_type_common::~intGles_basic_type_common() {
}

// IMPORT

void
intGles_basic_type_common::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intBool::intBool() {
}

intGles_basic_type_common::intBool::~intBool() {
}

// IMPORT

void
intGles_basic_type_common::intBool::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intBool::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intBool::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intBool::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intBool::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intBool::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intBool2::intBool2() {
}

intGles_basic_type_common::intBool2::~intBool2() {
}

// IMPORT

void
intGles_basic_type_common::intBool2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intBool2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intBool2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intBool2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intBool2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intBool2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intBool3::intBool3() {
}

intGles_basic_type_common::intBool3::~intBool3() {
}

// IMPORT

void
intGles_basic_type_common::intBool3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intBool3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intBool3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intBool3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intBool3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intBool3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intBool4::intBool4() {
}

intGles_basic_type_common::intBool4::~intBool4() {
}

// IMPORT

void
intGles_basic_type_common::intBool4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intBool4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intBool4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intBool4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intBool4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intBool4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intInt::intInt() {
}

intGles_basic_type_common::intInt::~intInt() {
}

// IMPORT

void
intGles_basic_type_common::intInt::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intInt::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intInt::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intInt::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intInt::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intInt::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intInt2::intInt2() {
}

intGles_basic_type_common::intInt2::~intInt2() {
}

// IMPORT

void
intGles_basic_type_common::intInt2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intInt2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intInt2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intInt2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intInt2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intInt2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intInt3::intInt3() {
}

intGles_basic_type_common::intInt3::~intInt3() {
}

// IMPORT

void
intGles_basic_type_common::intInt3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intInt3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intInt3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intInt3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intInt3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intInt3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intInt4::intInt4() {
}

intGles_basic_type_common::intInt4::~intInt4() {
}

// IMPORT

void
intGles_basic_type_common::intInt4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intInt4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intInt4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intInt4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intInt4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intInt4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat::intFloat() {
}

intGles_basic_type_common::intFloat::~intFloat() {
}

// IMPORT

void
intGles_basic_type_common::intFloat::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat2::intFloat2() {
}

intGles_basic_type_common::intFloat2::~intFloat2() {
}

// IMPORT

void
intGles_basic_type_common::intFloat2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat3::intFloat3() {
}

intGles_basic_type_common::intFloat3::~intFloat3() {
}

// IMPORT

void
intGles_basic_type_common::intFloat3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat4::intFloat4() {
}

intGles_basic_type_common::intFloat4::~intFloat4() {
}

// IMPORT

void
intGles_basic_type_common::intFloat4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat1x1::intFloat1x1() {
}

intGles_basic_type_common::intFloat1x1::~intFloat1x1() {
}

// IMPORT

void
intGles_basic_type_common::intFloat1x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat1x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat1x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat1x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat1x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat1x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat1x2::intFloat1x2() {
}

intGles_basic_type_common::intFloat1x2::~intFloat1x2() {
}

// IMPORT

void
intGles_basic_type_common::intFloat1x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat1x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat1x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat1x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat1x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat1x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat1x3::intFloat1x3() {
}

intGles_basic_type_common::intFloat1x3::~intFloat1x3() {
}

// IMPORT

void
intGles_basic_type_common::intFloat1x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat1x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat1x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat1x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat1x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat1x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat1x4::intFloat1x4() {
}

intGles_basic_type_common::intFloat1x4::~intFloat1x4() {
}

// IMPORT

void
intGles_basic_type_common::intFloat1x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat1x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat1x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat1x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat1x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat1x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat2x1::intFloat2x1() {
}

intGles_basic_type_common::intFloat2x1::~intFloat2x1() {
}

// IMPORT

void
intGles_basic_type_common::intFloat2x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat2x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat2x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat2x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat2x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat2x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat2x2::intFloat2x2() {
}

intGles_basic_type_common::intFloat2x2::~intFloat2x2() {
}

// IMPORT

void
intGles_basic_type_common::intFloat2x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat2x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat2x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat2x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat2x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat2x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat2x3::intFloat2x3() {
}

intGles_basic_type_common::intFloat2x3::~intFloat2x3() {
}

// IMPORT

void
intGles_basic_type_common::intFloat2x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat2x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat2x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat2x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat2x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat2x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat2x4::intFloat2x4() {
}

intGles_basic_type_common::intFloat2x4::~intFloat2x4() {
}

// IMPORT

void
intGles_basic_type_common::intFloat2x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat2x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat2x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat2x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat2x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat2x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat3x1::intFloat3x1() {
}

intGles_basic_type_common::intFloat3x1::~intFloat3x1() {
}

// IMPORT

void
intGles_basic_type_common::intFloat3x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat3x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat3x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat3x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat3x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat3x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat3x2::intFloat3x2() {
}

intGles_basic_type_common::intFloat3x2::~intFloat3x2() {
}

// IMPORT

void
intGles_basic_type_common::intFloat3x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat3x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat3x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat3x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat3x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat3x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat3x3::intFloat3x3() {
}

intGles_basic_type_common::intFloat3x3::~intFloat3x3() {
}

// IMPORT

void
intGles_basic_type_common::intFloat3x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat3x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat3x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat3x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat3x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat3x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat3x4::intFloat3x4() {
}

intGles_basic_type_common::intFloat3x4::~intFloat3x4() {
}

// IMPORT

void
intGles_basic_type_common::intFloat3x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat3x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat3x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat3x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat3x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat3x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat4x1::intFloat4x1() {
}

intGles_basic_type_common::intFloat4x1::~intFloat4x1() {
}

// IMPORT

void
intGles_basic_type_common::intFloat4x1::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat4x1::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat4x1::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat4x1::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat4x1::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat4x1::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat4x2::intFloat4x2() {
}

intGles_basic_type_common::intFloat4x2::~intFloat4x2() {
}

// IMPORT

void
intGles_basic_type_common::intFloat4x2::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat4x2::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat4x2::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat4x2::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat4x2::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat4x2::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat4x3::intFloat4x3() {
}

intGles_basic_type_common::intFloat4x3::~intFloat4x3() {
}

// IMPORT

void
intGles_basic_type_common::intFloat4x3::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat4x3::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat4x3::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat4x3::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat4x3::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat4x3::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intFloat4x4::intFloat4x4() {
}

intGles_basic_type_common::intFloat4x4::~intFloat4x4() {
}

// IMPORT

void
intGles_basic_type_common::intFloat4x4::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intFloat4x4::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intFloat4x4::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intFloat4x4::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intFloat4x4::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intFloat4x4::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_basic_type_common::intEnum::intEnum() {
}

intGles_basic_type_common::intEnum::~intEnum() {
}

// IMPORT

void
intGles_basic_type_common::intEnum::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_basic_type_common::intEnum::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_basic_type_common::intEnum::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_basic_type_common::intEnum::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_basic_type_common::intEnum::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_basic_type_common::intEnum::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


