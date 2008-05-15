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

  // INCLUDES

$inc = array();
global $meta;
global $includeList;
for( $i=0; $i<count( $bag['ref_elements'] ); $i++ )
{
	if ( !in_array( $_globals['prefix'] . ucfirst( $bag['ref_elements'][$i] ), $includeList ) ) {
		$inc[] = "#include <" . $_globals['prefix'] . "/" . $_globals['prefix'] . ucfirst( $bag['ref_elements'][$i] ) . ".h>"; 
		$includeList[] = $_globals['prefix'] . ucfirst( $bag['ref_elements'][$i] );
	}
}

if($meta[$bag['content_type']]['isAComplexType']) {
	if ( !in_array( $_globals['prefix'] . ucfirst( $bag['content_type'] ), $includeList ) ) {
		$inc[] = "#include <" . $_globals['prefix'] . "/" . $_globals['prefix'] . ucfirst( $bag['content_type'] ) . ".h>"; 
		$includeList[] = $_globals['prefix'] . ucfirst( $bag['content_type'] );
	}
}
		
if ( count( $inc ) ) { //only print if you have to include something
	print implode( "\n", $inc ) . "\n";
}
  
$keys = array_keys( $bag['inline_elements'] );
if ( count( $keys ) > 0 )
{
	foreach( $keys as $k )
	{
		print applyTemplate( 'INCLUDES', $bag['inline_elements'][ $k ] );
	}
}
?>