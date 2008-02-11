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

#include <sstream>
#include <dae.h>
#include <dae/daeIDRef.h>
#include <dae/daeDatabase.h>
#include <dae/daeErrorHandler.h>

void
daeIDRef::initialize()
{
	id = "";
	element = NULL;
	container = NULL;
}

daeIDRef::daeIDRef()
{
	initialize();
}

daeIDRef::daeIDRef(daeString IDRefString)
{
	initialize();
	setID(IDRefString);
}

daeIDRef::daeIDRef(const daeIDRef& copyFrom_)
{
	initialize();
	copyFrom(copyFrom_);
}

daeIDRef::daeIDRef(daeElement& container) {
	initialize();
	setContainer(&container);
}


void
daeIDRef::reset()
{
	setID("");
}

bool daeIDRef::operator==(const daeIDRef& other) const {
	return (!strcmp(other.getID(), getID()));
}

daeIDRef &daeIDRef::operator=( const daeIDRef& other) {
	if (!container)
		container = other.container;
	id = other.getID();
	element = other.element;
	return *this;
}

daeString
daeIDRef::getID() const
{
	// If we have an element, ask what its ID is. This way we're always using the up-to-date ID,
	// even if a user changes the ID of the element on us.
	if (element) {
		daeString elementID = element->getID();
		return elementID ? elementID : "";
	}

	return id.c_str();
}

void
daeIDRef::setID(daeString _IDString)
{
	id = _IDString ? _IDString : "";
	element = NULL;
}

daeElement* daeIDRef::getElement() const {
	if (!element && container) {
		element = container->getDAE()->getIDRefResolvers().resolveElement(
			id.c_str(), container->getDocumentURI()->getURI());
	}
	return element;
}

void daeIDRef::setElement(daeElement* newref) {
	element = newref;
	id = element->getID() ? element->getID() : "";
}

daeIDRef::ResolveState daeIDRef::getState() const {
	if (element)
		return id_success;

	if (!container)
		return id_failed_no_document;
	
	// Try to resolve the ID
	ResolveState result;
	element = container->getDAE()->getIDRefResolvers().resolveElement(
		id.c_str(), container->getDocumentURI()->getURI(), &result);
	return result;
}

daeElement* daeIDRef::getContainer() const {
	return(container);
}

void daeIDRef::setContainer(daeElement* cont) {
	container = cont;
	element = NULL; // Force a resolve since the container changed
}

void
daeIDRef::print()
{
	fprintf(stderr,"id = %s\n",id.c_str());
	fflush(stderr);
}

// These methods are provided for backward compatibility only.
void daeIDRef::validate() { }

void daeIDRef::resolveElement( daeString ) { }

void daeIDRef::resolveID() { }

daeIDRef &daeIDRef::get( daeUInt idx ) {
	(void)idx;
	return *this;
}

size_t daeIDRef::getCount() const {
	return 1;
}

daeIDRef& daeIDRef::operator[](size_t index) {
	(void)index;
	return *this;
}

void
daeIDRef::copyFrom(const daeIDRef& copyFrom) {
	*this = copyFrom;
}


daeIDRefResolver::daeIDRefResolver(DAE& dae) : dae(&dae) { }

daeIDRefResolver::~daeIDRefResolver() { }


daeDefaultIDRefResolver::daeDefaultIDRefResolver(DAE& dae) : daeIDRefResolver(dae) { }

daeDefaultIDRefResolver::~daeDefaultIDRefResolver() { }

daeString
daeDefaultIDRefResolver::getName()
{
	return "DefaultIDRefResolver";
}

daeElement* daeDefaultIDRefResolver::resolveElement(daeString id, 
                                                    daeString docURI, 
                                                    daeIDRef::ResolveState* result /* = NULL */)
{
	daeElement* el = NULL;
	daeIDRef::ResolveState state = daeIDRef::id_success;
	
	if (!id || strcmp(id, "") == 0)
		state = daeIDRef::id_failed_invalid_id;
	else {
		if (!docURI)
			state = daeIDRef::id_failed_no_document;
		else {
			el = dae->getDatabase()->idLookup(id, dae->getDatabase()->getDocument(docURI));
			if (!el)
				state = daeIDRef::id_failed_id_not_found;
		}
	}

	if (result)
		*result = state;
	return el;
}


daeIDRefResolverList::daeIDRefResolverList() { }

daeIDRefResolverList::~daeIDRefResolverList() {
	for (size_t i = 0; i < resolvers.getCount(); i++)
		delete resolvers[i];
}

void daeIDRefResolverList::addResolver(daeIDRefResolver* resolver) {
	resolvers.append(resolver);
}

void daeIDRefResolverList::removeResolver(daeIDRefResolver* resolver) {
	resolvers.remove(resolver);
}

daeElement* daeIDRefResolverList::resolveElement(
	daeString id,
	daeString docURI,
	daeIDRef::ResolveState* result)
{
	for(size_t i = 0; i < resolvers.getCount(); i++)
		if (daeElement* el = resolvers[i]->resolveElement(id, docURI, result))
			return el;
	return NULL;
}
