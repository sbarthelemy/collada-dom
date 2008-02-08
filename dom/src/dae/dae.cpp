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

#include <dae.h>
#include <dae/daeDatabase.h>
#include <dae/daeDom.h>
#include <dae/daeIDRef.h>
#include <dae/daeMetaElement.h>
#include <modules/daeSTLDatabase.h>
#include <dae/daeErrorHandler.h>
#include <dae/daeRawResolver.h>
#include <dae/daeStandardURIResolver.h>
#include <dom/domTypes.h>
#include <dom/domCOLLADA.h>

#ifdef DOM_INCLUDE_LIBXML
#include <modules/daeLIBXMLPlugin.h>
#endif

#ifdef DOM_INCLUDE_TINYXML
#include <dae/daeTinyXMLPlugin.h>
#endif

using namespace std;

// Don't include domConstants.h because it varies depending on the dom version,
// just extern the one thing we need (COLLADA_VERSION) which all versions of
// domConstants.h/.cpp are required to define.

extern daeString COLLADA_VERSION;		 

daeInt DAEInstanceCount = 0;

void
DAE::cleanup()
{
	//Contributed by Nus - Wed, 08 Nov 2006
	daeStringRef::releaseStringTable();
	//----------------------
}

void DAE::init(daeDatabase* database_, daeIOPlugin* ioPlugin) {
	database = NULL;
	plugin = NULL;
	defaultDatabase = false;
	defaultPlugin = false;
	metas.setCount(colladaTypeCount());

	initializeDomMeta(*this);
	DAEInstanceCount++;
	uriResolvers.addResolver(new daeStandardURIResolver(*this));
	uriResolvers.addResolver(new daeRawResolver(*this));
	idRefResolvers.addResolver(new daeDefaultIDRefResolver(*this));

	setDatabase(database_);
	setIOPlugin(ioPlugin);
}

DAE::~DAE()
{
	if (defaultDatabase)
		delete database;
	if (defaultPlugin)
		delete plugin;
	if ( --DAEInstanceCount <= 0 )
		cleanup();
}

// Database setup	
daeDatabase* DAE::getDatabase()
{
	return database;	
}

daeInt DAE::setDatabase(daeDatabase* _database)
{
	if (defaultDatabase)
		delete database;
	if (_database)
	{
		defaultDatabase = false;
		database = _database;
	}
	else
	{
		//create default database
		database = new daeSTLDatabase(*this);
		defaultDatabase = true;
	}
	database->setMeta(getMeta(domCOLLADA::ID()));
	return DAE_OK;
}

// IO Plugin setup
daeIOPlugin* DAE::getIOPlugin()
{
	return plugin;
}

daeInt DAE::setIOPlugin(daeIOPlugin* _plugin)
{
	if (defaultPlugin) 
		delete plugin;
	if (_plugin) {
		defaultPlugin = false;
		plugin = _plugin;
	}
	else {
		plugin = NULL;
		defaultPlugin = true;

		//create default plugin
#ifdef DOM_INCLUDE_LIBXML
		plugin = new daeLIBXMLPlugin(*this);
#else
#ifdef DOM_INCLUDE_TINYXML
		plugin = new daeTinyXMLPlugin;
#endif
#endif

		if (!plugin) {
			daeErrorHandler::get()->handleWarning("No IOPlugin Set");
			plugin = new daeIOEmpty;
			return DAE_ERROR;
		}
	}
	
	int res = plugin->setMeta(getMeta(domCOLLADA::ID()));
	if (res != DAE_OK) {
		if (defaultPlugin) {
			defaultPlugin = false;
			delete plugin;
		}
		plugin = NULL;
	}
	return res;
}

domCOLLADA* DAE::addURI(daeString uri) {
	if (domCOLLADA* root = getDom(uri))
		return root;
	if (getDatabase()->insertDocument(uri) == DAE_OK)
		return getDom(uri);
	return NULL;
}

domCOLLADA* DAE::loadURI(daeString uri, daeString docBuffer) {
	plugin->setDatabase(database);

	if (!uri || uri[0] == '\0')
		return NULL;

	daeURI tempURI(*this, uri);
	if (plugin->read(tempURI, docBuffer) != DAE_OK)
		return NULL;
	return getDom(tempURI.getURI());
}

domCOLLADA* DAE::saveURI(daeString uri, daeBool replace) {
	plugin->setDatabase(database);
	
	// Find the document we want by name
	if (daeDocument* document = database->getDocument(uri)) {
		if (plugin->write(document->getDocumentURI(), document, replace) == DAE_OK)
			return daeSafeCast<domCOLLADA>(document->getDomRoot());
	}

	return NULL;
}

domCOLLADA* DAE::saveAsURI(daeString uriToSaveTo, daeString docUri, daeBool replace) {
	plugin->setDatabase(database);
	
	// Find the document we want by name
	if (daeDocument* document = database->getDocument(docUri)) {
		// Make a URI from uriToSaveTo and save to that
		daeURI tempURI(*this, uriToSaveTo, true);
		if (plugin->write(&tempURI, document, replace) == DAE_OK)
			return daeSafeCast<domCOLLADA>(document->getDomRoot());
	}

	return NULL;
}

domCOLLADARef DAE::unloadURI(daeString uri) {
	if (daeDocument* doc = database->getDocument(uri)) {
		domCOLLADARef root = daeSafeCast<domCOLLADA>(doc->getDomRoot());
		if (database->removeDocument(doc) == DAE_OK)
			return root;
	}

	return NULL;
}


daeInt DAE::load(daeString uri, daeString docBuffer) {
	return loadURI(uri, docBuffer) ? DAE_OK : DAE_ERROR;
}

