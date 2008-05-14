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

class xsAttribute extends _elementSet
{
  function xsAttribute()
  {
    $this->_addAttribute( 'name', array( 'type' => 'xs:string' ) );
    $this->_addAttribute( 'type', array( 'type' => 'xs:string' ) );
    $this->_addAttribute( 'use', array( 'type' => 'xs:string' ) );
    $this->_addAttribute( 'default', array( 'type' => 'xs:string' ) );
    $this->_addAttribute( 'ref', array( 'type' => 'xs:string' ) );
    
    $this->_addElement( 'xsAnnotation', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );

    $this->type[] = 'xsAttribute';
    parent::_typedData();
  }
}

?>