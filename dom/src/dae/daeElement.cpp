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

#include <dae/daeElement.h>
#include <dae/daeArray.h>
#include <dae/daeMetaAttribute.h>
#include <dae/daeMetaElementAttribute.h>
#include <dae/daeMetaElement.h>
#include <dae/daeDatabase.h>
#include <dae/daeErrorHandler.h>

#include <dae/daeURI.h>
#include <dae/domAny.h>

daeElementRef
daeElement::createElement(daeString className)
{
	daeElementRef elem = _meta->create(className);
	// Bug #225 work around
//	if ( elem != NULL)
//		elem->ref(); // change premature delete into memory leak.
	return elem;
}

daeElement*
daeElement::createAndPlace(daeString className)
{
	daeElementRef elem = _meta->create(className);
	daeBool place = false;
	if (elem != NULL)
		place = placeElement(elem);
	if (place)
		return elem;
	return NULL;
}

daeElement*
daeElement::createAndPlaceAt(daeInt index, daeString className)
{
	daeElementRef elem = _meta->create(className);
	daeBool place = false;
	if (elem != NULL)
		place = placeElementAt(index, elem);
	if (place)
		return elem;
	return NULL;
}

daeBool
daeElement::placeElement(daeElement* e)
{
	if (e == NULL || e == this)
		return false;
	return _meta->place( this, e );
}

daeBool daeElement::placeElementAt(daeInt index, daeElement* e) {
	if (e == NULL || e == this)
		return false;
	return _meta->placeAt( index, this, e );
}

daeBool daeElement::placeElementBefore( daeElement *marker, daeElement *element ) {
	if (marker == NULL || element == NULL || marker->getXMLParentElement() != this ) {
		return false;
	}
	return _meta->placeBefore( marker, this, element );
}

daeBool daeElement::placeElementAfter( daeElement *marker, daeElement *element ) {
	if (marker == NULL || element == NULL || marker->getXMLParentElement() != this ) {
		return false;
	}
	return _meta->placeAfter( marker, this, element );
}

daeInt daeElement::findLastIndexOf( daeString elementName ) {
	if ( _meta->getContents() != NULL ) {
		daeElementRefArray* contents =
						(daeElementRefArray*)_meta->getContents()->getWritableMemory(this);
		for ( int i = (int)contents->getCount()-1; i >= 0; --i ) {
			if ( strcmp( contents->get(i)->getElementName(), elementName ) == 0 ) {
				return i;
			}
		}
	}
	return -1;
}

daeBool 
daeElement::removeChildElement(daeElement* element)
{
	// error traps
	if(element==NULL)
		return false;
	if(element->_parent != this)
		return false;

	return _meta->remove( this, element );
}

// !!!ACL Added to fix mantis issue 0000416
void daeElement::setDocument( daeDocument *c, bool notifyDocument ) {
	if( _document == c ) {
		return;
	}
	if ( _document != NULL && notifyDocument )
	{
		_document->removeElement(this);
	}
	_document = c;
	if ( _document != NULL && notifyDocument )
	{
		_document->insertElement(this);
	}

	daeElementRefArray ea;
	getChildren( ea );
	for ( size_t x = 0; x < ea.getCount(); x++ ) {
		// Since inserting and removing elements works recursively in the database,
		// we don't need to notify it about inserts/removals as we process the
		// children of this element.
		ea[x]->setDocument( c, false );
	}
}

void daeElement::deleteCMDataArray(daeTArray<daeCharArray*>& cmData) {
	for (unsigned int i = 0; i < cmData.getCount(); i++)
		delete cmData.get(i);
	cmData.clear();
}

size_t daeElement::getAttributeCount() {
	return getMeta()->getMetaAttributes().getCount();
}

namespace {
	// A helper function to get the index of an attribute given the attribute name.
	size_t getAttributeIndex(daeElement& el, daeString name) {
		if (el.getMeta()) {
			daeMetaAttributeRefArray& metaAttrs = el.getMeta()->getMetaAttributes();
			for (size_t i = 0; i < metaAttrs.getCount(); i++)
				if (metaAttrs[i]->getName()  &&  strcmp(metaAttrs[i]->getName(), name) == 0)
					return i;
		}
		return (size_t)-1;
	}
}

daeMetaAttribute* daeElement::getAttributeObject(size_t i) {
	daeMetaAttributeRefArray& attrs = getMeta()->getMetaAttributes();
	if (i >= attrs.getCount())
		return NULL;
	return attrs[i];
}	

daeMetaAttribute* daeElement::getAttributeObject(daeString name) {
	return getAttributeObject(getAttributeIndex(*this, name));
}

std::string daeElement::getAttributeName(size_t i) {
	if (daeMetaAttribute* attr = getAttributeObject(i))
		return (daeString)attr->getName();
	return "";
}

daeBool daeElement::hasAttribute(daeString name) {
	return getAttributeObject(name) != 0;
}

