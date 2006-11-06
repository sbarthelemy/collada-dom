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
#include "intGl_pipeline_settings.h"
#include <dom/domGl_pipeline_settings.h>

daeMetaElement * intGl_pipeline_settings::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intAlpha_func::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intAlpha_func::intFunc::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intAlpha_func::intValue::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func::intSrc::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func::intDest::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func_separate::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_equation::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_equation_separate::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_equation_separate::intRgb::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_equation_separate::intAlpha::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_material::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_material::intFace::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_material::intMode::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intCull_face::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_func::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_mode::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_coord_src::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFront_face::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_model_color_control::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLogic_op::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_mode::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_mode::intFace::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_mode::intMode::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intShade_model::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func::intFunc::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func::intRef::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func::intMask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op::intFail::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op::intZfail::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op::intZpass::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func_separate::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func_separate::intFront::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func_separate::intBack::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func_separate::intRef::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_func_separate::intMask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op_separate::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op_separate::intFace::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op_separate::intFail::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op_separate::intZfail::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_op_separate::intZpass::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_mask_separate::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_mask_separate::intFace::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_mask_separate::intMask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_ambient::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_diffuse::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_specular::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_position::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_constant_attenuation::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_linear_attenuation::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_quadratic_attenuation::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_spot_cutoff::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_spot_direction::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_spot_exponent::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture1D::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture1D::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture2D::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture2D::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture3D::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture3D::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureCUBE::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureCUBE::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureRECT::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureRECT::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureDEPTH::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureDEPTH::intParam::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture1D_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture2D_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture3D_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureCUBE_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureRECT_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTextureDEPTH_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture_env_color::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intTexture_env_mode::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intClip_plane::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intClip_plane_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_color::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intClear_color::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intClear_stencil::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intClear_depth::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_mask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_bounds::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_mask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_range::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_density::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_start::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_end::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_color::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_model_ambient::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLighting_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLine_stipple::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLine_width::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMaterial_ambient::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMaterial_diffuse::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMaterial_emission::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMaterial_shininess::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMaterial_specular::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intModel_view_matrix::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_distance_attenuation::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_fade_threshold_size::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_size::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_size_min::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_size_max::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_offset::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intProjection_matrix::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intScissor::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_mask::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intAlpha_test_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intAuto_normal_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intBlend_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_logic_op_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intColor_material_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intCull_face_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_bounds_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_clamp_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDepth_test_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intDither_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intFog_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_model_local_viewer_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLight_model_two_side_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLine_smooth_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLine_stipple_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intLogic_op_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intMultisample_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intNormalize_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPoint_smooth_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_offset_fill_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_offset_line_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_offset_point_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_smooth_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intPolygon_stipple_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intRescale_normal_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intSample_alpha_to_coverage_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intSample_alpha_to_one_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intSample_coverage_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intScissor_test_enable::_Meta = NULL;
daeMetaElement * intGl_pipeline_settings::intStencil_test_enable::_Meta = NULL;

// ********************************************************
// ***** GENERATED INTERFACE - do NOT touch ***************
// ********************************************************

