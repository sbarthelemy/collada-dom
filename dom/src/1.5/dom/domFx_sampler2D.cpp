#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_sampler2D.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_sampler2D::create(DAE& dae)
{
	domFx_sampler2DRef ref = new domFx_sampler2D(dae);
	return ref;
}


daeMetaElement *
domFx_sampler2D::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_sampler2D" );
	meta->registerClass(domFx_sampler2D::create);


	meta->setElementSize(sizeof(domFx_sampler2D));
	meta->validate();

	return meta;
}

