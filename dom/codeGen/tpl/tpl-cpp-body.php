<?php
/*
 * Copyright 2007 Sony Computer Entertainment Inc.
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

if ( $_globals['copyright'] ) {
print $_globals['copyright_text'];
}
?>
#include <dae.h>
#include <<?= $_globals['meta_prefix'] ?>/daeDom.h>
#include <<?= $_globals['prefix'] ?>/<?= $_globals['prefix'] . ucfirst( $bag['element_name'] ) . ".h" ?>>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaCMPolicy.h>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaSequence.h>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaChoice.h>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaGroup.h>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaAny.h>
#include <<?= $_globals['meta_prefix'] ?>/daeMetaElementAttribute.h>

<?= applyTemplate( 'CPP_METHODS', $bag ) ?>
<?= applyTemplate( 'CPP_STATIC', $bag ) ?>