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

global $indent;
// Add doxygen formatted comments

print $indent ."/**\n";

//$_local_doc = $bag['documentation'][ $_globals['language'] ];
$_local_doc = str_replace( "\n", " ", $bag );
$_local_doc = str_replace( "\t", "", $_local_doc );
while( strlen( $_local_doc ) > 0 )
{
  if ( preg_match( "/(.{0,70}[^\s]*)(\s*)/", $_local_doc, $matches ) )
  {
    // Print blocks of 70 chars thru the next word
    print $indent ." * " . $matches[1] . "\n";
    
    // Account for any newlines
    /*$n_newlines = preg_match_all( "/\n/", $matches[2], $buf );
    if ( $n_newlines > 0 )
    {
      for( $i=0; $i<$n_newlines; $i++ ) { print " * \n"; }
    }*/
        
    // Find more lines...
    $_local_doc = substr( $_local_doc, strlen( $matches[0] ) );
  }
}

print $indent ." */\n";
?>