daeElementRef
intGl_pipeline_settings::create(daeInt bytes)
{
	intGl_pipeline_settingsRef ref = new(bytes) intGl_pipeline_settings;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "gl_pipeline_settings" );
	_Meta->registerClass(intGl_pipeline_settings::create, &_Meta);

	domGl_pipeline_settings::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intAlpha_func::create(daeInt bytes)
{
	intGl_pipeline_settings::intAlpha_funcRef ref = new(bytes) intGl_pipeline_settings::intAlpha_func;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intAlpha_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "alpha_func" );
	_Meta->registerClass(intGl_pipeline_settings::intAlpha_func::create, &_Meta);

	domGl_pipeline_settings::domAlpha_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intAlpha_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intAlpha_func::intFunc::create(daeInt bytes)
{
	intGl_pipeline_settings::intAlpha_func::intFuncRef ref = new(bytes) intGl_pipeline_settings::intAlpha_func::intFunc;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intAlpha_func::intFunc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "func" );
	_Meta->registerClass(intGl_pipeline_settings::intAlpha_func::intFunc::create, &_Meta);

	domGl_pipeline_settings::domAlpha_func::domFunc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intAlpha_func::intFunc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intAlpha_func::intValue::create(daeInt bytes)
{
	intGl_pipeline_settings::intAlpha_func::intValueRef ref = new(bytes) intGl_pipeline_settings::intAlpha_func::intValue;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intAlpha_func::intValue::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "value" );
	_Meta->registerClass(intGl_pipeline_settings::intAlpha_func::intValue::create, &_Meta);

	domGl_pipeline_settings::domAlpha_func::domValue::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intAlpha_func::intValue));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_funcRef ref = new(bytes) intGl_pipeline_settings::intBlend_func;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_func" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func::create, &_Meta);

	domGl_pipeline_settings::domBlend_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func::intSrc::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func::intSrcRef ref = new(bytes) intGl_pipeline_settings::intBlend_func::intSrc;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func::intSrc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "src" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func::intSrc::create, &_Meta);

	domGl_pipeline_settings::domBlend_func::domSrc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func::intSrc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func::intDest::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func::intDestRef ref = new(bytes) intGl_pipeline_settings::intBlend_func::intDest;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func::intDest::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dest" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func::intDest::create, &_Meta);

	domGl_pipeline_settings::domBlend_func::domDest::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func::intDest));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func_separate::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func_separateRef ref = new(bytes) intGl_pipeline_settings::intBlend_func_separate;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func_separate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_func_separate" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func_separate::create, &_Meta);

	domGl_pipeline_settings::domBlend_func_separate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func_separate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func_separate::intSrc_rgbRef ref = new(bytes) intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "src_rgb" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::create, &_Meta);

	domGl_pipeline_settings::domBlend_func_separate::domSrc_rgb::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func_separate::intDest_rgbRef ref = new(bytes) intGl_pipeline_settings::intBlend_func_separate::intDest_rgb;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dest_rgb" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::create, &_Meta);

	domGl_pipeline_settings::domBlend_func_separate::domDest_rgb::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func_separate::intDest_rgb));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func_separate::intSrc_alphaRef ref = new(bytes) intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "src_alpha" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::create, &_Meta);

	domGl_pipeline_settings::domBlend_func_separate::domSrc_alpha::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_func_separate::intDest_alphaRef ref = new(bytes) intGl_pipeline_settings::intBlend_func_separate::intDest_alpha;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dest_alpha" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::create, &_Meta);

	domGl_pipeline_settings::domBlend_func_separate::domDest_alpha::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_func_separate::intDest_alpha));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_equation::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_equationRef ref = new(bytes) intGl_pipeline_settings::intBlend_equation;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_equation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_equation" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_equation::create, &_Meta);

	domGl_pipeline_settings::domBlend_equation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_equation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_equation_separate::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_equation_separateRef ref = new(bytes) intGl_pipeline_settings::intBlend_equation_separate;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_equation_separate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_equation_separate" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_equation_separate::create, &_Meta);

	domGl_pipeline_settings::domBlend_equation_separate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_equation_separate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_equation_separate::intRgb::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_equation_separate::intRgbRef ref = new(bytes) intGl_pipeline_settings::intBlend_equation_separate::intRgb;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_equation_separate::intRgb::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "rgb" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_equation_separate::intRgb::create, &_Meta);

	domGl_pipeline_settings::domBlend_equation_separate::domRgb::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_equation_separate::intRgb));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_equation_separate::intAlphaRef ref = new(bytes) intGl_pipeline_settings::intBlend_equation_separate::intAlpha;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "alpha" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_equation_separate::intAlpha::create, &_Meta);

	domGl_pipeline_settings::domBlend_equation_separate::domAlpha::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_equation_separate::intAlpha));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_material::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_materialRef ref = new(bytes) intGl_pipeline_settings::intColor_material;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_material::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_material" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_material::create, &_Meta);

	domGl_pipeline_settings::domColor_material::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_material));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_material::intFace::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_material::intFaceRef ref = new(bytes) intGl_pipeline_settings::intColor_material::intFace;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_material::intFace::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "face" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_material::intFace::create, &_Meta);

	domGl_pipeline_settings::domColor_material::domFace::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_material::intFace));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_material::intMode::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_material::intModeRef ref = new(bytes) intGl_pipeline_settings::intColor_material::intMode;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_material::intMode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mode" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_material::intMode::create, &_Meta);

	domGl_pipeline_settings::domColor_material::domMode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_material::intMode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intCull_face::create(daeInt bytes)
{
	intGl_pipeline_settings::intCull_faceRef ref = new(bytes) intGl_pipeline_settings::intCull_face;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intCull_face::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "cull_face" );
	_Meta->registerClass(intGl_pipeline_settings::intCull_face::create, &_Meta);

	domGl_pipeline_settings::domCull_face::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intCull_face));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_func::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_funcRef ref = new(bytes) intGl_pipeline_settings::intDepth_func;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_func" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_func::create, &_Meta);

	domGl_pipeline_settings::domDepth_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_mode::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_modeRef ref = new(bytes) intGl_pipeline_settings::intFog_mode;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_mode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_mode" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_mode::create, &_Meta);

	domGl_pipeline_settings::domFog_mode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_mode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_coord_src::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_coord_srcRef ref = new(bytes) intGl_pipeline_settings::intFog_coord_src;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_coord_src::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_coord_src" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_coord_src::create, &_Meta);

	domGl_pipeline_settings::domFog_coord_src::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_coord_src));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFront_face::create(daeInt bytes)
{
	intGl_pipeline_settings::intFront_faceRef ref = new(bytes) intGl_pipeline_settings::intFront_face;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFront_face::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "front_face" );
	_Meta->registerClass(intGl_pipeline_settings::intFront_face::create, &_Meta);

	domGl_pipeline_settings::domFront_face::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFront_face));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_model_color_control::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_model_color_controlRef ref = new(bytes) intGl_pipeline_settings::intLight_model_color_control;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_model_color_control::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_color_control" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_model_color_control::create, &_Meta);

	domGl_pipeline_settings::domLight_model_color_control::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_model_color_control));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLogic_op::create(daeInt bytes)
{
	intGl_pipeline_settings::intLogic_opRef ref = new(bytes) intGl_pipeline_settings::intLogic_op;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLogic_op::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "logic_op" );
	_Meta->registerClass(intGl_pipeline_settings::intLogic_op::create, &_Meta);

	domGl_pipeline_settings::domLogic_op::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLogic_op));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_mode::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_modeRef ref = new(bytes) intGl_pipeline_settings::intPolygon_mode;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_mode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_mode" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_mode::create, &_Meta);

	domGl_pipeline_settings::domPolygon_mode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_mode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_mode::intFace::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_mode::intFaceRef ref = new(bytes) intGl_pipeline_settings::intPolygon_mode::intFace;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_mode::intFace::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "face" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_mode::intFace::create, &_Meta);

	domGl_pipeline_settings::domPolygon_mode::domFace::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_mode::intFace));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_mode::intMode::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_mode::intModeRef ref = new(bytes) intGl_pipeline_settings::intPolygon_mode::intMode;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_mode::intMode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mode" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_mode::intMode::create, &_Meta);

	domGl_pipeline_settings::domPolygon_mode::domMode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_mode::intMode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intShade_model::create(daeInt bytes)
{
	intGl_pipeline_settings::intShade_modelRef ref = new(bytes) intGl_pipeline_settings::intShade_model;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intShade_model::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "shade_model" );
	_Meta->registerClass(intGl_pipeline_settings::intShade_model::create, &_Meta);

	domGl_pipeline_settings::domShade_model::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intShade_model));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_funcRef ref = new(bytes) intGl_pipeline_settings::intStencil_func;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_func" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func::create, &_Meta);

	domGl_pipeline_settings::domStencil_func::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func::intFunc::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func::intFuncRef ref = new(bytes) intGl_pipeline_settings::intStencil_func::intFunc;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func::intFunc::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "func" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func::intFunc::create, &_Meta);

	domGl_pipeline_settings::domStencil_func::domFunc::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func::intFunc));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func::intRef::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func::intRefRef ref = new(bytes) intGl_pipeline_settings::intStencil_func::intRef;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func::intRef::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "ref" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func::intRef::create, &_Meta);

	domGl_pipeline_settings::domStencil_func::domRef::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func::intRef));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func::intMask::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func::intMaskRef ref = new(bytes) intGl_pipeline_settings::intStencil_func::intMask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func::intMask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mask" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func::intMask::create, &_Meta);

	domGl_pipeline_settings::domStencil_func::domMask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func::intMask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_opRef ref = new(bytes) intGl_pipeline_settings::intStencil_op;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_op" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op::create, &_Meta);

	domGl_pipeline_settings::domStencil_op::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op::intFail::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op::intFailRef ref = new(bytes) intGl_pipeline_settings::intStencil_op::intFail;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op::intFail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fail" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op::intFail::create, &_Meta);

	domGl_pipeline_settings::domStencil_op::domFail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op::intFail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op::intZfail::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op::intZfailRef ref = new(bytes) intGl_pipeline_settings::intStencil_op::intZfail;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op::intZfail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zfail" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op::intZfail::create, &_Meta);

	domGl_pipeline_settings::domStencil_op::domZfail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op::intZfail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op::intZpass::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op::intZpassRef ref = new(bytes) intGl_pipeline_settings::intStencil_op::intZpass;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op::intZpass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zpass" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op::intZpass::create, &_Meta);

	domGl_pipeline_settings::domStencil_op::domZpass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op::intZpass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func_separate::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func_separateRef ref = new(bytes) intGl_pipeline_settings::intStencil_func_separate;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func_separate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_func_separate" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func_separate::create, &_Meta);

	domGl_pipeline_settings::domStencil_func_separate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func_separate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func_separate::intFront::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func_separate::intFrontRef ref = new(bytes) intGl_pipeline_settings::intStencil_func_separate::intFront;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func_separate::intFront::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "front" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func_separate::intFront::create, &_Meta);

	domGl_pipeline_settings::domStencil_func_separate::domFront::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func_separate::intFront));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func_separate::intBack::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func_separate::intBackRef ref = new(bytes) intGl_pipeline_settings::intStencil_func_separate::intBack;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func_separate::intBack::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "back" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func_separate::intBack::create, &_Meta);

	domGl_pipeline_settings::domStencil_func_separate::domBack::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func_separate::intBack));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func_separate::intRef::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func_separate::intRefRef ref = new(bytes) intGl_pipeline_settings::intStencil_func_separate::intRef;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func_separate::intRef::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "ref" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func_separate::intRef::create, &_Meta);

	domGl_pipeline_settings::domStencil_func_separate::domRef::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func_separate::intRef));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_func_separate::intMask::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_func_separate::intMaskRef ref = new(bytes) intGl_pipeline_settings::intStencil_func_separate::intMask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_func_separate::intMask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mask" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_func_separate::intMask::create, &_Meta);

	domGl_pipeline_settings::domStencil_func_separate::domMask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_func_separate::intMask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op_separate::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op_separateRef ref = new(bytes) intGl_pipeline_settings::intStencil_op_separate;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op_separate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_op_separate" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op_separate::create, &_Meta);

	domGl_pipeline_settings::domStencil_op_separate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op_separate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op_separate::intFace::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op_separate::intFaceRef ref = new(bytes) intGl_pipeline_settings::intStencil_op_separate::intFace;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op_separate::intFace::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "face" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op_separate::intFace::create, &_Meta);

	domGl_pipeline_settings::domStencil_op_separate::domFace::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op_separate::intFace));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op_separate::intFail::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op_separate::intFailRef ref = new(bytes) intGl_pipeline_settings::intStencil_op_separate::intFail;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op_separate::intFail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fail" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op_separate::intFail::create, &_Meta);

	domGl_pipeline_settings::domStencil_op_separate::domFail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op_separate::intFail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op_separate::intZfail::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op_separate::intZfailRef ref = new(bytes) intGl_pipeline_settings::intStencil_op_separate::intZfail;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op_separate::intZfail::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zfail" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op_separate::intZfail::create, &_Meta);

	domGl_pipeline_settings::domStencil_op_separate::domZfail::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op_separate::intZfail));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_op_separate::intZpass::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_op_separate::intZpassRef ref = new(bytes) intGl_pipeline_settings::intStencil_op_separate::intZpass;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_op_separate::intZpass::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "zpass" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_op_separate::intZpass::create, &_Meta);

	domGl_pipeline_settings::domStencil_op_separate::domZpass::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_op_separate::intZpass));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_mask_separate::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_mask_separateRef ref = new(bytes) intGl_pipeline_settings::intStencil_mask_separate;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_mask_separate::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_mask_separate" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_mask_separate::create, &_Meta);

	domGl_pipeline_settings::domStencil_mask_separate::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_mask_separate));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_mask_separate::intFace::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_mask_separate::intFaceRef ref = new(bytes) intGl_pipeline_settings::intStencil_mask_separate::intFace;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_mask_separate::intFace::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "face" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_mask_separate::intFace::create, &_Meta);

	domGl_pipeline_settings::domStencil_mask_separate::domFace::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_mask_separate::intFace));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_mask_separate::intMask::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_mask_separate::intMaskRef ref = new(bytes) intGl_pipeline_settings::intStencil_mask_separate::intMask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_mask_separate::intMask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "mask" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_mask_separate::intMask::create, &_Meta);

	domGl_pipeline_settings::domStencil_mask_separate::domMask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_mask_separate::intMask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_enableRef ref = new(bytes) intGl_pipeline_settings::intLight_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_enable::create, &_Meta);

	domGl_pipeline_settings::domLight_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_ambient::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_ambientRef ref = new(bytes) intGl_pipeline_settings::intLight_ambient;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_ambient" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_ambient::create, &_Meta);

	domGl_pipeline_settings::domLight_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_diffuse::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_diffuseRef ref = new(bytes) intGl_pipeline_settings::intLight_diffuse;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_diffuse::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_diffuse" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_diffuse::create, &_Meta);

	domGl_pipeline_settings::domLight_diffuse::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_diffuse));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_specular::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_specularRef ref = new(bytes) intGl_pipeline_settings::intLight_specular;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_specular::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_specular" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_specular::create, &_Meta);

	domGl_pipeline_settings::domLight_specular::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_specular));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_position::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_positionRef ref = new(bytes) intGl_pipeline_settings::intLight_position;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_position::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_position" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_position::create, &_Meta);

	domGl_pipeline_settings::domLight_position::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_position));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_constant_attenuation::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_constant_attenuationRef ref = new(bytes) intGl_pipeline_settings::intLight_constant_attenuation;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_constant_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_constant_attenuation" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_constant_attenuation::create, &_Meta);

	domGl_pipeline_settings::domLight_constant_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_constant_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_linear_attenuation::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_linear_attenuationRef ref = new(bytes) intGl_pipeline_settings::intLight_linear_attenuation;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_linear_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_linear_attenuation" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_linear_attenuation::create, &_Meta);

	domGl_pipeline_settings::domLight_linear_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_linear_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_quadratic_attenuation::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_quadratic_attenuationRef ref = new(bytes) intGl_pipeline_settings::intLight_quadratic_attenuation;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_quadratic_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_quadratic_attenuation" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_quadratic_attenuation::create, &_Meta);

	domGl_pipeline_settings::domLight_quadratic_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_quadratic_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_spot_cutoff::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_spot_cutoffRef ref = new(bytes) intGl_pipeline_settings::intLight_spot_cutoff;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_spot_cutoff::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_cutoff" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_spot_cutoff::create, &_Meta);

	domGl_pipeline_settings::domLight_spot_cutoff::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_spot_cutoff));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_spot_direction::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_spot_directionRef ref = new(bytes) intGl_pipeline_settings::intLight_spot_direction;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_spot_direction::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_direction" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_spot_direction::create, &_Meta);

	domGl_pipeline_settings::domLight_spot_direction::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_spot_direction));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_spot_exponent::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_spot_exponentRef ref = new(bytes) intGl_pipeline_settings::intLight_spot_exponent;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_spot_exponent::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_spot_exponent" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_spot_exponent::create, &_Meta);

	domGl_pipeline_settings::domLight_spot_exponent::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_spot_exponent));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture1D::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture1DRef ref = new(bytes) intGl_pipeline_settings::intTexture1D;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture1D::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture1D" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture1D::create, &_Meta);

	domGl_pipeline_settings::domTexture1D::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture1D));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture1D::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture1D::intParamRef ref = new(bytes) intGl_pipeline_settings::intTexture1D::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture1D::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture1D::intParam::create, &_Meta);

	domGl_pipeline_settings::domTexture1D::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture1D::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture2D::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture2DRef ref = new(bytes) intGl_pipeline_settings::intTexture2D;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture2D::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture2D" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture2D::create, &_Meta);

	domGl_pipeline_settings::domTexture2D::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture2D));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture2D::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture2D::intParamRef ref = new(bytes) intGl_pipeline_settings::intTexture2D::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture2D::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture2D::intParam::create, &_Meta);

	domGl_pipeline_settings::domTexture2D::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture2D::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture3D::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture3DRef ref = new(bytes) intGl_pipeline_settings::intTexture3D;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture3D::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture3D" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture3D::create, &_Meta);

	domGl_pipeline_settings::domTexture3D::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture3D));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture3D::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture3D::intParamRef ref = new(bytes) intGl_pipeline_settings::intTexture3D::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture3D::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture3D::intParam::create, &_Meta);

	domGl_pipeline_settings::domTexture3D::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture3D::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureCUBE::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureCUBERef ref = new(bytes) intGl_pipeline_settings::intTextureCUBE;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureCUBE::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureCUBE" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureCUBE::create, &_Meta);

	domGl_pipeline_settings::domTextureCUBE::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureCUBE));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureCUBE::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureCUBE::intParamRef ref = new(bytes) intGl_pipeline_settings::intTextureCUBE::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureCUBE::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureCUBE::intParam::create, &_Meta);

	domGl_pipeline_settings::domTextureCUBE::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureCUBE::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureRECT::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureRECTRef ref = new(bytes) intGl_pipeline_settings::intTextureRECT;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureRECT::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureRECT" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureRECT::create, &_Meta);

	domGl_pipeline_settings::domTextureRECT::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureRECT));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureRECT::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureRECT::intParamRef ref = new(bytes) intGl_pipeline_settings::intTextureRECT::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureRECT::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureRECT::intParam::create, &_Meta);

	domGl_pipeline_settings::domTextureRECT::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureRECT::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureDEPTH::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureDEPTHRef ref = new(bytes) intGl_pipeline_settings::intTextureDEPTH;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureDEPTH::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureDEPTH" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureDEPTH::create, &_Meta);

	domGl_pipeline_settings::domTextureDEPTH::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureDEPTH));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureDEPTH::intParam::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureDEPTH::intParamRef ref = new(bytes) intGl_pipeline_settings::intTextureDEPTH::intParam;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureDEPTH::intParam::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "param" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureDEPTH::intParam::create, &_Meta);

	domGl_pipeline_settings::domTextureDEPTH::domParam::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureDEPTH::intParam));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture1D_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture1D_enableRef ref = new(bytes) intGl_pipeline_settings::intTexture1D_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture1D_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture1D_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture1D_enable::create, &_Meta);

	domGl_pipeline_settings::domTexture1D_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture1D_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture2D_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture2D_enableRef ref = new(bytes) intGl_pipeline_settings::intTexture2D_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture2D_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture2D_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture2D_enable::create, &_Meta);

	domGl_pipeline_settings::domTexture2D_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture2D_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture3D_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture3D_enableRef ref = new(bytes) intGl_pipeline_settings::intTexture3D_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture3D_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture3D_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture3D_enable::create, &_Meta);

	domGl_pipeline_settings::domTexture3D_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture3D_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureCUBE_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureCUBE_enableRef ref = new(bytes) intGl_pipeline_settings::intTextureCUBE_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureCUBE_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureCUBE_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureCUBE_enable::create, &_Meta);

	domGl_pipeline_settings::domTextureCUBE_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureCUBE_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureRECT_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureRECT_enableRef ref = new(bytes) intGl_pipeline_settings::intTextureRECT_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureRECT_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureRECT_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureRECT_enable::create, &_Meta);

	domGl_pipeline_settings::domTextureRECT_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureRECT_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTextureDEPTH_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intTextureDEPTH_enableRef ref = new(bytes) intGl_pipeline_settings::intTextureDEPTH_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTextureDEPTH_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "textureDEPTH_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intTextureDEPTH_enable::create, &_Meta);

	domGl_pipeline_settings::domTextureDEPTH_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTextureDEPTH_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture_env_color::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture_env_colorRef ref = new(bytes) intGl_pipeline_settings::intTexture_env_color;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture_env_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture_env_color" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture_env_color::create, &_Meta);

	domGl_pipeline_settings::domTexture_env_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture_env_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intTexture_env_mode::create(daeInt bytes)
{
	intGl_pipeline_settings::intTexture_env_modeRef ref = new(bytes) intGl_pipeline_settings::intTexture_env_mode;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intTexture_env_mode::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "texture_env_mode" );
	_Meta->registerClass(intGl_pipeline_settings::intTexture_env_mode::create, &_Meta);

	domGl_pipeline_settings::domTexture_env_mode::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intTexture_env_mode));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intClip_plane::create(daeInt bytes)
{
	intGl_pipeline_settings::intClip_planeRef ref = new(bytes) intGl_pipeline_settings::intClip_plane;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intClip_plane::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clip_plane" );
	_Meta->registerClass(intGl_pipeline_settings::intClip_plane::create, &_Meta);

	domGl_pipeline_settings::domClip_plane::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intClip_plane));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intClip_plane_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intClip_plane_enableRef ref = new(bytes) intGl_pipeline_settings::intClip_plane_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intClip_plane_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clip_plane_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intClip_plane_enable::create, &_Meta);

	domGl_pipeline_settings::domClip_plane_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intClip_plane_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_color::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_colorRef ref = new(bytes) intGl_pipeline_settings::intBlend_color;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_color" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_color::create, &_Meta);

	domGl_pipeline_settings::domBlend_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intClear_color::create(daeInt bytes)
{
	intGl_pipeline_settings::intClear_colorRef ref = new(bytes) intGl_pipeline_settings::intClear_color;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intClear_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_color" );
	_Meta->registerClass(intGl_pipeline_settings::intClear_color::create, &_Meta);

	domGl_pipeline_settings::domClear_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intClear_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intClear_stencil::create(daeInt bytes)
{
	intGl_pipeline_settings::intClear_stencilRef ref = new(bytes) intGl_pipeline_settings::intClear_stencil;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intClear_stencil::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_stencil" );
	_Meta->registerClass(intGl_pipeline_settings::intClear_stencil::create, &_Meta);

	domGl_pipeline_settings::domClear_stencil::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intClear_stencil));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intClear_depth::create(daeInt bytes)
{
	intGl_pipeline_settings::intClear_depthRef ref = new(bytes) intGl_pipeline_settings::intClear_depth;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intClear_depth::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "clear_depth" );
	_Meta->registerClass(intGl_pipeline_settings::intClear_depth::create, &_Meta);

	domGl_pipeline_settings::domClear_depth::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intClear_depth));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_mask::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_maskRef ref = new(bytes) intGl_pipeline_settings::intColor_mask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_mask" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_mask::create, &_Meta);

	domGl_pipeline_settings::domColor_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_bounds::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_boundsRef ref = new(bytes) intGl_pipeline_settings::intDepth_bounds;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_bounds::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_bounds" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_bounds::create, &_Meta);

	domGl_pipeline_settings::domDepth_bounds::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_bounds));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_mask::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_maskRef ref = new(bytes) intGl_pipeline_settings::intDepth_mask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_mask" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_mask::create, &_Meta);

	domGl_pipeline_settings::domDepth_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_range::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_rangeRef ref = new(bytes) intGl_pipeline_settings::intDepth_range;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_range::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_range" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_range::create, &_Meta);

	domGl_pipeline_settings::domDepth_range::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_range));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_density::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_densityRef ref = new(bytes) intGl_pipeline_settings::intFog_density;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_density::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_density" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_density::create, &_Meta);

	domGl_pipeline_settings::domFog_density::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_density));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_start::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_startRef ref = new(bytes) intGl_pipeline_settings::intFog_start;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_start::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_start" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_start::create, &_Meta);

	domGl_pipeline_settings::domFog_start::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_start));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_end::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_endRef ref = new(bytes) intGl_pipeline_settings::intFog_end;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_end::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_end" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_end::create, &_Meta);

	domGl_pipeline_settings::domFog_end::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_end));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_color::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_colorRef ref = new(bytes) intGl_pipeline_settings::intFog_color;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_color::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_color" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_color::create, &_Meta);

	domGl_pipeline_settings::domFog_color::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_color));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_model_ambient::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_model_ambientRef ref = new(bytes) intGl_pipeline_settings::intLight_model_ambient;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_model_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_ambient" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_model_ambient::create, &_Meta);

	domGl_pipeline_settings::domLight_model_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_model_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLighting_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLighting_enableRef ref = new(bytes) intGl_pipeline_settings::intLighting_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLighting_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "lighting_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLighting_enable::create, &_Meta);

	domGl_pipeline_settings::domLighting_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLighting_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLine_stipple::create(daeInt bytes)
{
	intGl_pipeline_settings::intLine_stippleRef ref = new(bytes) intGl_pipeline_settings::intLine_stipple;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLine_stipple::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_stipple" );
	_Meta->registerClass(intGl_pipeline_settings::intLine_stipple::create, &_Meta);

	domGl_pipeline_settings::domLine_stipple::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLine_stipple));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLine_width::create(daeInt bytes)
{
	intGl_pipeline_settings::intLine_widthRef ref = new(bytes) intGl_pipeline_settings::intLine_width;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLine_width::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_width" );
	_Meta->registerClass(intGl_pipeline_settings::intLine_width::create, &_Meta);

	domGl_pipeline_settings::domLine_width::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLine_width));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMaterial_ambient::create(daeInt bytes)
{
	intGl_pipeline_settings::intMaterial_ambientRef ref = new(bytes) intGl_pipeline_settings::intMaterial_ambient;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMaterial_ambient::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_ambient" );
	_Meta->registerClass(intGl_pipeline_settings::intMaterial_ambient::create, &_Meta);

	domGl_pipeline_settings::domMaterial_ambient::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMaterial_ambient));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMaterial_diffuse::create(daeInt bytes)
{
	intGl_pipeline_settings::intMaterial_diffuseRef ref = new(bytes) intGl_pipeline_settings::intMaterial_diffuse;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMaterial_diffuse::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_diffuse" );
	_Meta->registerClass(intGl_pipeline_settings::intMaterial_diffuse::create, &_Meta);

	domGl_pipeline_settings::domMaterial_diffuse::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMaterial_diffuse));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMaterial_emission::create(daeInt bytes)
{
	intGl_pipeline_settings::intMaterial_emissionRef ref = new(bytes) intGl_pipeline_settings::intMaterial_emission;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMaterial_emission::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_emission" );
	_Meta->registerClass(intGl_pipeline_settings::intMaterial_emission::create, &_Meta);

	domGl_pipeline_settings::domMaterial_emission::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMaterial_emission));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMaterial_shininess::create(daeInt bytes)
{
	intGl_pipeline_settings::intMaterial_shininessRef ref = new(bytes) intGl_pipeline_settings::intMaterial_shininess;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMaterial_shininess::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_shininess" );
	_Meta->registerClass(intGl_pipeline_settings::intMaterial_shininess::create, &_Meta);

	domGl_pipeline_settings::domMaterial_shininess::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMaterial_shininess));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMaterial_specular::create(daeInt bytes)
{
	intGl_pipeline_settings::intMaterial_specularRef ref = new(bytes) intGl_pipeline_settings::intMaterial_specular;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMaterial_specular::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "material_specular" );
	_Meta->registerClass(intGl_pipeline_settings::intMaterial_specular::create, &_Meta);

	domGl_pipeline_settings::domMaterial_specular::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMaterial_specular));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intModel_view_matrix::create(daeInt bytes)
{
	intGl_pipeline_settings::intModel_view_matrixRef ref = new(bytes) intGl_pipeline_settings::intModel_view_matrix;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intModel_view_matrix::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "model_view_matrix" );
	_Meta->registerClass(intGl_pipeline_settings::intModel_view_matrix::create, &_Meta);

	domGl_pipeline_settings::domModel_view_matrix::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intModel_view_matrix));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_distance_attenuation::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_distance_attenuationRef ref = new(bytes) intGl_pipeline_settings::intPoint_distance_attenuation;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_distance_attenuation::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_distance_attenuation" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_distance_attenuation::create, &_Meta);

	domGl_pipeline_settings::domPoint_distance_attenuation::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_distance_attenuation));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_fade_threshold_size::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_fade_threshold_sizeRef ref = new(bytes) intGl_pipeline_settings::intPoint_fade_threshold_size;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_fade_threshold_size::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_fade_threshold_size" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_fade_threshold_size::create, &_Meta);

	domGl_pipeline_settings::domPoint_fade_threshold_size::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_fade_threshold_size));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_size::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_sizeRef ref = new(bytes) intGl_pipeline_settings::intPoint_size;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_size::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_size::create, &_Meta);

	domGl_pipeline_settings::domPoint_size::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_size));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_size_min::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_size_minRef ref = new(bytes) intGl_pipeline_settings::intPoint_size_min;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_size_min::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size_min" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_size_min::create, &_Meta);

	domGl_pipeline_settings::domPoint_size_min::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_size_min));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_size_max::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_size_maxRef ref = new(bytes) intGl_pipeline_settings::intPoint_size_max;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_size_max::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_size_max" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_size_max::create, &_Meta);

	domGl_pipeline_settings::domPoint_size_max::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_size_max));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_offset::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_offsetRef ref = new(bytes) intGl_pipeline_settings::intPolygon_offset;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_offset::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_offset::create, &_Meta);

	domGl_pipeline_settings::domPolygon_offset::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_offset));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intProjection_matrix::create(daeInt bytes)
{
	intGl_pipeline_settings::intProjection_matrixRef ref = new(bytes) intGl_pipeline_settings::intProjection_matrix;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intProjection_matrix::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "projection_matrix" );
	_Meta->registerClass(intGl_pipeline_settings::intProjection_matrix::create, &_Meta);

	domGl_pipeline_settings::domProjection_matrix::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intProjection_matrix));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intScissor::create(daeInt bytes)
{
	intGl_pipeline_settings::intScissorRef ref = new(bytes) intGl_pipeline_settings::intScissor;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intScissor::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "scissor" );
	_Meta->registerClass(intGl_pipeline_settings::intScissor::create, &_Meta);

	domGl_pipeline_settings::domScissor::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intScissor));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_mask::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_maskRef ref = new(bytes) intGl_pipeline_settings::intStencil_mask;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_mask::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_mask" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_mask::create, &_Meta);

	domGl_pipeline_settings::domStencil_mask::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_mask));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intAlpha_test_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intAlpha_test_enableRef ref = new(bytes) intGl_pipeline_settings::intAlpha_test_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intAlpha_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "alpha_test_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intAlpha_test_enable::create, &_Meta);

	domGl_pipeline_settings::domAlpha_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intAlpha_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intAuto_normal_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intAuto_normal_enableRef ref = new(bytes) intGl_pipeline_settings::intAuto_normal_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intAuto_normal_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "auto_normal_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intAuto_normal_enable::create, &_Meta);

	domGl_pipeline_settings::domAuto_normal_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intAuto_normal_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intBlend_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intBlend_enableRef ref = new(bytes) intGl_pipeline_settings::intBlend_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intBlend_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "blend_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intBlend_enable::create, &_Meta);

	domGl_pipeline_settings::domBlend_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intBlend_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_logic_op_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_logic_op_enableRef ref = new(bytes) intGl_pipeline_settings::intColor_logic_op_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_logic_op_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_logic_op_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_logic_op_enable::create, &_Meta);

	domGl_pipeline_settings::domColor_logic_op_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_logic_op_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intColor_material_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intColor_material_enableRef ref = new(bytes) intGl_pipeline_settings::intColor_material_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intColor_material_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "color_material_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intColor_material_enable::create, &_Meta);

	domGl_pipeline_settings::domColor_material_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intColor_material_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intCull_face_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intCull_face_enableRef ref = new(bytes) intGl_pipeline_settings::intCull_face_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intCull_face_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "cull_face_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intCull_face_enable::create, &_Meta);

	domGl_pipeline_settings::domCull_face_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intCull_face_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_bounds_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_bounds_enableRef ref = new(bytes) intGl_pipeline_settings::intDepth_bounds_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_bounds_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_bounds_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_bounds_enable::create, &_Meta);

	domGl_pipeline_settings::domDepth_bounds_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_bounds_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_clamp_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_clamp_enableRef ref = new(bytes) intGl_pipeline_settings::intDepth_clamp_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_clamp_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_clamp_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_clamp_enable::create, &_Meta);

	domGl_pipeline_settings::domDepth_clamp_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_clamp_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDepth_test_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intDepth_test_enableRef ref = new(bytes) intGl_pipeline_settings::intDepth_test_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDepth_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "depth_test_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intDepth_test_enable::create, &_Meta);

	domGl_pipeline_settings::domDepth_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDepth_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intDither_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intDither_enableRef ref = new(bytes) intGl_pipeline_settings::intDither_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intDither_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "dither_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intDither_enable::create, &_Meta);

	domGl_pipeline_settings::domDither_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intDither_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intFog_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intFog_enableRef ref = new(bytes) intGl_pipeline_settings::intFog_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intFog_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "fog_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intFog_enable::create, &_Meta);

	domGl_pipeline_settings::domFog_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intFog_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_model_local_viewer_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_model_local_viewer_enableRef ref = new(bytes) intGl_pipeline_settings::intLight_model_local_viewer_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_model_local_viewer_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_local_viewer_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_model_local_viewer_enable::create, &_Meta);

	domGl_pipeline_settings::domLight_model_local_viewer_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_model_local_viewer_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLight_model_two_side_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLight_model_two_side_enableRef ref = new(bytes) intGl_pipeline_settings::intLight_model_two_side_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLight_model_two_side_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "light_model_two_side_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLight_model_two_side_enable::create, &_Meta);

	domGl_pipeline_settings::domLight_model_two_side_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLight_model_two_side_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLine_smooth_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLine_smooth_enableRef ref = new(bytes) intGl_pipeline_settings::intLine_smooth_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLine_smooth_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_smooth_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLine_smooth_enable::create, &_Meta);

	domGl_pipeline_settings::domLine_smooth_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLine_smooth_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLine_stipple_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLine_stipple_enableRef ref = new(bytes) intGl_pipeline_settings::intLine_stipple_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLine_stipple_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "line_stipple_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLine_stipple_enable::create, &_Meta);

	domGl_pipeline_settings::domLine_stipple_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLine_stipple_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intLogic_op_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intLogic_op_enableRef ref = new(bytes) intGl_pipeline_settings::intLogic_op_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intLogic_op_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "logic_op_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intLogic_op_enable::create, &_Meta);

	domGl_pipeline_settings::domLogic_op_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intLogic_op_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intMultisample_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intMultisample_enableRef ref = new(bytes) intGl_pipeline_settings::intMultisample_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intMultisample_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "multisample_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intMultisample_enable::create, &_Meta);

	domGl_pipeline_settings::domMultisample_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intMultisample_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intNormalize_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intNormalize_enableRef ref = new(bytes) intGl_pipeline_settings::intNormalize_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intNormalize_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "normalize_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intNormalize_enable::create, &_Meta);

	domGl_pipeline_settings::domNormalize_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intNormalize_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPoint_smooth_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPoint_smooth_enableRef ref = new(bytes) intGl_pipeline_settings::intPoint_smooth_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPoint_smooth_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "point_smooth_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPoint_smooth_enable::create, &_Meta);

	domGl_pipeline_settings::domPoint_smooth_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPoint_smooth_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_offset_fill_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_offset_fill_enableRef ref = new(bytes) intGl_pipeline_settings::intPolygon_offset_fill_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_offset_fill_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset_fill_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_offset_fill_enable::create, &_Meta);

	domGl_pipeline_settings::domPolygon_offset_fill_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_offset_fill_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_offset_line_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_offset_line_enableRef ref = new(bytes) intGl_pipeline_settings::intPolygon_offset_line_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_offset_line_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset_line_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_offset_line_enable::create, &_Meta);

	domGl_pipeline_settings::domPolygon_offset_line_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_offset_line_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_offset_point_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_offset_point_enableRef ref = new(bytes) intGl_pipeline_settings::intPolygon_offset_point_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_offset_point_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_offset_point_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_offset_point_enable::create, &_Meta);

	domGl_pipeline_settings::domPolygon_offset_point_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_offset_point_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_smooth_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_smooth_enableRef ref = new(bytes) intGl_pipeline_settings::intPolygon_smooth_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_smooth_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_smooth_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_smooth_enable::create, &_Meta);

	domGl_pipeline_settings::domPolygon_smooth_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_smooth_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intPolygon_stipple_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intPolygon_stipple_enableRef ref = new(bytes) intGl_pipeline_settings::intPolygon_stipple_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intPolygon_stipple_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "polygon_stipple_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intPolygon_stipple_enable::create, &_Meta);

	domGl_pipeline_settings::domPolygon_stipple_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intPolygon_stipple_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intRescale_normal_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intRescale_normal_enableRef ref = new(bytes) intGl_pipeline_settings::intRescale_normal_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intRescale_normal_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "rescale_normal_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intRescale_normal_enable::create, &_Meta);

	domGl_pipeline_settings::domRescale_normal_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intRescale_normal_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intSample_alpha_to_coverage_enableRef ref = new(bytes) intGl_pipeline_settings::intSample_alpha_to_coverage_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_alpha_to_coverage_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intSample_alpha_to_coverage_enable::create, &_Meta);

	domGl_pipeline_settings::domSample_alpha_to_coverage_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intSample_alpha_to_coverage_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intSample_alpha_to_one_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intSample_alpha_to_one_enableRef ref = new(bytes) intGl_pipeline_settings::intSample_alpha_to_one_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intSample_alpha_to_one_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_alpha_to_one_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intSample_alpha_to_one_enable::create, &_Meta);

	domGl_pipeline_settings::domSample_alpha_to_one_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intSample_alpha_to_one_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intSample_coverage_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intSample_coverage_enableRef ref = new(bytes) intGl_pipeline_settings::intSample_coverage_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intSample_coverage_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "sample_coverage_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intSample_coverage_enable::create, &_Meta);

	domGl_pipeline_settings::domSample_coverage_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intSample_coverage_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intScissor_test_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intScissor_test_enableRef ref = new(bytes) intGl_pipeline_settings::intScissor_test_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intScissor_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "scissor_test_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intScissor_test_enable::create, &_Meta);

	domGl_pipeline_settings::domScissor_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intScissor_test_enable));
	_Meta->validate();

	return _Meta;
}

