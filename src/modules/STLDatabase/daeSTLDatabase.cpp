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

#include <modules/daeSTLDatabase.h>
#include <dae/daeMetaElement.h>

daeSTLDatabase::daeSTLDatabase():validated(true)
{}

daeSTLDatabase::~daeSTLDatabase()
{
	clear();
}

daeInt daeSTLDatabase::setMeta(daeMetaElement *_topMeta)
{
	topMeta = _topMeta;
	return DAE_OK;
}

daeBool
daeSTLDatabase::isCollectionLoaded(daeString name)
{
	daeCollection* collection = getCollection(name);
	if(collection)
		return(true);
	else
		return(false);
}

// Element Types of all Elements
daeUInt daeSTLDatabase::getTypeCount()
{
	validate();
	std::vector<DAE_STL_DATABASE_CELL>::iterator it = elements.begin();
	daeUInt count = 0;
	while (it != elements.end())
	{
		DAE_STL_DATABASE_CELL &tmp = (*it);
		std::vector<DAE_STL_DATABASE_CELL>::iterator it_up = std::upper_bound(it,elements.end(),tmp,daeSTLDatabaseTypeLess());
		it = it_up;
		count++;
	}
	return count;
}


daeString daeSTLDatabase::getTypeName(daeUInt index)
{
	validate();
	std::vector<DAE_STL_DATABASE_CELL>::iterator it = elements.begin();
	unsigned int count = 0;
	while (it != elements.end() && count<index)
	{
		DAE_STL_DATABASE_CELL &tmp = (*it);
		std::vector<DAE_STL_DATABASE_CELL>::iterator it_up = std::upper_bound(it,elements.end(),tmp,daeSTLDatabaseTypeLess());
		it = it_up;
		count++;
	}
	if (it != elements.end())
		return (*it).type;
	else
		return NULL;
}

// Collections
daeInt daeSTLDatabase::insertCollection(const char *name, daeElement* dom, daeCollection** collection)
{
	return createCollection( name, dom, collection );
}
daeInt daeSTLDatabase::createCollection(const char *name, daeElement* dom, daeCollection** collection)
{
	// If a collection already exists with the same name, error
	if(isCollectionLoaded(name))
	{
		if (collection)
			*collection = NULL;
		return DAE_ERR_COLLECTION_ALREADY_EXISTS;
	}
	
	// Make a new collection
	daeCollection *newCollection = new daeCollection;
	// Create a Reference on the domCOLLADA passed into us
	newCollection->setDomRoot(dom);
	// Set the domCollada's collection to this one
	dom->setCollection(newCollection);
	// Set and resolve the document URI
	newCollection->getDocumentURI()->setURI(name);
	newCollection->getDocumentURI()->validate();
	
	newCollection->setModified(true);
	// Push the connection into the database
	collections.push_back(newCollection);
	
	if (collection)
		*collection = newCollection;
	
	return DAE_OK;
}
// !!!GAC revised version of insertCollection, creates a domCollada and fills it in for you.
daeInt daeSTLDatabase::insertCollection(const char *name, daeCollection** collection)
{
	return createCollection( name, collection );
}
daeInt daeSTLDatabase::createCollection(const char *name, daeCollection** collection)
{

	// If a collection already exists with the same name, error
	if(isCollectionLoaded(name))
	{
		if (collection)
			*collection = NULL;
		return DAE_ERR_COLLECTION_ALREADY_EXISTS;
	}
	// Make the new collection
	daeCollection *newCollection = new daeCollection;
	// Make a domCOLLADA to be the root of this new collection (this makes a reference so the domCOLLADA won't delete itself
	daeElementRef myCOLLADA = topMeta->create();
	// Set the domCollada's collection to this one
	myCOLLADA->setCollection(newCollection);
	newCollection->setDomRoot(myCOLLADA);
	// Set and resolve the document URI
	newCollection->getDocumentURI()->setURI(name);
	newCollection->getDocumentURI()->validate();

	newCollection->setModified(true);
	// Add this collection to the list.
	collections.push_back(newCollection);
	// If the user gave us a place to put the collection, send it back to them.
	if (collection)
		*collection = newCollection;
	
	return DAE_OK;
}

