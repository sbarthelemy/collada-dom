#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_camera.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_camera::create(DAE& dae)
{
	domInstance_cameraRef ref = new domInstance_camera(dae);
	return ref;
}


daeMetaElement *
domInstance_camera::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_camera" );
	meta->registerClass(domInstance_camera::create);


	meta->setElementSize(sizeof(domInstance_camera));
	meta->validate();

	return meta;
}

