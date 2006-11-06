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
#include "intGles_pipeline_settings.h"
#include <dom/domGles_pipeline_settings.h>

daeMetaElement * intGles_pipeline_settings::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intAlpha_func::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intAlpha_func::intFunc::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intAlpha_func::intValue::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intBlend_func::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intBlend_func::intSrc::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intBlend_func::intDest::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intClear_color::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intClear_stencil::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intClear_depth::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intClip_plane::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intColor_mask::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intCull_face::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intDepth_func::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intDepth_mask::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intDepth_range::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_color::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_density::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_mode::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_start::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_end::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFront_face::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intTexture_pipeline::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLogic_op::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_ambient::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_diffuse::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_specular::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_position::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_constant_attenuation::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_linear_attenutation::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_quadratic_attenuation::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_spot_cutoff::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_spot_direction::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_spot_exponent::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_model_ambient::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLine_width::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMaterial_ambient::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMaterial_diffuse::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMaterial_emission::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMaterial_shininess::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMaterial_specular::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intModel_view_matrix::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_distance_attenuation::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_fade_threshold_size::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_size::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_size_min::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_size_max::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPolygon_offset::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intProjection_matrix::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intScissor::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intShade_model::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_func::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_func::intFunc::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_func::intRef::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_func::intMask::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_mask::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_op::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_op::intFail::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_op::intZfail::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_op::intZpass::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intAlpha_test_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intBlend_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intClip_plane_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intColor_logic_op_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intColor_material_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intCull_face_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intDepth_test_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intDither_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intFog_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intTexture_pipeline_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLighting_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLight_model_two_side_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intLine_smooth_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intMultisample_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intNormalize_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPoint_smooth_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intPolygon_offset_fill_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intRescale_normal_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intSample_alpha_to_coverage_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intSample_alpha_to_one_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intSample_coverage_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intScissor_test_enable::_Meta = NULL;
daeMetaElement * intGles_pipeline_settings::intStencil_test_enable::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGles_pipeline_settings::create(daeInt bytes)
{
	intGles_pipeline_settingsRef ref = new(bytes) intGles_pipeline_settings;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "gles_pipeline_settings" );
	_Meta->registerClass(intGles_pipeline_settings::create, &_Meta);

	domGles_pipeline_settings::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intAlpha_func::create(daeInt bytes)
{
	intGles_pipeline_settings::intAlpha_funcRef ref = new(bytes) intGles_pipeline_settings::intAlpha_func;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intAlpha_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "alpha_func" );
	_Meta->registerClass(intGles_pipeline_settings::intAlpha_func::create, &_Meta);

	domGles_pipeline_settings::domAlpha_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intAlpha_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intAlpha_func::intFunc::create(daeInt bytes)
{
	intGles_pipeline_settings::intAlpha_func::intFuncRef ref = new(bytes) intGles_pipeline_settings::intAlpha_func::intFunc;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intAlpha_func::intFunc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "func" );
	_Meta->registerClass(intGles_pipeline_settings::intAlpha_func::intFunc::create, &_Meta);

	domGles_pipeline_settings::domAlpha_func::domFunc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intAlpha_func::intFunc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intAlpha_func::intValue::create(daeInt bytes)
{
	intGles_pipeline_settings::intAlpha_func::intValueRef ref = new(bytes) intGles_pipeline_settings::intAlpha_func::intValue;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intAlpha_func::intValue::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "value" );
	_Meta->registerClass(intGles_pipeline_settings::intAlpha_func::intValue::create, &_Meta);

	domGles_pipeline_settings::domAlpha_func::domValue::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intAlpha_func::intValue));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intBlend_func::create(daeInt bytes)
{
	intGles_pipeline_settings::intBlend_funcRef ref = new(bytes) intGles_pipeline_settings::intBlend_func;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intBlend_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_func" );
	_Meta->registerClass(intGles_pipeline_settings::intBlend_func::create, &_Meta);

	domGles_pipeline_settings::domBlend_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intBlend_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intBlend_func::intSrc::create(daeInt bytes)
{
	intGles_pipeline_settings::intBlend_func::intSrcRef ref = new(bytes) intGles_pipeline_settings::intBlend_func::intSrc;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intBlend_func::intSrc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "src" );
	_Meta->registerClass(intGles_pipeline_settings::intBlend_func::intSrc::create, &_Meta);

	domGles_pipeline_settings::domBlend_func::domSrc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intBlend_func::intSrc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intBlend_func::intDest::create(daeInt bytes)
{
	intGles_pipeline_settings::intBlend_func::intDestRef ref = new(bytes) intGles_pipeline_settings::intBlend_func::intDest;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intBlend_func::intDest::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dest" );
	_Meta->registerClass(intGles_pipeline_settings::intBlend_func::intDest::create, &_Meta);

	domGles_pipeline_settings::domBlend_func::domDest::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intBlend_func::intDest));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intClear_color::create(daeInt bytes)
{
	intGles_pipeline_settings::intClear_colorRef ref = new(bytes) intGles_pipeline_settings::intClear_color;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intClear_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_color" );
	_Meta->registerClass(intGles_pipeline_settings::intClear_color::create, &_Meta);

	domGles_pipeline_settings::domClear_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intClear_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intClear_stencil::create(daeInt bytes)
{
	intGles_pipeline_settings::intClear_stencilRef ref = new(bytes) intGles_pipeline_settings::intClear_stencil;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intClear_stencil::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_stencil" );
	_Meta->registerClass(intGles_pipeline_settings::intClear_stencil::create, &_Meta);

	domGles_pipeline_settings::domClear_stencil::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intClear_stencil));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intClear_depth::create(daeInt bytes)
{
	intGles_pipeline_settings::intClear_depthRef ref = new(bytes) intGles_pipeline_settings::intClear_depth;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intClear_depth::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_depth" );
	_Meta->registerClass(intGles_pipeline_settings::intClear_depth::create, &_Meta);

	domGles_pipeline_settings::domClear_depth::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intClear_depth));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intClip_plane::create(daeInt bytes)
{
	intGles_pipeline_settings::intClip_planeRef ref = new(bytes) intGles_pipeline_settings::intClip_plane;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intClip_plane::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clip_plane" );
	_Meta->registerClass(intGles_pipeline_settings::intClip_plane::create, &_Meta);

	domGles_pipeline_settings::domClip_plane::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intClip_plane));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intColor_mask::create(daeInt bytes)
{
	intGles_pipeline_settings::intColor_maskRef ref = new(bytes) intGles_pipeline_settings::intColor_mask;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intColor_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_mask" );
	_Meta->registerClass(intGles_pipeline_settings::intColor_mask::create, &_Meta);

	domGles_pipeline_settings::domColor_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intColor_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intCull_face::create(daeInt bytes)
{
	intGles_pipeline_settings::intCull_faceRef ref = new(bytes) intGles_pipeline_settings::intCull_face;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intCull_face::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "cull_face" );
	_Meta->registerClass(intGles_pipeline_settings::intCull_face::create, &_Meta);

	domGles_pipeline_settings::domCull_face::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intCull_face));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intDepth_func::create(daeInt bytes)
{
	intGles_pipeline_settings::intDepth_funcRef ref = new(bytes) intGles_pipeline_settings::intDepth_func;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intDepth_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_func" );
	_Meta->registerClass(intGles_pipeline_settings::intDepth_func::create, &_Meta);

	domGles_pipeline_settings::domDepth_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intDepth_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intDepth_mask::create(daeInt bytes)
{
	intGles_pipeline_settings::intDepth_maskRef ref = new(bytes) intGles_pipeline_settings::intDepth_mask;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intDepth_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_mask" );
	_Meta->registerClass(intGles_pipeline_settings::intDepth_mask::create, &_Meta);

	domGles_pipeline_settings::domDepth_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intDepth_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intDepth_range::create(daeInt bytes)
{
	intGles_pipeline_settings::intDepth_rangeRef ref = new(bytes) intGles_pipeline_settings::intDepth_range;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intDepth_range::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_range" );
	_Meta->registerClass(intGles_pipeline_settings::intDepth_range::create, &_Meta);

	domGles_pipeline_settings::domDepth_range::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intDepth_range));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_color::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_colorRef ref = new(bytes) intGles_pipeline_settings::intFog_color;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_color" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_color::create, &_Meta);

	domGles_pipeline_settings::domFog_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_density::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_densityRef ref = new(bytes) intGles_pipeline_settings::intFog_density;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_density::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_density" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_density::create, &_Meta);

	domGles_pipeline_settings::domFog_density::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_density));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_mode::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_modeRef ref = new(bytes) intGles_pipeline_settings::intFog_mode;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_mode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_mode" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_mode::create, &_Meta);

	domGles_pipeline_settings::domFog_mode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_mode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_start::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_startRef ref = new(bytes) intGles_pipeline_settings::intFog_start;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_start::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_start" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_start::create, &_Meta);

	domGles_pipeline_settings::domFog_start::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_start));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_end::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_endRef ref = new(bytes) intGles_pipeline_settings::intFog_end;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_end::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_end" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_end::create, &_Meta);

	domGles_pipeline_settings::domFog_end::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_end));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFront_face::create(daeInt bytes)
{
	intGles_pipeline_settings::intFront_faceRef ref = new(bytes) intGles_pipeline_settings::intFront_face;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFront_face::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "front_face" );
	_Meta->registerClass(intGles_pipeline_settings::intFront_face::create, &_Meta);

	domGles_pipeline_settings::domFront_face::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFront_face));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intTexture_pipeline::create(daeInt bytes)
{
	intGles_pipeline_settings::intTexture_pipelineRef ref = new(bytes) intGles_pipeline_settings::intTexture_pipeline;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intTexture_pipeline::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture_pipeline" );
	_Meta->registerClass(intGles_pipeline_settings::intTexture_pipeline::create, &_Meta);

	domGles_pipeline_settings::domTexture_pipeline::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intTexture_pipeline));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLogic_op::create(daeInt bytes)
{
	intGles_pipeline_settings::intLogic_opRef ref = new(bytes) intGles_pipeline_settings::intLogic_op;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLogic_op::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "logic_op" );
	_Meta->registerClass(intGles_pipeline_settings::intLogic_op::create, &_Meta);

	domGles_pipeline_settings::domLogic_op::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLogic_op));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_ambient::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_ambientRef ref = new(bytes) intGles_pipeline_settings::intLight_ambient;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_ambient" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_ambient::create, &_Meta);

	domGles_pipeline_settings::domLight_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_diffuse::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_diffuseRef ref = new(bytes) intGles_pipeline_settings::intLight_diffuse;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_diffuse::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_diffuse" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_diffuse::create, &_Meta);

	domGles_pipeline_settings::domLight_diffuse::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_diffuse));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_specular::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_specularRef ref = new(bytes) intGles_pipeline_settings::intLight_specular;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_specular::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_specular" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_specular::create, &_Meta);

	domGles_pipeline_settings::domLight_specular::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_specular));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_position::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_positionRef ref = new(bytes) intGles_pipeline_settings::intLight_position;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_position::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_position" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_position::create, &_Meta);

	domGles_pipeline_settings::domLight_position::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_position));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_constant_attenuation::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_constant_attenuationRef ref = new(bytes) intGles_pipeline_settings::intLight_constant_attenuation;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_constant_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_constant_attenuation" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_constant_attenuation::create, &_Meta);

	domGles_pipeline_settings::domLight_constant_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_constant_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_linear_attenutation::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_linear_attenutationRef ref = new(bytes) intGles_pipeline_settings::intLight_linear_attenutation;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_linear_attenutation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_linear_attenutation" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_linear_attenutation::create, &_Meta);

	domGles_pipeline_settings::domLight_linear_attenutation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_linear_attenutation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_quadratic_attenuation::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_quadratic_attenuationRef ref = new(bytes) intGles_pipeline_settings::intLight_quadratic_attenuation;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_quadratic_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_quadratic_attenuation" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_quadratic_attenuation::create, &_Meta);

	domGles_pipeline_settings::domLight_quadratic_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_quadratic_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_spot_cutoff::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_spot_cutoffRef ref = new(bytes) intGles_pipeline_settings::intLight_spot_cutoff;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_spot_cutoff::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_cutoff" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_spot_cutoff::create, &_Meta);

	domGles_pipeline_settings::domLight_spot_cutoff::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_spot_cutoff));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_spot_direction::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_spot_directionRef ref = new(bytes) intGles_pipeline_settings::intLight_spot_direction;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_spot_direction::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_direction" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_spot_direction::create, &_Meta);

	domGles_pipeline_settings::domLight_spot_direction::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_spot_direction));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_spot_exponent::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_spot_exponentRef ref = new(bytes) intGles_pipeline_settings::intLight_spot_exponent;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_spot_exponent::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_exponent" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_spot_exponent::create, &_Meta);

	domGles_pipeline_settings::domLight_spot_exponent::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_spot_exponent));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_model_ambient::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_model_ambientRef ref = new(bytes) intGles_pipeline_settings::intLight_model_ambient;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_model_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_ambient" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_model_ambient::create, &_Meta);

	domGles_pipeline_settings::domLight_model_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_model_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLine_width::create(daeInt bytes)
{
	intGles_pipeline_settings::intLine_widthRef ref = new(bytes) intGles_pipeline_settings::intLine_width;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLine_width::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_width" );
	_Meta->registerClass(intGles_pipeline_settings::intLine_width::create, &_Meta);

	domGles_pipeline_settings::domLine_width::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLine_width));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMaterial_ambient::create(daeInt bytes)
{
	intGles_pipeline_settings::intMaterial_ambientRef ref = new(bytes) intGles_pipeline_settings::intMaterial_ambient;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMaterial_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_ambient" );
	_Meta->registerClass(intGles_pipeline_settings::intMaterial_ambient::create, &_Meta);

	domGles_pipeline_settings::domMaterial_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMaterial_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMaterial_diffuse::create(daeInt bytes)
{
	intGles_pipeline_settings::intMaterial_diffuseRef ref = new(bytes) intGles_pipeline_settings::intMaterial_diffuse;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMaterial_diffuse::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_diffuse" );
	_Meta->registerClass(intGles_pipeline_settings::intMaterial_diffuse::create, &_Meta);

	domGles_pipeline_settings::domMaterial_diffuse::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMaterial_diffuse));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMaterial_emission::create(daeInt bytes)
{
	intGles_pipeline_settings::intMaterial_emissionRef ref = new(bytes) intGles_pipeline_settings::intMaterial_emission;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMaterial_emission::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_emission" );
	_Meta->registerClass(intGles_pipeline_settings::intMaterial_emission::create, &_Meta);

	domGles_pipeline_settings::domMaterial_emission::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMaterial_emission));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMaterial_shininess::create(daeInt bytes)
{
	intGles_pipeline_settings::intMaterial_shininessRef ref = new(bytes) intGles_pipeline_settings::intMaterial_shininess;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMaterial_shininess::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_shininess" );
	_Meta->registerClass(intGles_pipeline_settings::intMaterial_shininess::create, &_Meta);

	domGles_pipeline_settings::domMaterial_shininess::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMaterial_shininess));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMaterial_specular::create(daeInt bytes)
{
	intGles_pipeline_settings::intMaterial_specularRef ref = new(bytes) intGles_pipeline_settings::intMaterial_specular;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMaterial_specular::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_specular" );
	_Meta->registerClass(intGles_pipeline_settings::intMaterial_specular::create, &_Meta);

	domGles_pipeline_settings::domMaterial_specular::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMaterial_specular));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intModel_view_matrix::create(daeInt bytes)
{
	intGles_pipeline_settings::intModel_view_matrixRef ref = new(bytes) intGles_pipeline_settings::intModel_view_matrix;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intModel_view_matrix::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "model_view_matrix" );
	_Meta->registerClass(intGles_pipeline_settings::intModel_view_matrix::create, &_Meta);

	domGles_pipeline_settings::domModel_view_matrix::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intModel_view_matrix));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_distance_attenuation::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_distance_attenuationRef ref = new(bytes) intGles_pipeline_settings::intPoint_distance_attenuation;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_distance_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_distance_attenuation" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_distance_attenuation::create, &_Meta);

	domGles_pipeline_settings::domPoint_distance_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_distance_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_fade_threshold_size::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_fade_threshold_sizeRef ref = new(bytes) intGles_pipeline_settings::intPoint_fade_threshold_size;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_fade_threshold_size::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_fade_threshold_size" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_fade_threshold_size::create, &_Meta);

	domGles_pipeline_settings::domPoint_fade_threshold_size::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_fade_threshold_size));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_size::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_sizeRef ref = new(bytes) intGles_pipeline_settings::intPoint_size;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_size::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_size::create, &_Meta);

	domGles_pipeline_settings::domPoint_size::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_size));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_size_min::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_size_minRef ref = new(bytes) intGles_pipeline_settings::intPoint_size_min;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_size_min::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size_min" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_size_min::create, &_Meta);

	domGles_pipeline_settings::domPoint_size_min::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_size_min));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_size_max::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_size_maxRef ref = new(bytes) intGles_pipeline_settings::intPoint_size_max;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_size_max::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size_max" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_size_max::create, &_Meta);

	domGles_pipeline_settings::domPoint_size_max::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_size_max));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPolygon_offset::create(daeInt bytes)
{
	intGles_pipeline_settings::intPolygon_offsetRef ref = new(bytes) intGles_pipeline_settings::intPolygon_offset;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPolygon_offset::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset" );
	_Meta->registerClass(intGles_pipeline_settings::intPolygon_offset::create, &_Meta);

	domGles_pipeline_settings::domPolygon_offset::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPolygon_offset));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intProjection_matrix::create(daeInt bytes)
{
	intGles_pipeline_settings::intProjection_matrixRef ref = new(bytes) intGles_pipeline_settings::intProjection_matrix;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intProjection_matrix::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "projection_matrix" );
	_Meta->registerClass(intGles_pipeline_settings::intProjection_matrix::create, &_Meta);

	domGles_pipeline_settings::domProjection_matrix::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intProjection_matrix));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intScissor::create(daeInt bytes)
{
	intGles_pipeline_settings::intScissorRef ref = new(bytes) intGles_pipeline_settings::intScissor;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intScissor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "scissor" );
	_Meta->registerClass(intGles_pipeline_settings::intScissor::create, &_Meta);

	domGles_pipeline_settings::domScissor::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intScissor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intShade_model::create(daeInt bytes)
{
	intGles_pipeline_settings::intShade_modelRef ref = new(bytes) intGles_pipeline_settings::intShade_model;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intShade_model::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shade_model" );
	_Meta->registerClass(intGles_pipeline_settings::intShade_model::create, &_Meta);

	domGles_pipeline_settings::domShade_model::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intShade_model));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_func::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_funcRef ref = new(bytes) intGles_pipeline_settings::intStencil_func;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_func" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_func::create, &_Meta);

	domGles_pipeline_settings::domStencil_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_func::intFunc::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_func::intFuncRef ref = new(bytes) intGles_pipeline_settings::intStencil_func::intFunc;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_func::intFunc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "func" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_func::intFunc::create, &_Meta);

	domGles_pipeline_settings::domStencil_func::domFunc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_func::intFunc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_func::intRef::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_func::intRefRef ref = new(bytes) intGles_pipeline_settings::intStencil_func::intRef;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_func::intRef::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "ref" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_func::intRef::create, &_Meta);

	domGles_pipeline_settings::domStencil_func::domRef::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_func::intRef));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_func::intMask::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_func::intMaskRef ref = new(bytes) intGles_pipeline_settings::intStencil_func::intMask;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_func::intMask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mask" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_func::intMask::create, &_Meta);

	domGles_pipeline_settings::domStencil_func::domMask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_func::intMask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_mask::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_maskRef ref = new(bytes) intGles_pipeline_settings::intStencil_mask;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_mask" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_mask::create, &_Meta);

	domGles_pipeline_settings::domStencil_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_op::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_opRef ref = new(bytes) intGles_pipeline_settings::intStencil_op;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_op::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_op" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_op::create, &_Meta);

	domGles_pipeline_settings::domStencil_op::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_op));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_op::intFail::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_op::intFailRef ref = new(bytes) intGles_pipeline_settings::intStencil_op::intFail;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_op::intFail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fail" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_op::intFail::create, &_Meta);

	domGles_pipeline_settings::domStencil_op::domFail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_op::intFail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_op::intZfail::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_op::intZfailRef ref = new(bytes) intGles_pipeline_settings::intStencil_op::intZfail;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_op::intZfail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zfail" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_op::intZfail::create, &_Meta);

	domGles_pipeline_settings::domStencil_op::domZfail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_op::intZfail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_op::intZpass::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_op::intZpassRef ref = new(bytes) intGles_pipeline_settings::intStencil_op::intZpass;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_op::intZpass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zpass" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_op::intZpass::create, &_Meta);

	domGles_pipeline_settings::domStencil_op::domZpass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_op::intZpass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intAlpha_test_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intAlpha_test_enableRef ref = new(bytes) intGles_pipeline_settings::intAlpha_test_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intAlpha_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "alpha_test_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intAlpha_test_enable::create, &_Meta);

	domGles_pipeline_settings::domAlpha_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intAlpha_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intBlend_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intBlend_enableRef ref = new(bytes) intGles_pipeline_settings::intBlend_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intBlend_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intBlend_enable::create, &_Meta);

	domGles_pipeline_settings::domBlend_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intBlend_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intClip_plane_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intClip_plane_enableRef ref = new(bytes) intGles_pipeline_settings::intClip_plane_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intClip_plane_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clip_plane_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intClip_plane_enable::create, &_Meta);

	domGles_pipeline_settings::domClip_plane_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intClip_plane_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intColor_logic_op_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intColor_logic_op_enableRef ref = new(bytes) intGles_pipeline_settings::intColor_logic_op_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intColor_logic_op_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_logic_op_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intColor_logic_op_enable::create, &_Meta);

	domGles_pipeline_settings::domColor_logic_op_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intColor_logic_op_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intColor_material_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intColor_material_enableRef ref = new(bytes) intGles_pipeline_settings::intColor_material_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intColor_material_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_material_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intColor_material_enable::create, &_Meta);

	domGles_pipeline_settings::domColor_material_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intColor_material_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intCull_face_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intCull_face_enableRef ref = new(bytes) intGles_pipeline_settings::intCull_face_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intCull_face_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "cull_face_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intCull_face_enable::create, &_Meta);

	domGles_pipeline_settings::domCull_face_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intCull_face_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intDepth_test_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intDepth_test_enableRef ref = new(bytes) intGles_pipeline_settings::intDepth_test_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intDepth_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_test_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intDepth_test_enable::create, &_Meta);

	domGles_pipeline_settings::domDepth_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intDepth_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intDither_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intDither_enableRef ref = new(bytes) intGles_pipeline_settings::intDither_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intDither_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dither_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intDither_enable::create, &_Meta);

	domGles_pipeline_settings::domDither_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intDither_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intFog_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intFog_enableRef ref = new(bytes) intGles_pipeline_settings::intFog_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intFog_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intFog_enable::create, &_Meta);

	domGles_pipeline_settings::domFog_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intFog_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intTexture_pipeline_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intTexture_pipeline_enableRef ref = new(bytes) intGles_pipeline_settings::intTexture_pipeline_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intTexture_pipeline_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture_pipeline_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intTexture_pipeline_enable::create, &_Meta);

	domGles_pipeline_settings::domTexture_pipeline_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intTexture_pipeline_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_enableRef ref = new(bytes) intGles_pipeline_settings::intLight_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_enable::create, &_Meta);

	domGles_pipeline_settings::domLight_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLighting_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intLighting_enableRef ref = new(bytes) intGles_pipeline_settings::intLighting_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLighting_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "lighting_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intLighting_enable::create, &_Meta);

	domGles_pipeline_settings::domLighting_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLighting_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLight_model_two_side_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intLight_model_two_side_enableRef ref = new(bytes) intGles_pipeline_settings::intLight_model_two_side_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLight_model_two_side_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_two_side_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intLight_model_two_side_enable::create, &_Meta);

	domGles_pipeline_settings::domLight_model_two_side_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLight_model_two_side_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intLine_smooth_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intLine_smooth_enableRef ref = new(bytes) intGles_pipeline_settings::intLine_smooth_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intLine_smooth_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_smooth_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intLine_smooth_enable::create, &_Meta);

	domGles_pipeline_settings::domLine_smooth_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intLine_smooth_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intMultisample_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intMultisample_enableRef ref = new(bytes) intGles_pipeline_settings::intMultisample_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intMultisample_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "multisample_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intMultisample_enable::create, &_Meta);

	domGles_pipeline_settings::domMultisample_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intMultisample_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intNormalize_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intNormalize_enableRef ref = new(bytes) intGles_pipeline_settings::intNormalize_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intNormalize_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "normalize_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intNormalize_enable::create, &_Meta);

	domGles_pipeline_settings::domNormalize_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intNormalize_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPoint_smooth_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intPoint_smooth_enableRef ref = new(bytes) intGles_pipeline_settings::intPoint_smooth_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPoint_smooth_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_smooth_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intPoint_smooth_enable::create, &_Meta);

	domGles_pipeline_settings::domPoint_smooth_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPoint_smooth_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intPolygon_offset_fill_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intPolygon_offset_fill_enableRef ref = new(bytes) intGles_pipeline_settings::intPolygon_offset_fill_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intPolygon_offset_fill_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset_fill_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intPolygon_offset_fill_enable::create, &_Meta);

	domGles_pipeline_settings::domPolygon_offset_fill_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intPolygon_offset_fill_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intRescale_normal_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intRescale_normal_enableRef ref = new(bytes) intGles_pipeline_settings::intRescale_normal_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intRescale_normal_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "rescale_normal_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intRescale_normal_enable::create, &_Meta);

	domGles_pipeline_settings::domRescale_normal_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intRescale_normal_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intSample_alpha_to_coverage_enableRef ref = new(bytes) intGles_pipeline_settings::intSample_alpha_to_coverage_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_alpha_to_coverage_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intSample_alpha_to_coverage_enable::create, &_Meta);

	domGles_pipeline_settings::domSample_alpha_to_coverage_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intSample_alpha_to_coverage_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intSample_alpha_to_one_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intSample_alpha_to_one_enableRef ref = new(bytes) intGles_pipeline_settings::intSample_alpha_to_one_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intSample_alpha_to_one_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_alpha_to_one_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intSample_alpha_to_one_enable::create, &_Meta);

	domGles_pipeline_settings::domSample_alpha_to_one_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intSample_alpha_to_one_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intSample_coverage_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intSample_coverage_enableRef ref = new(bytes) intGles_pipeline_settings::intSample_coverage_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intSample_coverage_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_coverage_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intSample_coverage_enable::create, &_Meta);

	domGles_pipeline_settings::domSample_coverage_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intSample_coverage_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intScissor_test_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intScissor_test_enableRef ref = new(bytes) intGles_pipeline_settings::intScissor_test_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intScissor_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "scissor_test_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intScissor_test_enable::create, &_Meta);

	domGles_pipeline_settings::domScissor_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intScissor_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGles_pipeline_settings::intStencil_test_enable::create(daeInt bytes)
{
	intGles_pipeline_settings::intStencil_test_enableRef ref = new(bytes) intGles_pipeline_settings::intStencil_test_enable;
	return ref;
}