daeElementRef
intGl_pipeline_settings::intStencil_test_enable::create(daeInt bytes)
{
	intGl_pipeline_settings::intStencil_test_enableRef ref = new(bytes) intGl_pipeline_settings::intStencil_test_enable;
	return ref;
}

daeMetaElement *
intGl_pipeline_settings::intStencil_test_enable::registerElement()
{
    if ( _Meta != NULL ) return _Meta;
    
    _Meta = new daeMetaElement;
    _Meta->setName( "stencil_test_enable" );
	_Meta->registerClass(intGl_pipeline_settings::intStencil_test_enable::create, &_Meta);

	domGl_pipeline_settings::domStencil_test_enable::_Meta->setMetaIntegration(_Meta);

	_Meta->setElementSize(sizeof(intGl_pipeline_settings::intStencil_test_enable));
	_Meta->validate();

	return _Meta;
}


// ********************************************************
// ***** INTEGRATION INTERFACE ****************************
// ********************************************************

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intGl_pipeline_settings() {
}

intGl_pipeline_settings::~intGl_pipeline_settings() {
}

// IMPORT

void
intGl_pipeline_settings::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intAlpha_func::intAlpha_func() {
}

intGl_pipeline_settings::intAlpha_func::~intAlpha_func() {
}

// IMPORT

