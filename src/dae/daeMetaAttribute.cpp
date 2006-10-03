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

#include <dae/daeMetaAttribute.h>
#include <dae/daeMetaElement.h>
#include <dae/daeErrorHandler.h>

void
daeMetaAttribute::set(daeElement* e, daeString s)
{
	_type->stringToMemory((char*)s, getWritableMemory(e));
}

void daeMetaAttribute::copy(daeElement* to, daeElement *from) {
	daeChar str[4096];
	_type->memoryToString( getWritableMemory(from), str, 2048 );
	_type->stringToMemory( str, getWritableMemory( to ) );
	//memcpy( getWritableMemory( to ), getWritableMemory( from ), getSize() );
}

void
daeMetaArrayAttribute::set(daeElement* e, daeString s)
{
	daeArray* array = (daeArray*)getWritableMemory(e);
	daeInt typeSize = _type->getSize();
	daeInt cnt = (daeInt)array->getCount();
	array->setRawCount(++cnt);
	_type->stringToMemory((char*)s, array->getRawData()+(cnt-1)*typeSize);
}

void daeMetaArrayAttribute::copy(daeElement* to, daeElement *from) {
	daeArray* toArray = (daeArray*)getWritableMemory(to);
	daeArray* fromArray = (daeArray*)getWritableMemory(from);
	daeInt typeSize = _type->getSize();
	daeInt cnt = (daeInt)fromArray->getCount();
	toArray->setRawCount( cnt );
	//memcpy( toArray->getRawData(), fromArray->getRawData(), cnt * typeSize );
	daeChar *toData = toArray->getRawData();
	daeChar *fromData = fromArray->getRawData();
	daeChar str[4096];
	for ( int i = 0; i < cnt; i++ ) {
		_type->memoryToString( fromData+i*typeSize, str, 2048 );
		_type->stringToMemory( str, toData+i*typeSize );
	}
}

daeMetaAttribute::daeMetaAttribute()
{
	_name = "noname";
	_offset = -1;
	_type = NULL;
	_container = NULL;
	_default = NULL;
	_isRequired = false;
}

void
daeMetaAttribute::resolve(daeElementRef element)
{
	if (_type != NULL)
		_type->resolve(element, getWritableMemory(element) );
}

void
daeMetaArrayAttribute::resolve(daeElementRef element)
{
	daeArray* era = (daeArray*)getWritableMemory(element);
	size_t cnt = era->getCount();
	for ( size_t i = 0; i < cnt; i++ )
	{
		_type->resolve( element, era->getRawData()+(i*era->getElementSize()) );
	}
}

daeInt
daeMetaAttribute::getSize()
{
	return _type->getSize();
}
daeInt
daeMetaAttribute::getAlignment()
{
	return _type->getAlignment();
}

daeInt
daeMetaAttribute::getCount(daeElement* e)
{
	if (e == NULL)
		return 0;
	return (getWritableMemory(e) != NULL);
}

daeMemoryRef
daeMetaAttribute::get(daeElement *e, daeInt index)
{
	(void)index; 
	return getWritableMemory(e);
}

daeInt
daeMetaArrayAttribute::getCount(daeElement *e)
{
	if (e == NULL)
		return 0;
	daeArray* era = (daeArray*)getWritableMemory(e);
	if (era == NULL)
		return 0;
	return (daeInt)era->getCount();
}

daeMemoryRef
daeMetaArrayAttribute::get(daeElement* e, daeInt index)
{
	if (e == NULL)
		return NULL;
	daeArray* era = (daeArray*)getWritableMemory(e);
	if (era == NULL || index >= (daeInt)era->getCount() )
		return NULL;
	return era->getRawData()+(index*era->getElementSize());
}