daeMetaElement *
intGles_pipeline_settings::intStencil_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_test_enable" );
	_Meta->registerClass(intGles_pipeline_settings::intStencil_test_enable::create, &_Meta);

	domGles_pipeline_settings::domStencil_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGles_pipeline_settings::intStencil_test_enable));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intGles_pipeline_settings() {
}

intGles_pipeline_settings::~intGles_pipeline_settings() {
}

// IMPORT

void
intGles_pipeline_settings::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intAlpha_func::intAlpha_func() {
}

intGles_pipeline_settings::intAlpha_func::~intAlpha_func() {
}

// IMPORT

void
intGles_pipeline_settings::intAlpha_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intAlpha_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intAlpha_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intAlpha_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intAlpha_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intAlpha_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intAlpha_func::intFunc::intFunc() {
}

intGles_pipeline_settings::intAlpha_func::intFunc::~intFunc() {
}

// IMPORT

void
intGles_pipeline_settings::intAlpha_func::intFunc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intAlpha_func::intFunc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intAlpha_func::intFunc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intAlpha_func::intFunc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intAlpha_func::intFunc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intAlpha_func::intFunc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intAlpha_func::intValue::intValue() {
}

intGles_pipeline_settings::intAlpha_func::intValue::~intValue() {
}

// IMPORT

