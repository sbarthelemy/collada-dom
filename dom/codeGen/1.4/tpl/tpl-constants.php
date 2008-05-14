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
#ifndef __DOM_CONSTANTS_H__
#define __DOM_CONSTANTS_H__

#include <dae/daeDomTypes.h>

<?php
	foreach ($bag as $name => $val ) {
		if ( is_int($name) ) {
			print $val;
			continue;
		}
		print "extern DLLSPEC daeString ". $name .";\n";
	}
	print "\n";
	
	foreach ($_globals['elementTypes'] as $num => $val )
	{
		print "extern DLLSPEC daeString COLLADA_TYPE_". getUniqueName($val, $_globals['elementTypes']) .";\n";
	}
	print "\n";
	
	foreach ($_globals['elementNames'] as $num => $val )
	{
		print "extern DLLSPEC daeString COLLADA_ELEMENT_". getUniqueName($val, $_globals['elementNames']) .";\n";
	}
?>

#endif //__DOM_CONSTANTS_H__