daeBool daeElement::isAttributeSet(daeString name) {
	size_t i = getAttributeIndex(*this, name);
	if (i != (size_t)-1)
		return _validAttributeArray[i];
	return false;
}

std::string daeElement::getAttribute(size_t i) {
	std::string value;
	getAttribute(i, value);
	return value;
}

void daeElement::getAttribute(size_t i, std::string& value) {
	value = "";
	if (daeMetaAttribute* attr = getAttributeObject(i)) {
		std::ostringstream buffer;
		attr->memoryToString(this, buffer);
		value = buffer.str();
	}
}

std::string daeElement::getAttribute(daeString name) {
	std::string value;
	getAttribute(name, value);
	return value;
}

void daeElement::getAttribute(daeString name, std::string& value) {
	getAttribute(getAttributeIndex(*this, name), value);
}

daeElement::attr::attr() { }
daeElement::attr::attr(const std::string& name, const std::string& value)
	: name(name), value(value) { }

daeTArray<daeElement::attr> daeElement::getAttributes() {
	daeTArray<daeElement::attr> attrs;
	getAttributes(attrs);
	return attrs;
}

void daeElement::getAttributes(daeTArray<attr>& attrs) {
	attrs.clear();
	for (size_t i = 0; i < getAttributeCount(); i++) {
		std::string value;
		getAttribute(i, value);
		attrs.append(attr(getAttributeName(i), value));
	}
}

daeBool daeElement::setAttribute(size_t i, daeString value) {
	if (daeMetaAttribute* attr = getAttributeObject(i)) {
		if (attr->getType()) {
			attr->stringToMemory(this, value);
			_validAttributeArray.set(i, true);
			return true;
		}
	}
	return false;
}

daeBool daeElement::setAttribute(daeString name, daeString value) {
	return setAttribute(getAttributeIndex(*this, name), value);
}

// Deprecated
daeMemoryRef daeElement::getAttributeValue(daeString name) {
	if (daeMetaAttribute* attr = getAttributeObject(name))
		return attr->get(this);
	return NULL;
}

daeMetaAttribute* daeElement::getCharDataObject() {
	if (_meta)
		return _meta->getValueAttribute();
	return NULL;
}

daeBool daeElement::hasCharData() {
	return getCharDataObject() != NULL;
}

std::string daeElement::getCharData() {
	std::string result;
	getCharData(result);
	return result;
}		

void daeElement::getCharData(std::string& data) {
	data = "";
	if (daeMetaAttribute* charDataAttr = getCharDataObject()) {
		std::ostringstream buffer;
		charDataAttr->memoryToString(this, buffer);
		data = buffer.str();
	}
}

daeBool daeElement::setCharData(const std::string& data) {
	if (daeMetaAttribute* charDataAttr = getCharDataObject()) {
		charDataAttr->stringToMemory(this, data.c_str());
		return true;
	}
	return false;
}

daeBool daeElement::hasValue() {
	return hasCharData();
}

daeMemoryRef daeElement::getValuePointer() {
	if (daeMetaAttribute* charDataAttr = getCharDataObject())
		return charDataAttr->get(this);
	return NULL;
}

void
daeElement::setup(daeMetaElement* meta)
{
	if (_meta)
		return;
	_meta = meta;
	daeMetaAttributeRefArray& attrs = meta->getMetaAttributes();
	int macnt = (int)attrs.getCount();

	_validAttributeArray.setCount(macnt, false);

	for (int i = 0; i < macnt; i++) {
		if (attrs[i]->getDefaultValue() != NULL)
			attrs[i]->copyDefault(this);
	}

	//set up the _CMData array if there is one
	if ( _meta->getMetaCMData() != NULL )
	{
		daeTArray< daeCharArray *> *CMData = (daeTArray< daeCharArray *>*)_meta->getMetaCMData()->getWritableMemory(this);
		CMData->setCount( _meta->getNumChoices() );
		for ( unsigned int i = 0; i < _meta->getNumChoices(); i++ )
		{
			CMData->set( i, new daeCharArray() );
		}
	}
}

void daeElement::init() {
	_parent = NULL;
	_document = NULL;
	_meta = NULL;
	_elementName = NULL;
	_userData = NULL;
}

daeElement::daeElement() {
	init();
}

daeElement::daeElement(DAE& dae) {
	init();
}

daeElement::~daeElement()
{
	if (_elementName) {
		delete[] _elementName;
		_elementName = NULL;
	}
}

//function used until we clarify what's a type and what's a name for an element
daeString daeElement::getTypeName() const
{
	return _meta->getName();
}
daeString daeElement::getElementName() const
{
	return _elementName ? _elementName : (daeString)_meta->getName();
}
void daeElement::setElementName( daeString nm ) {
	if ( nm == NULL ) {
		if ( _elementName ) delete[] _elementName;
		_elementName = NULL;
		return;
	}
	if ( !_elementName ) _elementName = new daeChar[128];
	strcpy( (char*)_elementName, nm );
}

