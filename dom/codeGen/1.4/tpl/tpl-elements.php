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
#ifndef __DOM_ELEMENTS_H__
#define __DOM_ELEMENTS_H__

#include <<?= $_globals['prefix'] ?>/<?= $_globals['prefix'] ?>Types.h>

<?php
//Base elements
foreach( $bag as $name => $meta ) {
	$full_element_name = $_globals['prefix'] . ucfirst( $name );
	print "class " . $full_element_name . ";\n\n";
	print "typedef daeSmartRef<". $full_element_name ."> ". $full_element_name ."Ref;\n";
	print "typedef daeTArray<". $full_element_name ."Ref> ". $full_element_name ."_Array;\n\n";
}

?>

#endif //__DOM_ELEMENTS_H__