daeInt daeSTLDatabase::insertCollection( daeCollection *c ) {
	collections.push_back(c);
	insertElement( c, c->getDomRoot() );
	return DAE_OK;
}

daeInt daeSTLDatabase::removeCollection(daeCollection *collection)
{
	//remove all elements that are in this collection
	std::vector<DAE_STL_DATABASE_CELL>::iterator iter = elements.begin();
	while ( iter != elements.end() ) {
		if ( (*iter).collection == collection ) {
			iter = elements.erase(iter);
		}
		else {
			iter++;
		}
	}
	//remove the collection from its vector
	std::vector<daeCollection*>::iterator iter2 = collections.begin();
	while ( iter2 != collections.end() ) {
		if ( (*iter2) == collection ) {
			iter2 = collections.erase(iter2);
		}
		else {
            iter2++;
		}
	}
	return DAE_OK;
}

daeUInt daeSTLDatabase::getCollectionCount()
{
	return (daeUInt)collections.size();
}

daeCollection* daeSTLDatabase::getCollection(daeUInt index)
{
	if (index<collections.size())
		return (collections[index]);
	else
		return NULL;
}

daeCollection* daeSTLDatabase::getCollection(daeString name)
{
	// Normalize the input string to an absolute URI with no fragment

	daeURI tempURI(name, true);
	daeString targetURI = tempURI.getURI();

	// Try to find a collection that matches

	daeCollection *collection;
	int collectionCount	= getCollectionCount();
	for (int i=0;i<collectionCount;i++)
	{
		collection = getCollection(i);
		if(strcmp(collection->getDocumentURI()->getURI(), targetURI)==0)
			return(collection);
	}
	return(NULL);
}

daeString daeSTLDatabase::getCollectionName(daeUInt index)
{
	if (index<collections.size())
		return getCollection(index)->getDocumentURI()->getURI();
	else
		return NULL;
}

// Elements
daeInt daeSTLDatabase::insertElement(daeCollection* collection,daeElement* element)
{
	insertChildren( collection, element );

	if ((element->getMeta() != NULL) &&
		(!element->getMeta()->getIsTrackableForQueries()))
		return DAE_OK;
	
	DAE_STL_DATABASE_CELL tmp;
	validated = false;
	tmp.collection = collection;
	tmp.name = element->getID();
	if (tmp.name == NULL)
		tmp.name = ""; //static string in the executable
	tmp.type = element->getTypeName();
	tmp.element = element;
	elements.push_back(tmp);
	return DAE_OK;
}

daeInt daeSTLDatabase::insertChildren( daeCollection *c, daeElement *element )
{
	daeElementRefArray era;
	element->getChildren( era );
	for ( unsigned int i = 0; i < era.getCount(); i++ ) {
		insertElement( c, era[i] );	
	}
	return DAE_OK;
}

daeInt daeSTLDatabase::removeElement(daeCollection* collection,daeElement* element)
{
	if ( !element ) {
		return DAE_ERR_INVALID_CALL;
	}
	removeChildren( collection, element );
	std::vector<DAE_STL_DATABASE_CELL>::iterator iter = elements.begin();
	while ( iter != elements.end() ) {
		if ( (*iter).element == element ) {
			iter = elements.erase(iter);
		}
		else {
			iter++;
		}
	} 
	validated = false;
	return DAE_OK;
}

daeInt daeSTLDatabase::removeChildren( daeCollection *c, daeElement *element )
{
	daeElementRefArray era;
	element->getChildren( era );
	for ( unsigned int i = 0; i < era.getCount(); i++ ) {
		removeElement( c, era[i] );	
	}
	return DAE_OK;
}


