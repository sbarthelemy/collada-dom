#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_physics_material.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_physics_material::create(DAE& dae)
{
	domInstance_physics_materialRef ref = new domInstance_physics_material(dae);
	return ref;
}


daeMetaElement *
domInstance_physics_material::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_physics_material" );
	meta->registerClass(domInstance_physics_material::create);


	meta->setElementSize(sizeof(domInstance_physics_material));
	meta->validate();

	return meta;
}

