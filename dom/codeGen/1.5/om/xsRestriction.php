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

class xsRestriction extends _elementSet
{
  function xsRestriction()
  {
    $this->_addElement( 'xsAttribute', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMinLength', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMaxLength', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMinInclusive', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMaxInclusive', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMinExclusive', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsMaxExclusive', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsEnumeration', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsWhiteSpace', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsPattern', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );

    $this->_addAttribute( 'base', array( 'type' => 'xs:string' ) );

    $this->type[] = 'xsRestriction';
    parent::_elementSet();
  }
}

?>