void
intGles_pipeline_settings::intAlpha_func::intValue::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intAlpha_func::intValue::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intAlpha_func::intValue::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intAlpha_func::intValue::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intAlpha_func::intValue::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intAlpha_func::intValue::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intBlend_func::intBlend_func() {
}

intGles_pipeline_settings::intBlend_func::~intBlend_func() {
}

// IMPORT

void
intGles_pipeline_settings::intBlend_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intBlend_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intBlend_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intBlend_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intBlend_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intBlend_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intBlend_func::intSrc::intSrc() {
}

intGles_pipeline_settings::intBlend_func::intSrc::~intSrc() {
}

// IMPORT

void
intGles_pipeline_settings::intBlend_func::intSrc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intBlend_func::intSrc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intBlend_func::intSrc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intBlend_func::intSrc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intBlend_func::intSrc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intBlend_func::intSrc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intBlend_func::intDest::intDest() {
}

intGles_pipeline_settings::intBlend_func::intDest::~intDest() {
}

// IMPORT

void
intGles_pipeline_settings::intBlend_func::intDest::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intBlend_func::intDest::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intBlend_func::intDest::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intBlend_func::intDest::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intBlend_func::intDest::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intBlend_func::intDest::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intClear_color::intClear_color() {
}

intGles_pipeline_settings::intClear_color::~intClear_color() {
}

