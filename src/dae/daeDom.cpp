/*
 *                Copyright (C) 2005 Sony Computer Entertainment Inc.
 *                                               All Rights Reserved.
 */

#include <dae/daeDom.h>

#include <dae/daeMetaElement.h>

#include <dom.h>

daeMetaElement* initializeDomMeta()
{
	registerDomTypes();
	
	return registerDomElements();
}