daeInt daeSTLDatabase::clear()
{
	elements.clear();
	int i;
	for (i=0;i<(int)collections.size();i++)
		delete collections[i];
	collections.clear(); //this will free the daeElement
	return DAE_OK;
}

daeUInt daeSTLDatabase::getElementCount(daeString name,daeString type,daeString file)
{	
	// This sorts the vector if necessary
	validate(); 
	
	// If none of the search keys was specified, return the total element count in the database

	if ( !name && !type && !file ) 
	{
		return (daeUInt)elements.size();
	}

	std::pair< std::vector<DAE_STL_DATABASE_CELL>::iterator, std::vector<DAE_STL_DATABASE_CELL>::iterator> range;
	int sz = 0;
	// The database is sorted by type so if type was one of the keys, find the range of items with that type
	if ( type )	
	{ 
		// if a type was specified, range = elements of that type
		DAE_STL_DATABASE_CELL a;
		a.type = type;
		a.name = NULL;
		a.collection = NULL;
		range = std::equal_range(elements.begin(),elements.end(),a,daeSTLDatabaseTypeLess());
		sz = (int)(range.second - range.first);
	}
	else 
	{ 
		//no type specified, range = all elements
		range.first = elements.begin();
		range.second = elements.end();
		sz = (int)elements.size();
	}
	
	if ( name ) 
	{ 
		// name specified
		int count = 0;
		if ( file ) 
		{ 
			// If a collection URI was a search key (in file) resolve it to a text URI with no fragment
			daeURI tempURI(file,true);
			daeString collectionURI = tempURI.getURI();
			// a collection was specified
			//for ( int i = 0; i < sz; i++ ) 
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			{
				DAE_STL_DATABASE_CELL e = *(i);
				/*bool eqid = false;
				if ( e.element->getID() ) 
				{ 
					//if the element has an id attribute
					eqid = !strcmp(name, e.element->getID() );
				}*/
				if ( /*eqid ||*/ (!strcmp(name, e.name) ) && !strcmp( collectionURI, e.collection->getDocumentURI()->getURI()) ) 
				{
					count++;
				}
				i++;
			}
			return count;
		}
		else 
		{ 
			//no file specified
			//for ( int i = 0; i < sz; i++ ) 
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			{
				DAE_STL_DATABASE_CELL e = *(i);
				/*bool eqid = false;
				if ( e.element->getID() ) 
				{ 
					//if the element has an id attribute
					eqid = !strcmp(name, e.element->getID() );
				}*/
				if ( /*eqid ||*/ !strcmp( name, e.name ) ) {
					count++;
				}
				i++;
			}
			return count;
		}
	}
	else 
	{ 
		//no name specified
		if ( file ) 
		{ 
			// If a collection URI was a search key (in file) resolve it to a text URI with no fragment
			daeURI tempURI(file,true);
			daeString collectionURI = tempURI.getURI();
			//a collection was specified
			int count = 0;
			//for( int i = 0; i < sz; i++ ) 
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			{
				DAE_STL_DATABASE_CELL e = *(i);
				if( !strcmp( collectionURI, e.collection->getDocumentURI()->getURI() ) ) 
				{
					count++;
				}
				i++;
			}
			return count;
		}
	}
	//if you get to this point only a type was specified
	return sz;
}