// IMPORT

void
intGles_pipeline_settings::intClear_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intClear_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intClear_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intClear_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intClear_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intClear_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intClear_stencil::intClear_stencil() {
}

intGles_pipeline_settings::intClear_stencil::~intClear_stencil() {
}

// IMPORT

void
intGles_pipeline_settings::intClear_stencil::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intClear_stencil::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intClear_stencil::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intClear_stencil::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intClear_stencil::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intClear_stencil::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intClear_depth::intClear_depth() {
}

intGles_pipeline_settings::intClear_depth::~intClear_depth() {
}

// IMPORT

void
intGles_pipeline_settings::intClear_depth::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intClear_depth::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intClear_depth::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intClear_depth::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intClear_depth::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intClear_depth::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intClip_plane::intClip_plane() {
}

intGles_pipeline_settings::intClip_plane::~intClip_plane() {
}

// IMPORT

void
intGles_pipeline_settings::intClip_plane::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intClip_plane::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intClip_plane::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intClip_plane::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intClip_plane::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intClip_plane::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intColor_mask::intColor_mask() {
}

intGles_pipeline_settings::intColor_mask::~intColor_mask() {
}

// IMPORT

void
intGles_pipeline_settings::intColor_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intColor_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intColor_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intColor_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intColor_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intColor_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intCull_face::intCull_face() {
}

