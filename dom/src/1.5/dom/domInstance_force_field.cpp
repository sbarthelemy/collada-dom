#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_force_field.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_force_field::create(DAE& dae)
{
	domInstance_force_fieldRef ref = new domInstance_force_field(dae);
	return ref;
}


daeMetaElement *
domInstance_force_field::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_force_field" );
	meta->registerClass(domInstance_force_field::create);


	meta->setElementSize(sizeof(domInstance_force_field));
	meta->validate();

	return meta;
}

