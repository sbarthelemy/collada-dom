#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_joint.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_joint::create(DAE& dae)
{
	domInstance_jointRef ref = new domInstance_joint(dae);
	return ref;
}


daeMetaElement *
domInstance_joint::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_joint" );
	meta->registerClass(domInstance_joint::create);


	meta->setElementSize(sizeof(domInstance_joint));
	meta->validate();

	return meta;
}