intGles_pipeline_settings::intCull_face::~intCull_face() {
}

// IMPORT

void
intGles_pipeline_settings::intCull_face::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intCull_face::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intCull_face::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intCull_face::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intCull_face::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intCull_face::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intDepth_func::intDepth_func() {
}

intGles_pipeline_settings::intDepth_func::~intDepth_func() {
}

// IMPORT

void
intGles_pipeline_settings::intDepth_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intDepth_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intDepth_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intDepth_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intDepth_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intDepth_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intDepth_mask::intDepth_mask() {
}

intGles_pipeline_settings::intDepth_mask::~intDepth_mask() {
}

// IMPORT

void
intGles_pipeline_settings::intDepth_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intDepth_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intDepth_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intDepth_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intDepth_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intDepth_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intDepth_range::intDepth_range() {
}

intGles_pipeline_settings::intDepth_range::~intDepth_range() {
}

// IMPORT

void
intGles_pipeline_settings::intDepth_range::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intDepth_range::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intDepth_range::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intDepth_range::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intDepth_range::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intDepth_range::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_color::intFog_color() {
}

intGles_pipeline_settings::intFog_color::~intFog_color() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_density::intFog_density() {
}

intGles_pipeline_settings::intFog_density::~intFog_density() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_density::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_density::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_density::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_density::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_density::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_density::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_mode::intFog_mode() {
}