void
intGl_pipeline_settings::intAlpha_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intAlpha_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intAlpha_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intAlpha_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intAlpha_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intAlpha_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intAlpha_func::intFunc::intFunc() {
}

intGl_pipeline_settings::intAlpha_func::intFunc::~intFunc() {
}

// IMPORT

void
intGl_pipeline_settings::intAlpha_func::intFunc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intAlpha_func::intFunc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intAlpha_func::intFunc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intAlpha_func::intFunc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intAlpha_func::intFunc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intAlpha_func::intFunc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intAlpha_func::intValue::intValue() {
}

intGl_pipeline_settings::intAlpha_func::intValue::~intValue() {
}

// IMPORT

void
intGl_pipeline_settings::intAlpha_func::intValue::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intAlpha_func::intValue::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intAlpha_func::intValue::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intAlpha_func::intValue::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intAlpha_func::intValue::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intAlpha_func::intValue::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func::intBlend_func() {
}

intGl_pipeline_settings::intBlend_func::~intBlend_func() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func::intSrc::intSrc() {
}

intGl_pipeline_settings::intBlend_func::intSrc::~intSrc() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func::intSrc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func::intSrc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func::intSrc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func::intSrc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func::intSrc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func::intSrc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func::intDest::intDest() {
}

intGl_pipeline_settings::intBlend_func::intDest::~intDest() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func::intDest::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func::intDest::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func::intDest::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func::intDest::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func::intDest::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func::intDest::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func_separate::intBlend_func_separate() {
}

