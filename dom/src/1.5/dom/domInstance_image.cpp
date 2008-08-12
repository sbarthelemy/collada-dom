#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domInstance_image.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domInstance_image::create(DAE& dae)
{
	domInstance_imageRef ref = new domInstance_image(dae);
	return ref;
}


daeMetaElement *
domInstance_image::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "instance_image" );
	meta->registerClass(domInstance_image::create);


	meta->setElementSize(sizeof(domInstance_image));
	meta->validate();

	return meta;
}

