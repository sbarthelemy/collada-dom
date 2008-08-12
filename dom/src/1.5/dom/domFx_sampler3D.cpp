#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_sampler3D.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_sampler3D::create(DAE& dae)
{
	domFx_sampler3DRef ref = new domFx_sampler3D(dae);
	return ref;
}


daeMetaElement *
domFx_sampler3D::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_sampler3D" );
	meta->registerClass(domFx_sampler3D::create);


	meta->setElementSize(sizeof(domFx_sampler3D));
	meta->validate();

	return meta;
}

