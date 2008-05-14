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

class xsList extends _typedData
{
  var $minLength;
  var $maxLength;
  
  function xsList()
  {
    global $MAX_ARRAY_LENGTH;

    $this->minLength = 0;
    $this->maxLength = $MAX_ARRAY_LENGTH;
    
    $this->_addAttribute( 'itemType', array( 'type' => 'xs:string' ) );
    $this->setAttribute( 'itemType', 'TypedData' );

    $this->type[] = 'xsList';
    parent::_typedData();
  }
  
  // To save the heavyweight object-per-data-point approach, allow a list type
  // to parse the buffer into a single array
  function set( & $buffer )
  {
    eval( '$type = new ' . $this->getAttribute( 'itemType' ) . '();' );
    $this->data = & $type->parse( $buffer );

/*    for( $i=0; trim( $buffer ) != "" && $i<$this->maxLength; $i++ )
    {
      eval( '$this->data[ $i ] = new ' . $this->getAttribute( 'itemType' ) . '();' );
      $this->data[ $i ]->set( $buffer );
    }*/
  }

  function getCount()
  {
    return count( $this->data );
  }
}

?>