intGl_pipeline_settings::intBlend_func_separate::~intBlend_func_separate() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func_separate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func_separate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func_separate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func_separate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::intSrc_rgb() {
}

intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::~intSrc_rgb() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_rgb::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::intDest_rgb() {
}

intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::~intDest_rgb() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_rgb::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::intSrc_alpha() {
}

intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::~intSrc_alpha() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intSrc_alpha::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::intDest_alpha() {
}

intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::~intDest_alpha() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_func_separate::intDest_alpha::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_equation::intBlend_equation() {
}

intGl_pipeline_settings::intBlend_equation::~intBlend_equation() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_equation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_equation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_equation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_equation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_equation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_equation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_equation_separate::intBlend_equation_separate() {
}

intGl_pipeline_settings::intBlend_equation_separate::~intBlend_equation_separate() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_equation_separate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_equation_separate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_equation_separate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_equation_separate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_equation_separate::intRgb::intRgb() {
}

intGl_pipeline_settings::intBlend_equation_separate::intRgb::~intRgb() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intRgb::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::intAlpha() {
}

intGl_pipeline_settings::intBlend_equation_separate::intAlpha::~intAlpha() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_equation_separate::intAlpha::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_material::intColor_material() {
}

intGl_pipeline_settings::intColor_material::~intColor_material() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_material::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_material::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_material::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_material::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_material::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_material::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_material::intFace::intFace() {
}

intGl_pipeline_settings::intColor_material::intFace::~intFace() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_material::intFace::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_material::intFace::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_material::intFace::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_material::intFace::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_material::intFace::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_material::intFace::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_material::intMode::intMode() {
}

intGl_pipeline_settings::intColor_material::intMode::~intMode() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_material::intMode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_material::intMode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_material::intMode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_material::intMode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_material::intMode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_material::intMode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intCull_face::intCull_face() {
}

intGl_pipeline_settings::intCull_face::~intCull_face() {
}

// IMPORT

void
intGl_pipeline_settings::intCull_face::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intCull_face::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intCull_face::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intCull_face::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intCull_face::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intCull_face::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_func::intDepth_func() {
}

intGl_pipeline_settings::intDepth_func::~intDepth_func() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_mode::intFog_mode() {
}

intGl_pipeline_settings::intFog_mode::~intFog_mode() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_mode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_mode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_mode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_mode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_mode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_mode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_coord_src::intFog_coord_src() {
}