daeString daeElement::getID() const {
	daeElement* this_ = const_cast<daeElement*>(this);
	if (_meta)
		if (daeMetaAttribute* idAttr = this_->getAttributeObject("id"))
			return *(daeStringRef*)idAttr->get(this_);
	return NULL;
}

daeElementRefArray daeElement::getChildren() {
	daeElementRefArray array;
	getChildren(array);
	return array;
}

void daeElement::getChildren( daeElementRefArray &array ) {
	_meta->getChildren( this, array );
}

daeSmartRef<daeElement> daeElement::clone(daeString idSuffix, daeString nameSuffix) {
	// Use the meta object system to create a new instance of this element. We need to
	// create a new meta if we're cloning a domAny object because domAnys never share meta objects.
	// Ideally we'd be able to clone the _meta for domAny objects. Then we wouldn't need
	// any additional special case code for cloning domAny. Unfortunately, we don't have a
	// daeMetaElement::clone method.
	bool any = typeID() == domAny::ID();
	daeElementRef ret = any ? domAny::registerElement(*getDAE())->create() : _meta->create();
	ret->setElementName( _elementName );

	// Copy the attributes and character data. Requires special care for domAny.
	if (any) {
		domAny* thisAny = (domAny*)this;
		domAny* retAny = (domAny*)ret.cast();
		for (daeUInt i = 0; i < (daeUInt)thisAny->getAttributeCount(); i++)
			retAny->setAttribute(thisAny->getAttributeName(i), thisAny->getAttributeValue(i));
		retAny->setValue(thisAny->getValue());
	} else {
		// Use the meta system to copy attributes
		daeMetaAttributeRefArray &attrs = _meta->getMetaAttributes();
		for (unsigned int i = 0; i < attrs.getCount(); i++) {
			attrs[i]->copy( ret, this );
			ret->_validAttributeArray[i] = _validAttributeArray[i];
		}
		if (daeMetaAttribute* valueAttr = getCharDataObject())
			valueAttr->copy( ret, this );
	}
	
	daeElementRefArray children;
	_meta->getChildren( this, children );
	for ( size_t x = 0; x < children.getCount(); x++ ) {
		ret->placeElement( children.get(x)->clone( idSuffix, nameSuffix ) );
	}

	// Mangle the id
	if (idSuffix) {
		std::string id = ret->getAttribute("id");
		if (!id.empty())
			ret->setAttribute("id", (id + idSuffix).c_str());
	}
	// Mangle the name
	if (nameSuffix) {
		std::string name = ret->getAttribute("name");
		if (!name.empty())
			ret->setAttribute("name", (name + nameSuffix).c_str());
	}
	return ret;
}

daeURI *daeElement::getDocumentURI() const {
	if ( _document == NULL ) {
		return NULL;
	}
	return _document->getDocumentURI();
}


daeElement::matchName::matchName(daeString name) : name(name) { }
	
bool daeElement::matchName::operator()(daeElement* elt) const {
	return strcmp(elt->getElementName(), name.c_str()) == 0;
}

daeElement::matchType::matchType(daeInt typeID) : typeID(typeID) { }

bool daeElement::matchType::operator()(daeElement* elt) const {
	return elt->typeID() == typeID;
}

daeElement* daeElement::getChild(const matchElement& matcher) {
	daeElementRefArray children;
	getChildren(children);
	for (size_t i = 0; i < children.getCount(); i++)
		if (matcher(children[i]))
			return children[i];

	return NULL;
}

daeElement* daeElement::getDescendant(const matchElement& matcher) {
	daeElementRefArray elts;
	getChildren(elts);
	
	for (size_t i = 0; i < elts.getCount(); i++) {
		// Check the current element for a match
		if (matcher(elts[i]))
			return elts[i];

		// Append the element's children to the queue
		daeElementRefArray children;
		elts[i]->getChildren(children);
		size_t oldCount = elts.getCount();
		elts.setCount(elts.getCount() + children.getCount());
		for (size_t j = 0; j < children.getCount(); j++)
			elts[oldCount + j] = children[j];
	}

	return NULL;
}

daeElement* daeElement::getAncestor(const matchElement& matcher) {
	daeElement* elt = getParent();
	while (elt) {
		if (matcher(elt))
			return elt;
		elt = elt->getParent();
	}

	return NULL;
}

daeElement* daeElement::getParent() {
	return _parent;
}

daeElement* daeElement::getChild(daeString eltName) {
	if (!eltName)
		return NULL;
	matchName test(eltName);
	return getChild(matchName(eltName));
}

daeElement* daeElement::getDescendant(daeString eltName) {
	if (!eltName)
		return NULL;
	return getDescendant(matchName(eltName));
}

daeElement* daeElement::getAncestor(daeString eltName) {
	if (!eltName)
		return NULL;
	return getAncestor(matchName(eltName));
}

DAE* daeElement::getDAE() {
	return _meta->getDAE();
}

void daeElement::setUserData(void* data) {
	_userData = data;
}

void* daeElement::getUserData() {
	return _userData;
}
