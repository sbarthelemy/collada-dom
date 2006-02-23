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
// A vertex in a COLLADA primitive can have a seperate index for each input
// This class will store the group of indices that make up a vertex and provides
// copy and compare operations so the class can be used as a key with STL classes
// Written by Greg Corson
//
#include "packedVertexIndex.h"

packedVertexIndex::packedVertexIndex()
{
	references = 0;
	new_index_number = 0;
	index_count = 0;
}
packedVertexIndex::packedVertexIndex(int size)
{
	// Create the memory for storing the indices
	references = 0;
	new_index_number = 0;
	index_count = size;
	indices = new int[size];
}
packedVertexIndex::packedVertexIndex(const packedVertexIndex& rhs)
{
	references = 0;
	new_index_number = 0;
	indices = new int[rhs.index_count];
	memcpy(indices, rhs.indices, sizeof(int)*rhs.index_count);
	index_count = rhs.index_count;
}
packedVertexIndex& packedVertexIndex::operator=(const packedVertexIndex &rhs)
{
	if(this != &rhs)
	{
		if(index_count != rhs.index_count)
		{
			delete indices;
			indices = new int[rhs.index_count];
		}
		memcpy(indices, rhs.indices, sizeof(int)*rhs.index_count);
		references = rhs.references;
		new_index_number = rhs.new_index_number;
		index_count = rhs.index_count;
	}
	return *this;
}

packedVertexIndex::~packedVertexIndex()
{
	// free the memory containing indices
	delete indices;
	// Error marker
	indices = (int*)0x00badadd;
}