intGl_pipeline_settings::intFog_coord_src::~intFog_coord_src() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_coord_src::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_coord_src::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_coord_src::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_coord_src::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_coord_src::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_coord_src::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFront_face::intFront_face() {
}

intGl_pipeline_settings::intFront_face::~intFront_face() {
}

// IMPORT

void
intGl_pipeline_settings::intFront_face::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFront_face::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFront_face::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFront_face::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFront_face::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFront_face::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_model_color_control::intLight_model_color_control() {
}

intGl_pipeline_settings::intLight_model_color_control::~intLight_model_color_control() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_model_color_control::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_model_color_control::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_model_color_control::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_model_color_control::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_model_color_control::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_model_color_control::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLogic_op::intLogic_op() {
}

intGl_pipeline_settings::intLogic_op::~intLogic_op() {
}

// IMPORT

void
intGl_pipeline_settings::intLogic_op::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLogic_op::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLogic_op::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLogic_op::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLogic_op::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLogic_op::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_mode::intPolygon_mode() {
}

intGl_pipeline_settings::intPolygon_mode::~intPolygon_mode() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_mode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_mode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_mode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_mode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_mode::intFace::intFace() {
}

intGl_pipeline_settings::intPolygon_mode::intFace::~intFace() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_mode::intFace::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_mode::intFace::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::intFace::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_mode::intFace::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_mode::intFace::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::intFace::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_mode::intMode::intMode() {
}

intGl_pipeline_settings::intPolygon_mode::intMode::~intMode() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_mode::intMode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_mode::intMode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::intMode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_mode::intMode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_mode::intMode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_mode::intMode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intShade_model::intShade_model() {
}

intGl_pipeline_settings::intShade_model::~intShade_model() {
}

// IMPORT

void
intGl_pipeline_settings::intShade_model::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intShade_model::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intShade_model::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intShade_model::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intShade_model::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intShade_model::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func::intStencil_func() {
}

intGl_pipeline_settings::intStencil_func::~intStencil_func() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func::intFunc::intFunc() {
}

intGl_pipeline_settings::intStencil_func::intFunc::~intFunc() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func::intFunc::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func::intFunc::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func::intFunc::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func::intFunc::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func::intFunc::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func::intFunc::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func::intRef::intRef() {
}

intGl_pipeline_settings::intStencil_func::intRef::~intRef() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func::intRef::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func::intRef::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func::intRef::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func::intRef::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func::intRef::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func::intRef::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func::intMask::intMask() {
}

intGl_pipeline_settings::intStencil_func::intMask::~intMask() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func::intMask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func::intMask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func::intMask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func::intMask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func::intMask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func::intMask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op::intStencil_op() {
}

intGl_pipeline_settings::intStencil_op::~intStencil_op() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op::intFail::intFail() {
}

intGl_pipeline_settings::intStencil_op::intFail::~intFail() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op::intFail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op::intFail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op::intFail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op::intFail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op::intFail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op::intFail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op::intZfail::intZfail() {
}

intGl_pipeline_settings::intStencil_op::intZfail::~intZfail() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op::intZfail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op::intZfail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op::intZfail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op::intZfail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op::intZfail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op::intZfail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op::intZpass::intZpass() {
}

intGl_pipeline_settings::intStencil_op::intZpass::~intZpass() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op::intZpass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op::intZpass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op::intZpass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op::intZpass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op::intZpass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op::intZpass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func_separate::intStencil_func_separate() {
}

intGl_pipeline_settings::intStencil_func_separate::~intStencil_func_separate() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func_separate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func_separate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func_separate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func_separate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func_separate::intFront::intFront() {
}

intGl_pipeline_settings::intStencil_func_separate::intFront::~intFront() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func_separate::intFront::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func_separate::intFront::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intFront::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func_separate::intFront::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func_separate::intFront::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intFront::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func_separate::intBack::intBack() {
}

intGl_pipeline_settings::intStencil_func_separate::intBack::~intBack() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func_separate::intBack::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func_separate::intBack::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intBack::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func_separate::intBack::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func_separate::intBack::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intBack::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func_separate::intRef::intRef() {
}

intGl_pipeline_settings::intStencil_func_separate::intRef::~intRef() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func_separate::intRef::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func_separate::intRef::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intRef::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func_separate::intRef::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func_separate::intRef::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intRef::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_func_separate::intMask::intMask() {
}

intGl_pipeline_settings::intStencil_func_separate::intMask::~intMask() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_func_separate::intMask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_func_separate::intMask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intMask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_func_separate::intMask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_func_separate::intMask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_func_separate::intMask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op_separate::intStencil_op_separate() {
}

intGl_pipeline_settings::intStencil_op_separate::~intStencil_op_separate() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op_separate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op_separate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op_separate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op_separate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op_separate::intFace::intFace() {
}

intGl_pipeline_settings::intStencil_op_separate::intFace::~intFace() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op_separate::intFace::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFace::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFace::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op_separate::intFace::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFace::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFace::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op_separate::intFail::intFail() {
}

intGl_pipeline_settings::intStencil_op_separate::intFail::~intFail() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op_separate::intFail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op_separate::intFail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intFail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op_separate::intZfail::intZfail() {
}

intGl_pipeline_settings::intStencil_op_separate::intZfail::~intZfail() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZfail::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_op_separate::intZpass::intZpass() {
}

intGl_pipeline_settings::intStencil_op_separate::intZpass::~intZpass() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_op_separate::intZpass::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_mask_separate::intStencil_mask_separate() {
}

intGl_pipeline_settings::intStencil_mask_separate::~intStencil_mask_separate() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_mask_separate::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_mask_separate::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_mask_separate::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_mask_separate::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_mask_separate::intFace::intFace() {
}

intGl_pipeline_settings::intStencil_mask_separate::intFace::~intFace() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intFace::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_mask_separate::intMask::intMask() {
}

intGl_pipeline_settings::intStencil_mask_separate::intMask::~intMask() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_mask_separate::intMask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_enable::intLight_enable() {
}

intGl_pipeline_settings::intLight_enable::~intLight_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_ambient::intLight_ambient() {
}

intGl_pipeline_settings::intLight_ambient::~intLight_ambient() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_diffuse::intLight_diffuse() {
}

intGl_pipeline_settings::intLight_diffuse::~intLight_diffuse() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_diffuse::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_diffuse::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_diffuse::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_diffuse::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_diffuse::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_diffuse::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_specular::intLight_specular() {
}

intGl_pipeline_settings::intLight_specular::~intLight_specular() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_specular::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_specular::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_specular::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_specular::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_specular::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_specular::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_position::intLight_position() {
}

intGl_pipeline_settings::intLight_position::~intLight_position() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_position::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_position::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_position::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_position::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_position::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_position::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_constant_attenuation::intLight_constant_attenuation() {
}

intGl_pipeline_settings::intLight_constant_attenuation::~intLight_constant_attenuation() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_constant_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_constant_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_constant_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_constant_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_constant_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_constant_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_linear_attenuation::intLight_linear_attenuation() {
}

intGl_pipeline_settings::intLight_linear_attenuation::~intLight_linear_attenuation() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_linear_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_linear_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_linear_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_linear_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_linear_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_linear_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_quadratic_attenuation::intLight_quadratic_attenuation() {
}

intGl_pipeline_settings::intLight_quadratic_attenuation::~intLight_quadratic_attenuation() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_quadratic_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_quadratic_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_quadratic_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_quadratic_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_quadratic_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_quadratic_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_spot_cutoff::intLight_spot_cutoff() {
}

intGl_pipeline_settings::intLight_spot_cutoff::~intLight_spot_cutoff() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_spot_cutoff::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_spot_cutoff::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_spot_cutoff::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_spot_cutoff::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_spot_cutoff::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_spot_cutoff::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_spot_direction::intLight_spot_direction() {
}

intGl_pipeline_settings::intLight_spot_direction::~intLight_spot_direction() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_spot_direction::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_spot_direction::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_spot_direction::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_spot_direction::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_spot_direction::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_spot_direction::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_spot_exponent::intLight_spot_exponent() {
}

intGl_pipeline_settings::intLight_spot_exponent::~intLight_spot_exponent() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_spot_exponent::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_spot_exponent::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_spot_exponent::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_spot_exponent::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_spot_exponent::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_spot_exponent::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture1D::intTexture1D() {
}

intGl_pipeline_settings::intTexture1D::~intTexture1D() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture1D::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture1D::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture1D::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture1D::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture1D::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture1D::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture1D::intParam::intParam() {
}

intGl_pipeline_settings::intTexture1D::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture1D::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture1D::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture1D::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture1D::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture1D::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture1D::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture2D::intTexture2D() {
}

intGl_pipeline_settings::intTexture2D::~intTexture2D() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture2D::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture2D::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture2D::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture2D::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture2D::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture2D::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture2D::intParam::intParam() {
}

intGl_pipeline_settings::intTexture2D::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture2D::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture2D::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture2D::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture2D::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture2D::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture2D::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture3D::intTexture3D() {
}

intGl_pipeline_settings::intTexture3D::~intTexture3D() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture3D::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture3D::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture3D::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture3D::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture3D::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture3D::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture3D::intParam::intParam() {
}

intGl_pipeline_settings::intTexture3D::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture3D::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture3D::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture3D::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture3D::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture3D::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture3D::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureCUBE::intTextureCUBE() {
}

intGl_pipeline_settings::intTextureCUBE::~intTextureCUBE() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureCUBE::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureCUBE::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureCUBE::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureCUBE::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureCUBE::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureCUBE::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureCUBE::intParam::intParam() {
}

