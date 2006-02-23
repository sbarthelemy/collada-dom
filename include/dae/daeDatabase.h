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

#ifndef __DAE_DATABASE__
#define __DAE_DATABASE__

#include <dae/daeTypes.h>
#include <dae/daeElement.h>
#include <dae/daeURI.h>

/**
 * The @c daeCollection class implements a COLLADA runtime database entry.
 */
class daeCollection
{
public:
	/**
	* Accessor to get the @c domCollada associated with this collection.
	* @return A @c daeElementRef for the @c domCollada that is the root of this document.
	* @note This function should really return a domColladaRef,
	* but we're trying to avoid having @c dae classes depend on generated dom classes.
	*/
	daeElement* getDomRoot() const {return(dom);}
	/**
	* Accessor to set the domCollada associated with this collection
	* @param domRoot the domCollada that is the root of this document
	* @remarks Should really require a domColladaRef but we're trying to avoid having dae classes depend on generated dom classes.
	*/
	void setDomRoot(daeElement* domRoot) {dom = domRoot;}
	/**
	* Accessor to get the URI associated with the document in this collection; 
	* this is currently set to the URI from which the collection was loaded, but
	* is blank if the collection was created with @c insertCollection().
	* @return Returns a pointer to the URI for this collection.
	* @note This is the full URI of the document and not the document base URI.
	*/
	daeURI* getDocumentURI() {return (&uri);}
	/**
	 * Accessor to get if this document has been modified since the last time the database was validated.
	 * @return Returns true if the document was modified, false otherwise.
	 */
	daeBool getModified() const {return modified;}
	/**
	 * Sets if this document has been modified since the last time the database was validated.
	 * @param A boolean value specifying if the document was modified.
	 */
	void setModified( daeBool mod ) {modified = mod;}
private:
	/**
	* Top Level element for of the collection, always a domCollada
	* @remarks This member will eventually be taken private, use getDomRoot() to access it.
	*/
	daeElementRef dom;
	
	/** 
	* The URI of the document in this collection, may be blank if the collection wasn't loaded from a URI
	* @remarks This member will eventually be taken private, use getDocumentURI() to access it.
	*/
	daeURI uri;

	/**
	 * A flag that indicates if this collection has been modified.
	 */
	daeBool modified;
};

/**
 * The @c daeDatabase class implements the COLLADA runtime database interface.
 */
class daeDatabase
{
public:
	/**
	*  Destructor.
	 */
	virtual ~daeDatabase() {}
	
	/** @name Collections */
	//@{
	/**
	* Creates a new collection, defining its root as the <tt><i>dom</i></tt> object; returns an error if the collection name already exists.
	* @param name Name of the new collection, must be a valid URI.
	* @param dom Existing @c domCOLLADA root element of the collection
	* @param collection Pointer to a @c daeCollection pointer that receives the collection created 
	* @return Returns @c DAE_OK if the collection was created successfully, otherwise returns a negative value as defined in daeError.h.
	* @note The @c daeElement passed in as <tt><i>dom</i></tt> should always be a @c domCOLLADA object, the API may enforce this in the future.
	* @deprecated This function will be removed in future versions. Please use createCollection.
	*/
	virtual daeInt insertCollection(daeString name, daeElement* dom, daeCollection** collection = NULL) = 0;
	/**
	* Creates a new @c domCOLLADA root element and a new collection; returns an error if the collection name already exists.
	* @param name Name of the new collection, must be a valid URI.
	* @param collection Pointer to a @c daeCollection pointer that receives the collection created 
	* @return Returns DAE_OK if the collection was created successfully, otherwise returns a negative value as defined in daeError.h.
	* @deprecated This function will be removed in future versions. Please use createCollection.
	*/
	virtual daeInt insertCollection(daeString name, daeCollection** collection = NULL) = 0;
	/**
	* Creates a new collection, defining its root as the <tt><i>dom</i></tt> object; returns an error if the collection name already exists.
	* @param name Name of the new collection, must be a valid URI.
	* @param dom Existing @c domCOLLADA root element of the collection
	* @param collection Pointer to a @c daeCollection pointer that receives the collection created 
	* @return Returns @c DAE_OK if the collection was created successfully, otherwise returns a negative value as defined in daeError.h.
	* @note The @c daeElement passed in as <tt><i>dom</i></tt> should always be a @c domCOLLADA object, the API may enforce this in the future.
	*/
	virtual daeInt createCollection(daeString name, daeElement* dom, daeCollection** collection = NULL) = 0;
	/**
	* Creates a new @c domCOLLADA root element and a new collection; returns an error if the collection name already exists.
	* @param name Name of the new collection, must be a valid URI.
	* @param collection Pointer to a @c daeCollection pointer that receives the collection created 
	* @return Returns DAE_OK if the collection was created successfully, otherwise returns a negative value as defined in daeError.h.
	*/
	virtual daeInt createCollection(daeString name, daeCollection** collection = NULL) = 0;

