#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_samplerDEPTH.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_samplerDEPTH::create(DAE& dae)
{
	domFx_samplerDEPTHRef ref = new domFx_samplerDEPTH(dae);
	return ref;
}


daeMetaElement *
domFx_samplerDEPTH::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_samplerDEPTH" );
	meta->registerClass(domFx_samplerDEPTH::create);


	meta->setElementSize(sizeof(domFx_samplerDEPTH));
	meta->validate();

	return meta;
}