intGl_pipeline_settings::intTextureCUBE::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureCUBE::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureCUBE::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureCUBE::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureCUBE::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureCUBE::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureCUBE::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureRECT::intTextureRECT() {
}

intGl_pipeline_settings::intTextureRECT::~intTextureRECT() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureRECT::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureRECT::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureRECT::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureRECT::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureRECT::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureRECT::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureRECT::intParam::intParam() {
}

intGl_pipeline_settings::intTextureRECT::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureRECT::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureRECT::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureRECT::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureRECT::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureRECT::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureRECT::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureDEPTH::intTextureDEPTH() {
}

intGl_pipeline_settings::intTextureDEPTH::~intTextureDEPTH() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureDEPTH::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureDEPTH::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureDEPTH::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureDEPTH::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureDEPTH::intParam::intParam() {
}

intGl_pipeline_settings::intTextureDEPTH::intParam::~intParam() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureDEPTH::intParam::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureDEPTH::intParam::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH::intParam::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureDEPTH::intParam::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureDEPTH::intParam::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH::intParam::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture1D_enable::intTexture1D_enable() {
}

intGl_pipeline_settings::intTexture1D_enable::~intTexture1D_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture1D_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture1D_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture1D_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture1D_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture1D_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture1D_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture2D_enable::intTexture2D_enable() {
}

intGl_pipeline_settings::intTexture2D_enable::~intTexture2D_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture2D_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture2D_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture2D_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture2D_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture2D_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture2D_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture3D_enable::intTexture3D_enable() {
}

intGl_pipeline_settings::intTexture3D_enable::~intTexture3D_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture3D_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture3D_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture3D_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture3D_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture3D_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture3D_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureCUBE_enable::intTextureCUBE_enable() {
}

intGl_pipeline_settings::intTextureCUBE_enable::~intTextureCUBE_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureCUBE_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureCUBE_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureCUBE_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureCUBE_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureCUBE_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureCUBE_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureRECT_enable::intTextureRECT_enable() {
}

intGl_pipeline_settings::intTextureRECT_enable::~intTextureRECT_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureRECT_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureRECT_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureRECT_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureRECT_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureRECT_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureRECT_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTextureDEPTH_enable::intTextureDEPTH_enable() {
}

intGl_pipeline_settings::intTextureDEPTH_enable::~intTextureDEPTH_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intTextureDEPTH_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTextureDEPTH_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTextureDEPTH_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTextureDEPTH_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTextureDEPTH_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture_env_color::intTexture_env_color() {
}

intGl_pipeline_settings::intTexture_env_color::~intTexture_env_color() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture_env_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture_env_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture_env_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture_env_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture_env_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture_env_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intTexture_env_mode::intTexture_env_mode() {
}

intGl_pipeline_settings::intTexture_env_mode::~intTexture_env_mode() {
}

// IMPORT

void
intGl_pipeline_settings::intTexture_env_mode::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intTexture_env_mode::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intTexture_env_mode::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intTexture_env_mode::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intTexture_env_mode::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intTexture_env_mode::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intClip_plane::intClip_plane() {
}

intGl_pipeline_settings::intClip_plane::~intClip_plane() {
}

// IMPORT

void
intGl_pipeline_settings::intClip_plane::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intClip_plane::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intClip_plane::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intClip_plane::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intClip_plane::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intClip_plane::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intClip_plane_enable::intClip_plane_enable() {
}

intGl_pipeline_settings::intClip_plane_enable::~intClip_plane_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intClip_plane_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intClip_plane_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intClip_plane_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intClip_plane_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intClip_plane_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intClip_plane_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_color::intBlend_color() {
}

intGl_pipeline_settings::intBlend_color::~intBlend_color() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intClear_color::intClear_color() {
}

intGl_pipeline_settings::intClear_color::~intClear_color() {
}

// IMPORT

void
intGl_pipeline_settings::intClear_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intClear_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intClear_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intClear_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intClear_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intClear_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intClear_stencil::intClear_stencil() {
}

intGl_pipeline_settings::intClear_stencil::~intClear_stencil() {
}

// IMPORT

void
intGl_pipeline_settings::intClear_stencil::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intClear_stencil::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intClear_stencil::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intClear_stencil::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intClear_stencil::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intClear_stencil::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intClear_depth::intClear_depth() {
}

intGl_pipeline_settings::intClear_depth::~intClear_depth() {
}

// IMPORT

void
intGl_pipeline_settings::intClear_depth::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intClear_depth::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intClear_depth::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intClear_depth::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intClear_depth::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intClear_depth::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_mask::intColor_mask() {
}

intGl_pipeline_settings::intColor_mask::~intColor_mask() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_bounds::intDepth_bounds() {
}

intGl_pipeline_settings::intDepth_bounds::~intDepth_bounds() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_bounds::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_bounds::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_bounds::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_bounds::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_bounds::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_bounds::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_mask::intDepth_mask() {
}

intGl_pipeline_settings::intDepth_mask::~intDepth_mask() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_range::intDepth_range() {
}

intGl_pipeline_settings::intDepth_range::~intDepth_range() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_range::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_range::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_range::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_range::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_range::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_range::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_density::intFog_density() {
}

intGl_pipeline_settings::intFog_density::~intFog_density() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_density::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_density::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_density::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_density::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_density::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_density::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_start::intFog_start() {
}

intGl_pipeline_settings::intFog_start::~intFog_start() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_start::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_start::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_start::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_start::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_start::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_start::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_end::intFog_end() {
}

intGl_pipeline_settings::intFog_end::~intFog_end() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_end::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_end::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_end::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_end::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_end::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_end::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_color::intFog_color() {
}

intGl_pipeline_settings::intFog_color::~intFog_color() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_color::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_color::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_color::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_color::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_color::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_color::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_model_ambient::intLight_model_ambient() {
}

intGl_pipeline_settings::intLight_model_ambient::~intLight_model_ambient() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_model_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_model_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_model_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_model_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_model_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_model_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLighting_enable::intLighting_enable() {
}

intGl_pipeline_settings::intLighting_enable::~intLighting_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLighting_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLighting_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLighting_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLighting_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLighting_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLighting_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLine_stipple::intLine_stipple() {
}

intGl_pipeline_settings::intLine_stipple::~intLine_stipple() {
}

// IMPORT

void
intGl_pipeline_settings::intLine_stipple::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLine_stipple::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLine_stipple::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLine_stipple::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLine_stipple::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLine_stipple::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLine_width::intLine_width() {
}

intGl_pipeline_settings::intLine_width::~intLine_width() {
}

// IMPORT

void
intGl_pipeline_settings::intLine_width::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLine_width::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLine_width::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLine_width::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLine_width::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLine_width::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMaterial_ambient::intMaterial_ambient() {
}

intGl_pipeline_settings::intMaterial_ambient::~intMaterial_ambient() {
}

// IMPORT

void
intGl_pipeline_settings::intMaterial_ambient::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMaterial_ambient::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMaterial_ambient::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMaterial_ambient::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMaterial_ambient::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMaterial_ambient::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMaterial_diffuse::intMaterial_diffuse() {
}

intGl_pipeline_settings::intMaterial_diffuse::~intMaterial_diffuse() {
}

// IMPORT

void
intGl_pipeline_settings::intMaterial_diffuse::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMaterial_diffuse::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMaterial_diffuse::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMaterial_diffuse::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMaterial_diffuse::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMaterial_diffuse::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMaterial_emission::intMaterial_emission() {
}

intGl_pipeline_settings::intMaterial_emission::~intMaterial_emission() {
}

// IMPORT

void
intGl_pipeline_settings::intMaterial_emission::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMaterial_emission::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMaterial_emission::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMaterial_emission::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMaterial_emission::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMaterial_emission::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMaterial_shininess::intMaterial_shininess() {
}

intGl_pipeline_settings::intMaterial_shininess::~intMaterial_shininess() {
}

// IMPORT

void
intGl_pipeline_settings::intMaterial_shininess::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMaterial_shininess::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMaterial_shininess::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMaterial_shininess::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMaterial_shininess::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMaterial_shininess::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMaterial_specular::intMaterial_specular() {
}

intGl_pipeline_settings::intMaterial_specular::~intMaterial_specular() {
}

// IMPORT

void
intGl_pipeline_settings::intMaterial_specular::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMaterial_specular::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMaterial_specular::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMaterial_specular::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMaterial_specular::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMaterial_specular::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intModel_view_matrix::intModel_view_matrix() {
}

intGl_pipeline_settings::intModel_view_matrix::~intModel_view_matrix() {
}

// IMPORT

void
intGl_pipeline_settings::intModel_view_matrix::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intModel_view_matrix::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intModel_view_matrix::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intModel_view_matrix::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intModel_view_matrix::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intModel_view_matrix::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_distance_attenuation::intPoint_distance_attenuation() {
}

intGl_pipeline_settings::intPoint_distance_attenuation::~intPoint_distance_attenuation() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_distance_attenuation::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_distance_attenuation::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_distance_attenuation::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_distance_attenuation::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_distance_attenuation::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_distance_attenuation::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_fade_threshold_size::intPoint_fade_threshold_size() {
}

intGl_pipeline_settings::intPoint_fade_threshold_size::~intPoint_fade_threshold_size() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_fade_threshold_size::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_fade_threshold_size::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_fade_threshold_size::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_fade_threshold_size::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_fade_threshold_size::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_fade_threshold_size::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_size::intPoint_size() {
}

intGl_pipeline_settings::intPoint_size::~intPoint_size() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_size::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_size::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_size::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_size::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_size::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_size::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_size_min::intPoint_size_min() {
}

intGl_pipeline_settings::intPoint_size_min::~intPoint_size_min() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_size_min::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_size_min::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_size_min::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_size_min::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_size_min::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_size_min::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_size_max::intPoint_size_max() {
}