	/**
	 * Inserts an already existing collection into the database.
	 * @param c The collection to insert.
	 * @return Returns DAE_OK if the collection was inserted successfully, otherwise returns a negative value as defined in daeError.h.
	 */
	virtual daeInt insertCollection( daeCollection *c ) = 0;

	/**
	* Removes a collection from the database.
	* @param collection Collection to remove from the database
	* @return Returns DAE_OK if the collection was successfully removed, otherwise returns a negative value as defined in daeError.h. 
	*/
	virtual daeInt removeCollection(daeCollection* collection) = 0;
	/**
	* Gets the number of collections.
	* @return Returns the number of collections.
	*/
	virtual daeUInt getCollectionCount() = 0;
	/**
	* Gets a collection based on the collection index.
	* @param index Index of the collection to get.
	* @return Returns a pointer on the collection, or NULL if not found. 
	*/
	virtual daeCollection* getCollection(daeUInt index) = 0;
	/**
	* Gets a collection based on the collection name.
	* @param name The name of the collection as a URI.
	* @return Returns a pointer to the collection, or NULL if not found. 
	* @note If the URI contains a fragment, the fragment is stripped off.
	*/
	virtual daeCollection* getCollection(daeString name) = 0;
	/**
	* Gets a collection name.
	* @param index Index of the collection to get.
	* @return Returns the name of the collection at the given index. 
	*/
	virtual daeString getCollectionName(daeUInt index) = 0;
	/**
	* Indicates if a collection is loaded or not.
	* @param name Name of the collection  as a URI.
	* @return Returns true if the collection is loaded, false otherwise.
	* @note If the URI contains a fragment, the fragment is stripped off.
	*/
	virtual daeBool isCollectionLoaded(daeString name) = 0;
	//@}
	
	/** @name Elements */ 
	//@{
	/**
	* Gets the number of types in the database.
	* @return Returns the number of different types of objects inserted in the database.
	*/
	virtual daeUInt getTypeCount() = 0;
	/**
	* Retrieves the name of a type of object inserted in the database.
	* @param index Index of the type; must be between 0 and <tt> daeDatabase::getTypeCount()-1 </tt>
	* @return Returns the name of the type, NULL if the index is invalid.
	*/
	virtual daeString getTypeName(daeUInt index) = 0;
	/**
	* Inserts a @c daeElement into the runtime database.
	* @param collection Collection in which the @c daeElement lives.
	* @param element @c daeElement to insert in the database
	* @return Returns @c DAE_OK if element successfully inserted, otherwise returns a negative value as defined in daeError.h.
	*/
	virtual daeInt insertElement(daeCollection* collection,
	                             daeElement* element) = 0;
	/**
	* Removes a @c daeElement from the runtime database; not implemented in the reference STL implementation.
	* @param collection Collection in which the @c daeElement lives.
	* @param element Element to remove.
	* @return Returns @c DAE_OK if element successfully removed, otherwise returns a negative value as defined in daeError.h.
	* @note This function is not implemented in the reference STL implementation.
	*/
	virtual daeInt removeElement(daeCollection* collection,
	                           daeElement* element) = 0;
	/**
	* Unloads all of the collections of the runtime database.
	* This function frees all the @c dom* objects and integration objects created so far,
	* except any objects on which you still have a smart pointer reference (@c daeSmartRef).
	* @return Returns @c DAE_OK if all collections successfully unloaded, otherwise returns a negative value as defined in daeError.h.
	*/
	virtual daeInt clear() = 0;
	/**
	* Optimizes the database.
	* This function takes time; it is called by the interface at the end of a load operation.
	* Some databases cannot be queried when items are being inserted; for instance, they may
	* need to be sorted. All database search functions call @c validate(); you should not need to 
	* call this function directly.
	*/
	virtual void validate() = 0;
	//@}

