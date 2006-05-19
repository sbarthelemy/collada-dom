/*
 * Copyright 2006 Sony Computer Entertainment Inc.
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

 
#include <dom/domTypes.h>
#include <dae/daeDom.h>
#include <dom/domCOLLADA.h>


void registerDomTypes()
{

	daeAtomicType* type = NULL;
	// TYPEDEF: Bool	//check if this type has an existing base
	type = daeAtomicType::get("xsBoolean");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Bool");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Bool");
	}
	
	// TYPEDEF: DateTime	//check if this type has an existing base
	type = daeAtomicType::get("xsDateTime");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("DateTime");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("DateTime");
	}
	
	// TYPEDEF: Float	//check if this type has an existing base
	type = daeAtomicType::get("xsDouble");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float");
	}
	
	// TYPEDEF: Int	//check if this type has an existing base
	type = daeAtomicType::get("xsLong");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int");
	}
	
	// TYPEDEF: Name	//check if this type has an existing base
	type = daeAtomicType::get("xsName");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Name");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Name");
	}
	
	// TYPEDEF: String	//check if this type has an existing base
	type = daeAtomicType::get("xsString");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("String");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("String");
	}
	
	// TYPEDEF: Token	//check if this type has an existing base
	type = daeAtomicType::get("xsToken");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Token");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Token");
	}
	
	// TYPEDEF: ListOfBools	//check if this type has an existing base
	type = daeAtomicType::get("xsBoolean");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfBools");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfBools");
	}
	
	// TYPEDEF: ListOfFloats	//check if this type has an existing base
	type = daeAtomicType::get("xsDouble");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfFloats");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfFloats");
	}
	
	// TYPEDEF: ListOfHexBinary	//check if this type has an existing base
	type = daeAtomicType::get("xsHexBinary");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfHexBinary");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfHexBinary");
	}
	
	// TYPEDEF: ListOfInts	//check if this type has an existing base
	type = daeAtomicType::get("xsLong");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfInts");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfInts");
	}
	
	// TYPEDEF: ListOfNames	//check if this type has an existing base
	type = daeAtomicType::get("xsName");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfNames");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfNames");
	}
	
	// TYPEDEF: ListOfTokens	//check if this type has an existing base
	type = daeAtomicType::get("xsToken");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("ListOfTokens");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("ListOfTokens");
	}
	
	// TYPEDEF: Bool2	//check if this type has an existing base
	type = daeAtomicType::get("ListOfBools");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Bool2");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Bool2");
	}
	
	// TYPEDEF: Bool3	//check if this type has an existing base
	type = daeAtomicType::get("ListOfBools");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Bool3");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Bool3");
	}
	
	// TYPEDEF: Bool4	//check if this type has an existing base
	type = daeAtomicType::get("ListOfBools");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Bool4");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Bool4");
	}
	
	// TYPEDEF: Float2	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float2");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float2");
	}
	
	// TYPEDEF: Float3	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float3");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float3");
	}
	
	// TYPEDEF: Float4	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float4");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float4");
	}
	
	// TYPEDEF: Float7	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float7");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float7");
	}
	
	// TYPEDEF: Float2x2	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float2x2");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float2x2");
	}
	
	// TYPEDEF: Float3x3	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float3x3");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float3x3");
	}
	
	// TYPEDEF: Float4x4	//check if this type has an existing base
	type = daeAtomicType::get("ListOfFloats");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Float4x4");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Float4x4");
	}
	
	// TYPEDEF: Int2	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int2");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int2");
	}
	
	// TYPEDEF: Int3	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int3");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int3");
	}
	
	// TYPEDEF: Int4	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int4");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int4");
	}
	
	// TYPEDEF: Int2x2	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int2x2");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int2x2");
	}
	
	// TYPEDEF: Int3x3	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int3x3");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int3x3");
	}
	
	// TYPEDEF: Int4x4	//check if this type has an existing base
	type = daeAtomicType::get("ListOfInts");
	if ( type == NULL ) { //register as a raw type
		type = new daeRawRefType;
		type->_nameBindings.append("Int4x4");
		daeAtomicType::append( type );
	}
	else { //add binding to existing type
		type->_nameBindings.append("Int4x4");
	}
	
    // ENUM: ArrayTypes    
    type = new daeEnumType;
    type->_nameBindings.append("ArrayTypes");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("float");
	((daeEnumType*)type)->_values->append(ARRAYTYPES_float);    
	((daeEnumType*)type)->_strings->append("int");
	((daeEnumType*)type)->_values->append(ARRAYTYPES_int);    
	((daeEnumType*)type)->_strings->append("Name");
	((daeEnumType*)type)->_values->append(ARRAYTYPES_Name);    
	((daeEnumType*)type)->_strings->append("token");
	((daeEnumType*)type)->_values->append(ARRAYTYPES_token);    
	daeAtomicType::append( type );

    // ENUM: FlowType    
    type = new daeEnumType;
    type->_nameBindings.append("FlowType");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("IN");
	((daeEnumType*)type)->_values->append(FLOWTYPE_IN);    
	((daeEnumType*)type)->_strings->append("OUT");
	((daeEnumType*)type)->_values->append(FLOWTYPE_OUT);    
	((daeEnumType*)type)->_strings->append("INOUT");
	((daeEnumType*)type)->_values->append(FLOWTYPE_INOUT);    
	daeAtomicType::append( type );

    // ENUM: LibraryType    
    type = new daeEnumType;
    type->_nameBindings.append("LibraryType");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("ANIMATION");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_ANIMATION);    
	((daeEnumType*)type)->_strings->append("CAMERA");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_CAMERA);    
	((daeEnumType*)type)->_strings->append("CODE");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_CODE);    
	((daeEnumType*)type)->_strings->append("CONTROLLER");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_CONTROLLER);    
	((daeEnumType*)type)->_strings->append("GEOMETRY");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_GEOMETRY);    
	((daeEnumType*)type)->_strings->append("IMAGE");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_IMAGE);    
	((daeEnumType*)type)->_strings->append("LIGHT");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_LIGHT);    
	((daeEnumType*)type)->_strings->append("MATERIAL");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_MATERIAL);    
	((daeEnumType*)type)->_strings->append("PROGRAM");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_PROGRAM);    
	((daeEnumType*)type)->_strings->append("TEXTURE");
	((daeEnumType*)type)->_values->append(LIBRARYTYPE_TEXTURE);    
	daeAtomicType::append( type );

    // ENUM: LightType    
    type = new daeEnumType;
    type->_nameBindings.append("LightType");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("AMBIENT");
	((daeEnumType*)type)->_values->append(LIGHTTYPE_AMBIENT);    
	((daeEnumType*)type)->_strings->append("DIRECTIONAL");
	((daeEnumType*)type)->_values->append(LIGHTTYPE_DIRECTIONAL);    
	((daeEnumType*)type)->_strings->append("POINT");
	((daeEnumType*)type)->_values->append(LIGHTTYPE_POINT);    
	((daeEnumType*)type)->_strings->append("SPOT");
	((daeEnumType*)type)->_values->append(LIGHTTYPE_SPOT);    
	daeAtomicType::append( type );

    // ENUM: NodeType    
    type = new daeEnumType;
    type->_nameBindings.append("NodeType");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("JOINT");
	((daeEnumType*)type)->_values->append(NODETYPE_JOINT);    
	((daeEnumType*)type)->_strings->append("NODE");
	((daeEnumType*)type)->_values->append(NODETYPE_NODE);    
	daeAtomicType::append( type );

    // ENUM: UpAxisType    
    type = new daeEnumType;
    type->_nameBindings.append("UpAxisType");
    ((daeEnumType*)type)->_strings = new daeStringRefArray;
    ((daeEnumType*)type)->_values = new daeEnumArray;
	((daeEnumType*)type)->_strings->append("X_UP");
	((daeEnumType*)type)->_values->append(UPAXISTYPE_X_UP);    
	((daeEnumType*)type)->_strings->append("Y_UP");
	((daeEnumType*)type)->_values->append(UPAXISTYPE_Y_UP);    
	((daeEnumType*)type)->_strings->append("Z_UP");
	((daeEnumType*)type)->_values->append(UPAXISTYPE_Z_UP);    
	daeAtomicType::append( type );

}

daeMetaElement* registerDomElements()
{
	daeMetaElement* meta = domCOLLADA::registerElement();
	// Enable tracking of top level object by default
	domCOLLADA::_Meta->setIsTrackableForQueries(true);
	return meta;	
}
