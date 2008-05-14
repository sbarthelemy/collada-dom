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

  $_context = $bag['context'];
  for( $i=0; $i<count( $_context ); $i++ )
  {
    $_context[$i] = $_globals['prefix'] . ucfirst( $_context[$i] );//. "_element";
  }
?>
<?php
//}
  $keys = array_keys( $bag['inline_elements'] );
  if ( count( $keys ) > 0 )
  {
    foreach( $keys as $k )
    {
      $inner = $bag['inline_elements'][ $k ];
	  if ( !$inner['complex_type'] || $inner['isRestriction'] || $inner['isExtension'] ) {
		print applyTemplate( 'CPP_STATIC', $inner );
	  }
    }
  }
?>