daeInt daeSTLDatabase::getElement(daeElement** pElement,daeInt index,daeString name,daeString type,daeString file)
{	
	// this sorts the vector if necessary
	validate(); 
	
	// If the index is out of range, there can be no match
	if ( index < 0 || index >= (int)elements.size() ) 
	{
		return DAE_ERR_QUERY_NO_MATCH;
	}

	// If no name, type or file was specified we return the element at "index"
	if ( !name && !type && !file ) 
	{
		*pElement = elements[index].element;
		return DAE_OK;
	}

	std::pair< std::vector<DAE_STL_DATABASE_CELL>::iterator, std::vector<DAE_STL_DATABASE_CELL>::iterator> range;
	int sz = 0;
	if ( type )	
	{ 
		//a type was specified, range = elements of that type
		DAE_STL_DATABASE_CELL a;
		a.type = type;
		a.name = NULL;
		a.collection = NULL;
		range = std::equal_range(elements.begin(),elements.end(),a,daeSTLDatabaseTypeLess());
		sz = (int)(range.second - range.first);
		if ( index >= sz ) 
		{
			return DAE_ERR_QUERY_NO_MATCH;
		}
	}
	else 
	{ 
		//no type specified, range = all elements
		range.first = elements.begin();
		range.second = elements.end();
		sz = (int)elements.size();
	}

	if ( name ) 
	{ 
		//name specified
		int count = 0;
		if ( file ) 
		{ 
			// If a collection URI was a search key (in file) resolve it to a text URI with no fragment
			daeURI tempURI(file,true);
			daeString collectionURI = tempURI.getURI();
			//a collection was specified
			//for ( int i = 0; i < sz; i++ ) 
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			{
				DAE_STL_DATABASE_CELL e = *i;
				/*bool eqid = false;
				if ( e.element->getID() ) 
				{ //if the element has an id attribute
					eqid = !strcmp(name, e.element->getID() );
				}*/
				if (( /*eqid ||*/ !strcmp(name, e.name) ) && !strcmp( collectionURI, e.collection->getDocumentURI()->getURI() ) ) 
				{
					if ( count == index )
					{
						*pElement = e.element;
						return DAE_OK;
					}
					count++;
				}
				i++;
			}
			return DAE_ERR_QUERY_NO_MATCH;
		}
		else 
		{ 
			//no collection specified
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			//for ( int i = 0; i < sz; i++ ) 
			{
				DAE_STL_DATABASE_CELL e = *(i);
				/*bool eqid = false;
				if ( e.element->getID() ) 
				{ 
					//if the element has an id attribute
					eqid = !strcmp(name, e.element->getID() );
				}*/
				if ( /*eqid ||*/ !strcmp( name, e.name ) ) 
				{
					if ( count == index ) 
					{
						*pElement = e.element;
						return DAE_OK;
					}
					count++;
				}
				i++;
			}
			return DAE_ERR_QUERY_NO_MATCH;
		}
	}
	else 
	{ 
		//no name specified
		if ( file ) 
		{ 
			// If a collection URI was a search key (in file) resolve it to a text URI with no fragment
			daeURI tempURI(file,true);
			daeString collectionURI = tempURI.getURI();
			//a collection was specified
			int count = 0;
			//for( int i = 0; i < sz; i++ ) 
			std::vector< DAE_STL_DATABASE_CELL >::iterator i = range.first;
			while ( i != range.second )
			{
				DAE_STL_DATABASE_CELL e = *(i);
				if( !strcmp( collectionURI, e.collection->getDocumentURI()->getURI() ) ) 
				{
					if( count == index ) 
					{
						*pElement = e.element;
						return DAE_OK;
					}
					count++;
				}
				i++;
			}
			return DAE_ERR_QUERY_NO_MATCH;
		}
	}
	//if you get to this point only a type was specified
	*pElement = (*(range.first+index)).element;
	return DAE_OK;
}

// Generic Query
daeInt daeSTLDatabase::queryElement(daeElement** pElement, daeString genericQuery)
{
	(void)pElement; 
	(void)genericQuery; 
	return DAE_ERR_NOT_IMPLEMENTED;
}

void daeSTLDatabase::validate()
{
	for( unsigned int i = 0; i < collections.size(); i++ ) {
		if (collections[i]->getModified() ) {
			daeCollection *tmp = collections[i];
			removeCollection( tmp );
			insertCollection( tmp );
			tmp->setModified(false);
			validated = false;
		}
	}
	if (!validated)
	{
		//sort the array by type then by name
		std::sort(elements.begin(),elements.end(),daeSTLDatabaseLess());
		validated = true;
	}
}

