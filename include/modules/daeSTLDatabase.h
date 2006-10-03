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

#ifndef __DAE_STLDATABASE__
#define __DAE_STLDATABASE__

#include <stdio.h>

#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <functional>

#include <dae/daeElement.h>
#include <dae/daeDatabase.h>

/**
 * The @c daeSTLDatabase class derives from @c daeDatabase and implements
 * the default database.
 */
class daeSTLDatabase : public daeDatabase
{
public:
	/**
	  * Constructor
	  */
	DLL_EXPORT daeSTLDatabase();
	/**
	  * Destructor
	  */
	virtual DLL_EXPORT ~daeSTLDatabase();

public:
	// Element Types of all Elements
	virtual DLL_EXPORT daeUInt			getTypeCount();
	virtual DLL_EXPORT daeString		getTypeName(daeUInt index);
	virtual DLL_EXPORT daeInt			setMeta(daeMetaElement *_topMeta);

	// Documents
	virtual DLL_EXPORT daeInt			insertDocument(const char *name, daeElement* dom, daeDocument** document = NULL);
	virtual DLL_EXPORT daeInt			insertDocument(daeString name, daeDocument** document = NULL);
	virtual DLL_EXPORT daeInt			createDocument(daeString name, daeElement* dom, daeDocument** document = NULL);
	virtual DLL_EXPORT daeInt			createDocument(daeString name, daeDocument** document = NULL);
	virtual DLL_EXPORT daeInt			insertDocument( daeDocument *c );

	virtual DLL_EXPORT daeInt			removeDocument(daeDocument* document);
	virtual DLL_EXPORT daeUInt			getDocumentCount();
	virtual DLL_EXPORT daeDocument*		getDocument(daeUInt index);
	virtual DLL_EXPORT daeDocument*		getDocument(daeString name);
	virtual DLL_EXPORT daeString		getDocumentName(daeUInt index);
	virtual DLL_EXPORT daeBool			isDocumentLoaded(daeString name);

	// Elements 
	virtual DLL_EXPORT daeInt			insertElement(daeDocument* document, daeElement* element);
	virtual DLL_EXPORT daeInt			removeElement(daeDocument* document, daeElement* element); 
	virtual DLL_EXPORT daeInt			clear();
	virtual DLL_EXPORT void				validate();
	virtual DLL_EXPORT daeUInt			getElementCount(daeString name = NULL,
														  daeString type = NULL,
														  daeString file = NULL);
	virtual DLL_EXPORT daeInt			getElement(daeElement** pElement, 
														daeInt index,
														daeString name = NULL,
														daeString type = NULL,
														daeString file = NULL); 

	// Generic Query
	virtual DLL_EXPORT daeInt			queryElement(daeElement** pElement, daeString genericQuery);

private:

	std::map< std::string, std::vector< daeElement* > > elements; //map for all elements keyed on Type
	std::multimap< std::string, daeElement* > elementsIDMap; //map for elements keyed on ID

	std::vector<daeDocument*> documents;
	daeMetaElement* topMeta;

	daeInt insertChildren( daeDocument *c, daeElement *element );
	daeInt removeChildren( daeDocument *c, daeElement *element );
};

#endif // __DAE_STLDATABASE__
