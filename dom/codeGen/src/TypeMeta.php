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

class TypeMeta
{
  var $bag;
  
  function TypeMeta()
  {
    $bag = array(
      'type' => '',
      'base' => '',
      'listType' => '',
      'enum' => array(),
      'enum_documentation' => array(),
      'restrictions' => array(),
      'isExtension' => true,
      'isComplex' => false,
      'useConstStrings' =>false,
      'documentation' => array(),
      'isArray' => false,
      'enum_value' => array(),
      'union_type' => false,
      'union_members' => ''
    );
    $this->bag = & $bag;
  }
  
  function & getMeta()
  {
    return $this->bag;
  }
  
  function setType( $t )
  {
    $this->bag['type'] = $t;
  }
  
  function setBase( $b )
  {
    $this->bag['base'] = $b;
  }
  
  function setListType( $type )
  {
    $this->bag['listType'] = $type;
  }
  
  function setIsExtension( $bool )
  {
    $this->bag['isExtension'] = $bool;
  }
  
  function setIsComplex( $bool ) {
	$this->bag['isComplex'] = $bool;
  }
  
  function setRestriction( $name, $val )
  {
    $this->bag['restrictions'][$name] = $val;
  }
  
  function addEnum( $val )
  {
    $this->bag['enum'][] = $val;
  }
  
  function setAppInfo( $ap ) {
	if (!strcmp( trim($ap), 'constant-strings' ) ) {
		//use the xmlns attribute
		$this->bag['useConstStrings'] = true;
	}
  }
  
  function setDocumentation( $doc )
  {
    $this->doc = $doc;
    $this->bag['documentation']['en'] = trim( $doc );
  }
  
  function addEnumDoc( $i, $doc ) {
	$this->bag['enum_documentation'][$i] = trim($doc);
  }
  
  function addEnumAppInfo( $i, $ai ) {
    $ai = trim($ai);
    //print "found app info\n";
    if ( strncmp($ai, "value=", 6) == 0 ) {
		//print "its in the correct format\n";
		$val = substr($ai, 6);
		//print "value is ". $val ."\n";
		$this->bag['enum_value'][$i] = trim($val);
    }
  } 
  
  function setUnionMembers( $um ) {
	$this->bag['union_type'] = true;
	$this->bag['union_members'] = $um;
  } 
}

?>