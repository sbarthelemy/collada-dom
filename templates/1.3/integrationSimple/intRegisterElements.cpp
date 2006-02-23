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

#include "intIncludes.h"

void
registerElements()
{
  intCOLLADA::registerElement();
  intAccessor::registerElement();
  intArray::registerElement();
  intFloat_array::registerElement();
  intInt_array::registerElement();
  intName_array::registerElement();
  intBool_array::registerElement();
  intInput::registerElement();
  intParam::registerElement();
  intSource::registerElement();
  intMesh::registerElement();
  intCombiner::registerElement();
  intJoints::registerElement();
  intLines::registerElement();
  intLinestrips::registerElement();
  intPolygons::registerElement();
  intTriangles::registerElement();
  intTrifans::registerElement();
  intTristrips::registerElement();
  intVertices::registerElement();
  intLookat::registerElement();
  intMatrix::registerElement();
  intPerspective::registerElement();
  intRotate::registerElement();
  intScale::registerElement();
  intSkew::registerElement();
  intTranslate::registerElement();
  intImage::registerElement();
  intLight::registerElement();
  intMaterial::registerElement();
  intPass::registerElement();
  intShader::registerElement();
  intTexture::registerElement();
  intCode::registerElement();
  intEntry::registerElement();
  intProgram::registerElement();
  intCamera::registerElement();
  intInstance::registerElement();
  intChannel::registerElement();
  intSampler::registerElement();
  intSkin::registerElement();
  intAsset::registerElement();
  intExtra::registerElement();
  intBoundingbox::registerElement();
  intNode::registerElement();
  intScene::registerElement();
  intAnimation::registerElement();
  intController::registerElement();
  intGeometry::registerElement();
  intLibrary::registerElement();
}