intGles_pipeline_settings::intFog_mode::~intFog_mode() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_mode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_mode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_mode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_mode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_mode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_mode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_start::intFog_start() {
}

intGles_pipeline_settings::intFog_start::~intFog_start() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_start::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_start::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_start::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_start::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_start::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_start::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_end::intFog_end() {
}

intGles_pipeline_settings::intFog_end::~intFog_end() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_end::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_end::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_end::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_end::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_end::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_end::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFront_face::intFront_face() {
}

intGles_pipeline_settings::intFront_face::~intFront_face() {
}

// IMPORT

void
intGles_pipeline_settings::intFront_face::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFront_face::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFront_face::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFront_face::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFront_face::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFront_face::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intTexture_pipeline::intTexture_pipeline() {
}

intGles_pipeline_settings::intTexture_pipeline::~intTexture_pipeline() {
}

// IMPORT

void
intGles_pipeline_settings::intTexture_pipeline::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intTexture_pipeline::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intTexture_pipeline::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intTexture_pipeline::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intTexture_pipeline::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intTexture_pipeline::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLogic_op::intLogic_op() {
}

intGles_pipeline_settings::intLogic_op::~intLogic_op() {
}

// IMPORT

void
intGles_pipeline_settings::intLogic_op::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLogic_op::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLogic_op::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLogic_op::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLogic_op::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLogic_op::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_ambient::intLight_ambient() {
}

intGles_pipeline_settings::intLight_ambient::~intLight_ambient() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_diffuse::intLight_diffuse() {
}

intGles_pipeline_settings::intLight_diffuse::~intLight_diffuse() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_diffuse::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_diffuse::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_diffuse::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_diffuse::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_diffuse::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_diffuse::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_specular::intLight_specular() {
}

intGles_pipeline_settings::intLight_specular::~intLight_specular() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_specular::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_specular::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_specular::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_specular::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_specular::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_specular::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_position::intLight_position() {
}

intGles_pipeline_settings::intLight_position::~intLight_position() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_position::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_position::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_position::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_position::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_position::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_position::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_constant_attenuation::intLight_constant_attenuation() {
}

intGles_pipeline_settings::intLight_constant_attenuation::~intLight_constant_attenuation() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_constant_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_constant_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_constant_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_constant_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_constant_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_constant_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_linear_attenutation::intLight_linear_attenutation() {
}

intGles_pipeline_settings::intLight_linear_attenutation::~intLight_linear_attenutation() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_linear_attenutation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_linear_attenutation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_linear_attenutation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_linear_attenutation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_linear_attenutation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_linear_attenutation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_quadratic_attenuation::intLight_quadratic_attenuation() {
}

intGles_pipeline_settings::intLight_quadratic_attenuation::~intLight_quadratic_attenuation() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_quadratic_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_quadratic_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_quadratic_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_quadratic_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_quadratic_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_quadratic_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_spot_cutoff::intLight_spot_cutoff() {
}

intGles_pipeline_settings::intLight_spot_cutoff::~intLight_spot_cutoff() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_spot_cutoff::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_spot_cutoff::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_spot_cutoff::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_spot_cutoff::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_spot_cutoff::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_spot_cutoff::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_spot_direction::intLight_spot_direction() {
}

intGles_pipeline_settings::intLight_spot_direction::~intLight_spot_direction() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_spot_direction::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_spot_direction::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_spot_direction::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_spot_direction::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_spot_direction::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_spot_direction::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_spot_exponent::intLight_spot_exponent() {
}

intGles_pipeline_settings::intLight_spot_exponent::~intLight_spot_exponent() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_spot_exponent::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_spot_exponent::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_spot_exponent::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_spot_exponent::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_spot_exponent::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_spot_exponent::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_model_ambient::intLight_model_ambient() {
}