daeInt DAE::save(daeString uri, daeBool replace) {
	return saveURI(uri, replace) ? DAE_OK : DAE_ERROR;
}

daeInt DAE::save(daeUInt documentIndex, daeBool replace) {
	plugin->setDatabase(database);
	if (documentIndex >= database->getDocumentCount())
		return DAE_ERROR;

	// Save it out to the URI it was loaded from
	daeDocument* document = database->getDocument(documentIndex);
	return plugin->write(document->getDocumentURI(), document, replace);
}

daeInt DAE::saveAs(daeString uriToSaveTo, daeString docUri, daeBool replace) {
	return saveAsURI(uriToSaveTo, docUri, replace) ? DAE_OK : DAE_ERROR;
}

daeInt DAE::saveAs(daeString uriToSaveTo, daeUInt documentIndex, daeBool replace) {
	plugin->setDatabase(database);
	if (documentIndex >= database->getDocumentCount())
		return DAE_ERROR;

	daeDocument* document = database->getDocument(documentIndex);
	daeURI tempURI(*this, uriToSaveTo, true);
	return plugin->write(&tempURI, document, replace);
}

daeInt DAE::unload(daeString uri) {
	return unloadURI(uri) ? DAE_OK : DAE_ERROR;
}


namespace {
	// Take a URI ref and return a full URI. Uses the current working directory
	// as the base URI if a relative URI reference is given.
	string makeFullUri(DAE& dae, const string& uriRef) {
		daeURI uri(dae, uriRef.c_str());
		return uri.getURI();
	}

	// Take a file path (either relative or absolute) and return a full URI
	// representing the path. If a relative path is given, uses the current working
	// directory as a base URI to construct the full URI.
	string filePathToFullUri(DAE& dae, const string& path) {
		return makeFullUri(dae, cdom::filePathToUri(path));
	}
}

domCOLLADA* DAE::addFile(daeString file) {
	return addURI(filePathToFullUri(*this, file).c_str());
}

domCOLLADA* DAE::loadFile(daeString file, daeString memBuffer) {
	return loadURI(filePathToFullUri(*this, file).c_str(), memBuffer);
}

domCOLLADA* DAE::saveFile(daeString file, daeBool replace) {
	return saveURI(filePathToFullUri(*this, file).c_str(), replace);
}

domCOLLADA* DAE::saveAsFile(daeString fileToSaveTo, daeString file, daeBool replace) {
	return saveAsURI(filePathToFullUri(*this, fileToSaveTo).c_str(),
	                 filePathToFullUri(*this, file).c_str(), replace);
}

domCOLLADARef DAE::unloadFile(daeString file) {
	return unloadURI(filePathToFullUri(*this, file).c_str());
}


daeInt DAE::clear()
{
	if (database)
		database->clear();
	return DAE_OK;
}

// Load/Save Progress	
void DAE::getProgress(daeInt* bytesParsed,daeInt* lineNumber,daeInt* totalBytes,daeBool reset)
{
	if (!database || !plugin)
	{
		if (bytesParsed)
			*bytesParsed=0;
		if (lineNumber)
			*lineNumber=0;
		if (totalBytes)
			*totalBytes=0;
	}
	else
		plugin->getProgress(bytesParsed,lineNumber,totalBytes,reset);
}

// Simple Query
domCOLLADA* DAE::getDom(daeString uri)
{
	if (!database)
		return NULL;

	// Find the document by uri
	daeDocument *document = database->getDocument(uri);
	if(document)
	{
		// Return the root domCOLLADA element
		return (domCOLLADA*)(daeElement*)document->getDomRoot();
	}
	else
	{
		return(NULL);
	}
}

daeInt DAE::setDom(daeString uri, domCOLLADA* dom)
{
	if (!database)
		setDatabase(NULL);
	
	// Find the document by uri
	
	daeDocument *document = database->getDocument(uri);

	if(document)
	{
		//replace a DOM on an existing document by the one provided.
		// Note that the casts are needed because we don't want to include the full definition of domCOLLADA
		document->setDomRoot((daeElement*)dom);
		return DAE_OK;
	}
	else
	{
		// Document doesn't exist, make a new one
		return database->insertDocument(uri,(daeElement*)dom);
	}
}

domCOLLADA* DAE::getDomFile(daeString file) {
	return getDom(filePathToFullUri(*this, file).c_str());
}

daeInt DAE::setDomFile(daeString file, domCOLLADA* dom) {
	return setDom(filePathToFullUri(*this, file).c_str(), dom);
}

daeString DAE::getDomVersion()
{
	return(COLLADA_VERSION);
}

daeAtomicTypeList& DAE::getAtomicTypes() {
	return atomicTypes;
}

daeMetaElement* DAE::getMeta(daeInt typeID) {
	if (typeID < 0 || typeID >= daeInt(metas.getCount()))
		return NULL;
	return metas[typeID];
}

daeMetaElementRefArray& DAE::getAllMetas() {
	return metas;
}

void DAE::setMeta(daeInt typeID, daeMetaElement& meta) {
	if (typeID < 0 || typeID >= daeInt(metas.getCount()))
		return;
	metas[typeID] = &meta;
}

daeURIResolverList& DAE::getURIResolvers() {
	return uriResolvers;
}

daeURI& DAE::getBaseURI() {
	return baseUri;
}

void DAE::setBaseURI(const daeURI& uri) {
	baseUri = uri;
}

void DAE::setBaseURI(daeString uri) {
	baseUri = uri;
}

daeIDRefResolverList& DAE::getIDRefResolvers() {
	return idRefResolvers;
}

void DAE::dummyFunction1() { }
