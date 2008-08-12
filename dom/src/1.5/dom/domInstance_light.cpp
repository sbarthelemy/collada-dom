#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_light.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_light::create(DAE& dae)
{
	domInstance_lightRef ref = new domInstance_light(dae);
	return ref;
}


daeMetaElement *
domInstance_light::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_light" );
	meta->registerClass(domInstance_light::create);


	meta->setElementSize(sizeof(domInstance_light));
	meta->validate();

	return meta;
}

