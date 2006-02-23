/*
 *                Copyright (C) 2005 Sony Computer Entertainment Inc.
 *                                               All Rights Reserved.
 */

#ifndef __DOM__
#define __DOM__

class daeMetaElement;

extern daeString COLLADA_VERSION;
extern daeString COLLADA_NAMESPACE;

// Register all types
void registerDomTypes();

// Register all elements
daeMetaElement* registerDomElements();


#endif // __DOM_INTERFACE__