	/** @name Queries */
	//@{
	/**
	* Gets the number of daeElement objects that match the search criteria
	* Any combination of search criteria can be NULL, if a criterion is NULL all 
	* the parameters will match for this criterion.
	* Hence @c getElementCount() called without parameters returns the total number of @c daeElement objects in the database.
	* Criteria can not be specified with wildcards, either a criterion is set and it will have
	* to match, or it is not set and all @c daeElements match for this criterion.
	* @param name Name or id of the @c daeElement, for example, "mycube1", can be NULL
	* @param type Type of @c daeElement to find, this can be any COLLADA tag such as <geometry> or <library>, can be NULL
	* @param file Name of the collection or file, for example, "myCollection.xml", can be NULL
	* @return Returns the number of elements matching this query.
	*/
	virtual daeUInt getElementCount(daeString name = NULL,
								  daeString type = NULL,
								  daeString file = NULL) = 0;
	/**
	* Returns the @c daeElement which matches the search criteria.
	* Any combination of search criteria can be NULL, if a criterion is NULL all 
	* the parameters will match for this criterion.
	* The function operates on the set of assets that match the <tt><i>name, type</i></tt> and <tt><i>file</i></tt> search criteria, 
	* with the <tt><i>index</i></tt> parameter indicating which asset within the set is returned.
	* Calling @c daeElement(&pElement,index) without search criteria returns the @c daeElement number <tt><i>index</i></tt> in the database without
	* any consideration of name, type or collection.
	* Criteria can not be specified with wildcards, either a criterion is set and it will have
	* to match, or it is not set and all @c daeElements match for this criterion.
	* The default database search is roughly in log2(n). Maximum performance is obtained when querying 
	* by type and a name. Any other combination results in a slight overhead, but the overall search time
	* remains around log2(n).
	* @param pElement Pointer of a @c daeElement* which receives the found @c daeElement if the search succeeds
	* @param index Index within the set of @c daeElements that match the search criteria
	* @param name Name or id of the @c daeElement, for example "mycube1", can be NULL
	* @param type Type of the @c daeElement to get, this can be any COLLADA tag such as <geometry> or <library>, can be NULL
	* @param file Name of the collection or file, for example, "myCollection.xml", can be NULL
	* @return Returns DAE_OK upon success, returns DAE_ERR_QUERY_NO_MATCH if there is no match, otherwise, returns a negative value as defined in daeError.h.
	*/
	virtual daeInt getElement(daeElement** pElement,
							daeInt index,
							daeString name = NULL,
							daeString type = NULL,
							daeString file = NULL ) = 0;
	/**
	* Returns the @c daeElement which matches the <tt><i>genericQuery</i></tt> parameter; not implemented.
	* @param pElement Element to return.
	* @param genericQuery Generic query
	* @return Returns DAE_OK if it succeeds, returns DAE_ERR_QUERY_NO_MATCH if there is no match, otherwise returns a negative value as defined in daeError.h.
	* @note This function is not implemented.
	*/
	virtual daeInt queryElement(daeElement** pElement, daeString genericQuery) = 0;
	//@}
	
	/** 
	* Sets the top meta object.
	* Called by @c dae::setDatabase() when the database changes. It passes to this function the
	* top meta object, which is the root of a 
    * hierarchy of @c daeMetaElement objects. This top meta object is capable of creating
	* any of the root objects in the DOM tree.
	* @param _topMeta Top meta object to use to create objects to fill the database.
	* @return Returns DAE_OK if successful, otherwise returns a negative value defined in daeError.h.
	*/
	virtual daeInt setMeta(daeMetaElement *_topMeta) = 0;
};

#endif //__DAE_DATABASE__
