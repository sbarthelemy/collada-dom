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

class xsAny extends _typedData
{
  function xsAny()
  {
    $this->_addAttribute( 'namespace', array( 'type' => 'xs:anyURI' ) );
    $this->_addAttribute( 'processContents', array( 'type' => 'xs:string' ) );

	$this->_addAttribute( 'minOccurs', array( 'type' => 'xs:integer' ) );
    $this->setAttribute( 'minOccurs', '1' );
    $this->_addAttribute( 'maxOccurs', array( 'type' => 'xs:integer' ) );
    $this->setAttribute( 'maxOccurs', '1' );
    
    $this->type[] = 'xsAny';
    parent::_typedData();
  }
}

?>