intGles_pipeline_settings::intLight_model_ambient::~intLight_model_ambient() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_model_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_model_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_model_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_model_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_model_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_model_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLine_width::intLine_width() {
}

intGles_pipeline_settings::intLine_width::~intLine_width() {
}

// IMPORT

void
intGles_pipeline_settings::intLine_width::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLine_width::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLine_width::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLine_width::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLine_width::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLine_width::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMaterial_ambient::intMaterial_ambient() {
}

intGles_pipeline_settings::intMaterial_ambient::~intMaterial_ambient() {
}

// IMPORT

void
intGles_pipeline_settings::intMaterial_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMaterial_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMaterial_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMaterial_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMaterial_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMaterial_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMaterial_diffuse::intMaterial_diffuse() {
}

intGles_pipeline_settings::intMaterial_diffuse::~intMaterial_diffuse() {
}

// IMPORT

void
intGles_pipeline_settings::intMaterial_diffuse::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMaterial_diffuse::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMaterial_diffuse::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMaterial_diffuse::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMaterial_diffuse::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMaterial_diffuse::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMaterial_emission::intMaterial_emission() {
}

intGles_pipeline_settings::intMaterial_emission::~intMaterial_emission() {
}

// IMPORT

void
intGles_pipeline_settings::intMaterial_emission::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMaterial_emission::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMaterial_emission::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMaterial_emission::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMaterial_emission::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMaterial_emission::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMaterial_shininess::intMaterial_shininess() {
}

intGles_pipeline_settings::intMaterial_shininess::~intMaterial_shininess() {
}

// IMPORT

void
intGles_pipeline_settings::intMaterial_shininess::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMaterial_shininess::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMaterial_shininess::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMaterial_shininess::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMaterial_shininess::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMaterial_shininess::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMaterial_specular::intMaterial_specular() {
}

intGles_pipeline_settings::intMaterial_specular::~intMaterial_specular() {
}

// IMPORT

void
intGles_pipeline_settings::intMaterial_specular::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMaterial_specular::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMaterial_specular::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMaterial_specular::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMaterial_specular::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMaterial_specular::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intModel_view_matrix::intModel_view_matrix() {
}

intGles_pipeline_settings::intModel_view_matrix::~intModel_view_matrix() {
}

// IMPORT

void
intGles_pipeline_settings::intModel_view_matrix::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intModel_view_matrix::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intModel_view_matrix::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intModel_view_matrix::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intModel_view_matrix::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intModel_view_matrix::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_distance_attenuation::intPoint_distance_attenuation() {
}

intGles_pipeline_settings::intPoint_distance_attenuation::~intPoint_distance_attenuation() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_distance_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_distance_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_distance_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_distance_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_distance_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_distance_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_fade_threshold_size::intPoint_fade_threshold_size() {
}

intGles_pipeline_settings::intPoint_fade_threshold_size::~intPoint_fade_threshold_size() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_fade_threshold_size::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_fade_threshold_size::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_fade_threshold_size::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_fade_threshold_size::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_fade_threshold_size::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_fade_threshold_size::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_size::intPoint_size() {
}

intGles_pipeline_settings::intPoint_size::~intPoint_size() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_size::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_size::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_size::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_size::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_size::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_size::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_size_min::intPoint_size_min() {
}

intGles_pipeline_settings::intPoint_size_min::~intPoint_size_min() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_size_min::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_size_min::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_size_min::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_size_min::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_size_min::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_size_min::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_size_max::intPoint_size_max() {
}

intGles_pipeline_settings::intPoint_size_max::~intPoint_size_max() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_size_max::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_size_max::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_size_max::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_size_max::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_size_max::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_size_max::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPolygon_offset::intPolygon_offset() {
}

intGles_pipeline_settings::intPolygon_offset::~intPolygon_offset() {
}

// IMPORT

void
intGles_pipeline_settings::intPolygon_offset::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPolygon_offset::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPolygon_offset::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPolygon_offset::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPolygon_offset::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPolygon_offset::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intProjection_matrix::intProjection_matrix() {
}

intGles_pipeline_settings::intProjection_matrix::~intProjection_matrix() {
}

// IMPORT

void
intGles_pipeline_settings::intProjection_matrix::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intProjection_matrix::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intProjection_matrix::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intProjection_matrix::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intProjection_matrix::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intProjection_matrix::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intScissor::intScissor() {
}

intGles_pipeline_settings::intScissor::~intScissor() {
}

// IMPORT

void
intGles_pipeline_settings::intScissor::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intScissor::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intScissor::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intScissor::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intScissor::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intScissor::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intShade_model::intShade_model() {
}

intGles_pipeline_settings::intShade_model::~intShade_model() {
}

// IMPORT

void
intGles_pipeline_settings::intShade_model::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intShade_model::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intShade_model::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intShade_model::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intShade_model::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intShade_model::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_func::intStencil_func() {
}

intGles_pipeline_settings::intStencil_func::~intStencil_func() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_func::intFunc::intFunc() {
}

intGles_pipeline_settings::intStencil_func::intFunc::~intFunc() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_func::intFunc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_func::intFunc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_func::intFunc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_func::intFunc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_func::intFunc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_func::intFunc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_func::intRef::intRef() {
}

intGles_pipeline_settings::intStencil_func::intRef::~intRef() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_func::intRef::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_func::intRef::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_func::intRef::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_func::intRef::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_func::intRef::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_func::intRef::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_func::intMask::intMask() {
}

intGles_pipeline_settings::intStencil_func::intMask::~intMask() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_func::intMask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_func::intMask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_func::intMask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_func::intMask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_func::intMask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_func::intMask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_mask::intStencil_mask() {
}

intGles_pipeline_settings::intStencil_mask::~intStencil_mask() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_op::intStencil_op() {
}

intGles_pipeline_settings::intStencil_op::~intStencil_op() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_op::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_op::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_op::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_op::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_op::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_op::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_op::intFail::intFail() {
}

intGles_pipeline_settings::intStencil_op::intFail::~intFail() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_op::intFail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_op::intFail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_op::intFail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_op::intFail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_op::intFail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_op::intFail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_op::intZfail::intZfail() {
}

intGles_pipeline_settings::intStencil_op::intZfail::~intZfail() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_op::intZfail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_op::intZfail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_op::intZfail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_op::intZfail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_op::intZfail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_op::intZfail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_op::intZpass::intZpass() {
}

