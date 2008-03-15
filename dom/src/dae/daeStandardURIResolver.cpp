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
#include <dae/daeStandardURIResolver.h>
#include <dae/daeDatabase.h>
#include <dae/daeURI.h>
#include <dae/daeIOPlugin.h>
#include <dae/daeErrorHandler.h>

daeStandardURIResolver::daeStandardURIResolver(DAE& dae)
	: daeURIResolver(dae) { }

daeStandardURIResolver::~daeStandardURIResolver() { }

daeString
daeStandardURIResolver::getName()
{
	return "XMLResolver";
}

daeBool
daeStandardURIResolver::resolveElement(daeURI& uri)
{
	daeDatabase* database = dae->getDatabase();
	daeElement* resolved = NULL;

	// Does the URI have a document reference?
	if (!uri.pathFile().empty())
	{
		// The URI contains a document reference, see if it is loaded and try to load it if it's not
		if (!database->isDocumentLoaded(uri.getURI())) {
			if ( _loadExternalDocuments )
				dae->getIOPlugin()->read(uri,NULL);
			else {
				uri.setState( daeURI::uri_failed_external_document );
				return false;
			}
		}
		// Try to find the id by searching this document only
		resolved = database->idLookup(uri.getID(), database->getDocument(uri.getURI()));
	}
	else
	{
		// The URI was just a fragment, so try to find it in the document that contains it.
		// !!!GAC not sure if all these pointers will be set when we get here, so assert if any of them aren't
		daeElement *tempElement = uri.getContainer();
		daeDocument *tempDocument;
		if ( tempElement == NULL || (tempDocument = tempElement->getDocument()) == NULL ) {
			uri.setState(daeURI::uri_failed_missing_container);
			std::ostringstream msg;
			msg << "daeStandardURIResolver::resolveElement() - failed to resolve " << uri.str() << "\n";
			daeErrorHandler::get()->handleError(msg.str().c_str());
			return false;
		}
		resolved = database->idLookup(uri.getID(), tempDocument);
	}

	uri.setElement(resolved);

	// Error if we didn't successfully resolve the uri

	if (!resolved)
	{
		uri.setState(daeURI::uri_failed_id_not_found);
		std::ostringstream msg;
		msg << "daeStandardURIResolver::resolveElement() - failed to resolve " << uri.str() << "\n";
		daeErrorHandler::get()->handleError(msg.str().c_str());
		return false;
	}

	uri.setState(daeURI::uri_success);
	return true;
}