intGl_pipeline_settings::intPoint_size_max::~intPoint_size_max() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_size_max::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_size_max::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_size_max::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_size_max::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_size_max::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_size_max::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_offset::intPolygon_offset() {
}

intGl_pipeline_settings::intPolygon_offset::~intPolygon_offset() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_offset::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_offset::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_offset::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_offset::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_offset::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_offset::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intProjection_matrix::intProjection_matrix() {
}

intGl_pipeline_settings::intProjection_matrix::~intProjection_matrix() {
}

// IMPORT

void
intGl_pipeline_settings::intProjection_matrix::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intProjection_matrix::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intProjection_matrix::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intProjection_matrix::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intProjection_matrix::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intProjection_matrix::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intScissor::intScissor() {
}

intGl_pipeline_settings::intScissor::~intScissor() {
}

// IMPORT

void
intGl_pipeline_settings::intScissor::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intScissor::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intScissor::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intScissor::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intScissor::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intScissor::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_mask::intStencil_mask() {
}

intGl_pipeline_settings::intStencil_mask::~intStencil_mask() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_mask::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_mask::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_mask::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_mask::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_mask::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_mask::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intAlpha_test_enable::intAlpha_test_enable() {
}

intGl_pipeline_settings::intAlpha_test_enable::~intAlpha_test_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intAlpha_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intAlpha_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intAlpha_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intAlpha_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intAlpha_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intAlpha_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intAuto_normal_enable::intAuto_normal_enable() {
}

intGl_pipeline_settings::intAuto_normal_enable::~intAuto_normal_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intAuto_normal_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intAuto_normal_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intAuto_normal_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intAuto_normal_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intAuto_normal_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intAuto_normal_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intBlend_enable::intBlend_enable() {
}

intGl_pipeline_settings::intBlend_enable::~intBlend_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intBlend_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intBlend_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intBlend_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intBlend_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intBlend_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intBlend_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_logic_op_enable::intColor_logic_op_enable() {
}

intGl_pipeline_settings::intColor_logic_op_enable::~intColor_logic_op_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_logic_op_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_logic_op_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_logic_op_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_logic_op_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_logic_op_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_logic_op_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intColor_material_enable::intColor_material_enable() {
}

intGl_pipeline_settings::intColor_material_enable::~intColor_material_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intColor_material_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intColor_material_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intColor_material_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intColor_material_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intColor_material_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intColor_material_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intCull_face_enable::intCull_face_enable() {
}

intGl_pipeline_settings::intCull_face_enable::~intCull_face_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intCull_face_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intCull_face_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intCull_face_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intCull_face_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intCull_face_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intCull_face_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_bounds_enable::intDepth_bounds_enable() {
}

intGl_pipeline_settings::intDepth_bounds_enable::~intDepth_bounds_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_bounds_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_bounds_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_bounds_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_bounds_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_bounds_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_bounds_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_clamp_enable::intDepth_clamp_enable() {
}

intGl_pipeline_settings::intDepth_clamp_enable::~intDepth_clamp_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_clamp_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_clamp_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_clamp_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_clamp_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_clamp_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_clamp_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDepth_test_enable::intDepth_test_enable() {
}

intGl_pipeline_settings::intDepth_test_enable::~intDepth_test_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intDepth_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDepth_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDepth_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDepth_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDepth_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDepth_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intDither_enable::intDither_enable() {
}

intGl_pipeline_settings::intDither_enable::~intDither_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intDither_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intDither_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intDither_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intDither_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intDither_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intDither_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intFog_enable::intFog_enable() {
}

intGl_pipeline_settings::intFog_enable::~intFog_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intFog_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intFog_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intFog_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intFog_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intFog_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intFog_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_model_local_viewer_enable::intLight_model_local_viewer_enable() {
}

intGl_pipeline_settings::intLight_model_local_viewer_enable::~intLight_model_local_viewer_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_model_local_viewer_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLight_model_two_side_enable::intLight_model_two_side_enable() {
}

intGl_pipeline_settings::intLight_model_two_side_enable::~intLight_model_two_side_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLight_model_two_side_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLight_model_two_side_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLight_model_two_side_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLight_model_two_side_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLight_model_two_side_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLight_model_two_side_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLine_smooth_enable::intLine_smooth_enable() {
}

intGl_pipeline_settings::intLine_smooth_enable::~intLine_smooth_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLine_smooth_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLine_smooth_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLine_smooth_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLine_smooth_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLine_smooth_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLine_smooth_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLine_stipple_enable::intLine_stipple_enable() {
}

intGl_pipeline_settings::intLine_stipple_enable::~intLine_stipple_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLine_stipple_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLine_stipple_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLine_stipple_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLine_stipple_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLine_stipple_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLine_stipple_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intLogic_op_enable::intLogic_op_enable() {
}

intGl_pipeline_settings::intLogic_op_enable::~intLogic_op_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intLogic_op_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intLogic_op_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intLogic_op_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intLogic_op_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intLogic_op_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intLogic_op_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intMultisample_enable::intMultisample_enable() {
}

intGl_pipeline_settings::intMultisample_enable::~intMultisample_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intMultisample_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intMultisample_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intMultisample_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intMultisample_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intMultisample_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intMultisample_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intNormalize_enable::intNormalize_enable() {
}

intGl_pipeline_settings::intNormalize_enable::~intNormalize_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intNormalize_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intNormalize_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intNormalize_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intNormalize_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intNormalize_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intNormalize_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPoint_smooth_enable::intPoint_smooth_enable() {
}

intGl_pipeline_settings::intPoint_smooth_enable::~intPoint_smooth_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPoint_smooth_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPoint_smooth_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPoint_smooth_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPoint_smooth_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPoint_smooth_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPoint_smooth_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_offset_fill_enable::intPolygon_offset_fill_enable() {
}

intGl_pipeline_settings::intPolygon_offset_fill_enable::~intPolygon_offset_fill_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_fill_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_offset_line_enable::intPolygon_offset_line_enable() {
}

intGl_pipeline_settings::intPolygon_offset_line_enable::~intPolygon_offset_line_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_offset_line_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_offset_line_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_line_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_offset_line_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_offset_line_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_line_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_offset_point_enable::intPolygon_offset_point_enable() {
}

intGl_pipeline_settings::intPolygon_offset_point_enable::~intPolygon_offset_point_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_offset_point_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_offset_point_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_point_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_offset_point_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_offset_point_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_offset_point_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_smooth_enable::intPolygon_smooth_enable() {
}

intGl_pipeline_settings::intPolygon_smooth_enable::~intPolygon_smooth_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_smooth_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_smooth_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_smooth_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_smooth_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_smooth_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_smooth_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intPolygon_stipple_enable::intPolygon_stipple_enable() {
}

intGl_pipeline_settings::intPolygon_stipple_enable::~intPolygon_stipple_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intPolygon_stipple_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intPolygon_stipple_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intPolygon_stipple_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intPolygon_stipple_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intPolygon_stipple_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intPolygon_stipple_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intRescale_normal_enable::intRescale_normal_enable() {
}

intGl_pipeline_settings::intRescale_normal_enable::~intRescale_normal_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intRescale_normal_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intRescale_normal_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intRescale_normal_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intRescale_normal_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intRescale_normal_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intRescale_normal_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::intSample_alpha_to_coverage_enable() {
}

intGl_pipeline_settings::intSample_alpha_to_coverage_enable::~intSample_alpha_to_coverage_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intSample_alpha_to_coverage_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intSample_alpha_to_one_enable::intSample_alpha_to_one_enable() {
}

intGl_pipeline_settings::intSample_alpha_to_one_enable::~intSample_alpha_to_one_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intSample_alpha_to_one_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intSample_coverage_enable::intSample_coverage_enable() {
}

intGl_pipeline_settings::intSample_coverage_enable::~intSample_coverage_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intSample_coverage_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intSample_coverage_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intSample_coverage_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intSample_coverage_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intSample_coverage_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intSample_coverage_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intScissor_test_enable::intScissor_test_enable() {
}

intGl_pipeline_settings::intScissor_test_enable::~intScissor_test_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intScissor_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intScissor_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intScissor_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intScissor_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intScissor_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intScissor_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// CONSTRUCTOR AND DESTRUCTOR
intGl_pipeline_settings::intStencil_test_enable::intStencil_test_enable() {
}

intGl_pipeline_settings::intStencil_test_enable::~intStencil_test_enable() {
}

// IMPORT

void
intGl_pipeline_settings::intStencil_test_enable::createFrom(daeElementRef element)
{
	// INSERT CODE TO CREATE YOUR USER DATA HERE
	// _object = new myRuntimeClass;
}

void
intGl_pipeline_settings::intStencil_test_enable::fromCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->foo = element->foo;
	// local->bar = element->subelem[0]->bar;
}

void
intGl_pipeline_settings::intStencil_test_enable::fromCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}

// EXPORT

void
intGl_pipeline_settings::intStencil_test_enable::createTo(void* userData)
{
	// INSERT CODE TO CREATE COLLADA DOM OBJECTS HERE
	// _element = new domGeometry;
	// _object = userData;
}

void
intGl_pipeline_settings::intStencil_test_enable::toCOLLADA()
{
	// INSERT CODE TO TRANSLATE TO YOUR RUNTIME HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// element->foo = local->foo;
	// element->subelem[0]->bar = local->bar;
}

void
intGl_pipeline_settings::intStencil_test_enable::toCOLLADAPostProcess()
{
	// INSERT CODE TO POST PROCESS HERE
	// myRuntimeClassType* local = (myRuntimeClassType*)_object;
	// local->renderingContext = MYGLOBAL::getRenderingContext;
	// MYGLOBAL::registerInstance(local);
}