intGles_pipeline_settings::intStencil_op::intZpass::~intZpass() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_op::intZpass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_op::intZpass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_op::intZpass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_op::intZpass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_op::intZpass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_op::intZpass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intAlpha_test_enable::intAlpha_test_enable() {
}

intGles_pipeline_settings::intAlpha_test_enable::~intAlpha_test_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intAlpha_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intAlpha_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intAlpha_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intAlpha_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intAlpha_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intAlpha_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intBlend_enable::intBlend_enable() {
}

intGles_pipeline_settings::intBlend_enable::~intBlend_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intBlend_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intBlend_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intBlend_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intBlend_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intBlend_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intBlend_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intClip_plane_enable::intClip_plane_enable() {
}

intGles_pipeline_settings::intClip_plane_enable::~intClip_plane_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intClip_plane_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intClip_plane_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intClip_plane_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intClip_plane_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intClip_plane_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intClip_plane_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intColor_logic_op_enable::intColor_logic_op_enable() {
}

intGles_pipeline_settings::intColor_logic_op_enable::~intColor_logic_op_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intColor_logic_op_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intColor_logic_op_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intColor_logic_op_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intColor_logic_op_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intColor_logic_op_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intColor_logic_op_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intColor_material_enable::intColor_material_enable() {
}

intGles_pipeline_settings::intColor_material_enable::~intColor_material_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intColor_material_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intColor_material_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intColor_material_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intColor_material_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intColor_material_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intColor_material_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intCull_face_enable::intCull_face_enable() {
}

intGles_pipeline_settings::intCull_face_enable::~intCull_face_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intCull_face_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intCull_face_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intCull_face_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intCull_face_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intCull_face_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intCull_face_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intDepth_test_enable::intDepth_test_enable() {
}

intGles_pipeline_settings::intDepth_test_enable::~intDepth_test_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intDepth_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intDepth_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intDepth_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intDepth_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intDepth_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intDepth_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intDither_enable::intDither_enable() {
}

intGles_pipeline_settings::intDither_enable::~intDither_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intDither_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intDither_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intDither_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intDither_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intDither_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intDither_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intFog_enable::intFog_enable() {
}

intGles_pipeline_settings::intFog_enable::~intFog_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intFog_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intFog_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intFog_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intFog_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intFog_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intFog_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intTexture_pipeline_enable::intTexture_pipeline_enable() {
}

intGles_pipeline_settings::intTexture_pipeline_enable::~intTexture_pipeline_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intTexture_pipeline_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intTexture_pipeline_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intTexture_pipeline_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intTexture_pipeline_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intTexture_pipeline_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intTexture_pipeline_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_enable::intLight_enable() {
}

intGles_pipeline_settings::intLight_enable::~intLight_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLighting_enable::intLighting_enable() {
}

intGles_pipeline_settings::intLighting_enable::~intLighting_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intLighting_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLighting_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLighting_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLighting_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLighting_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLighting_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLight_model_two_side_enable::intLight_model_two_side_enable() {
}

intGles_pipeline_settings::intLight_model_two_side_enable::~intLight_model_two_side_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intLight_model_two_side_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLight_model_two_side_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLight_model_two_side_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLight_model_two_side_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLight_model_two_side_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLight_model_two_side_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intLine_smooth_enable::intLine_smooth_enable() {
}

intGles_pipeline_settings::intLine_smooth_enable::~intLine_smooth_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intLine_smooth_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intLine_smooth_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intLine_smooth_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intLine_smooth_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intLine_smooth_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intLine_smooth_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intMultisample_enable::intMultisample_enable() {
}

intGles_pipeline_settings::intMultisample_enable::~intMultisample_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intMultisample_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intMultisample_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intMultisample_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intMultisample_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intMultisample_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intMultisample_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intNormalize_enable::intNormalize_enable() {
}

intGles_pipeline_settings::intNormalize_enable::~intNormalize_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intNormalize_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intNormalize_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intNormalize_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intNormalize_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intNormalize_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intNormalize_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPoint_smooth_enable::intPoint_smooth_enable() {
}

intGles_pipeline_settings::intPoint_smooth_enable::~intPoint_smooth_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intPoint_smooth_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPoint_smooth_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPoint_smooth_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPoint_smooth_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPoint_smooth_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPoint_smooth_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intPolygon_offset_fill_enable::intPolygon_offset_fill_enable() {
}

intGles_pipeline_settings::intPolygon_offset_fill_enable::~intPolygon_offset_fill_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intPolygon_offset_fill_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intRescale_normal_enable::intRescale_normal_enable() {
}

intGles_pipeline_settings::intRescale_normal_enable::~intRescale_normal_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intRescale_normal_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intRescale_normal_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intRescale_normal_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intRescale_normal_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intRescale_normal_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intRescale_normal_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::intSample_alpha_to_coverage_enable() {
}

intGles_pipeline_settings::intSample_alpha_to_coverage_enable::~intSample_alpha_to_coverage_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intSample_alpha_to_coverage_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intSample_alpha_to_one_enable::intSample_alpha_to_one_enable() {
}

intGles_pipeline_settings::intSample_alpha_to_one_enable::~intSample_alpha_to_one_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intSample_alpha_to_one_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intSample_coverage_enable::intSample_coverage_enable() {
}

intGles_pipeline_settings::intSample_coverage_enable::~intSample_coverage_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intSample_coverage_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intSample_coverage_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intSample_coverage_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intSample_coverage_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intSample_coverage_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intSample_coverage_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intScissor_test_enable::intScissor_test_enable() {
}

intGles_pipeline_settings::intScissor_test_enable::~intScissor_test_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intScissor_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intScissor_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intScissor_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intScissor_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intScissor_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intScissor_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGles_pipeline_settings::intStencil_test_enable::intStencil_test_enable() {
}

intGles_pipeline_settings::intStencil_test_enable::~intStencil_test_enable() {
}

// IMPORT

void
intGles_pipeline_settings::intStencil_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGles_pipeline_settings::intStencil_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGles_pipeline_settings::intStencil_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGles_pipeline_settings::intStencil_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGles_pipeline_settings::intStencil_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGles_pipeline_settings::intStencil_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


