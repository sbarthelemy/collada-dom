#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_sampler1D.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_sampler1D::create(DAE& dae)
{
	domFx_sampler1DRef ref = new domFx_sampler1D(dae);
	return ref;
}


daeMetaElement *
domFx_sampler1D::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_sampler1D" );
	meta->registerClass(domFx_sampler1D::create);


	meta->setElementSize(sizeof(domFx_sampler1D));
	meta->validate();

	return meta;
}

