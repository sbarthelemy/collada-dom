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

class xsSequence extends _elementSet
{
  function xsSequence()
  {
    $this->_addElement( 'xsElement', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsAttribute', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsChoice', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsSequence', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsGroup', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsAny', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    $this->_addElement( 'xsAnnotation', array( 'minOccurs' => '0', 'maxOccurs' => 'unbounded' ) );
    
    $this->type[] = "xsSequence";
    parent::_elementSet();
  }

  function addSequenceElement( & $e )
  {
    $this->addElement( $e );
  }  
}

?>