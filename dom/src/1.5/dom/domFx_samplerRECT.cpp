#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_samplerRECT.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_samplerRECT::create(DAE& dae)
{
	domFx_samplerRECTRef ref = new domFx_samplerRECT(dae);
	return ref;
}


daeMetaElement *
domFx_samplerRECT::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_samplerRECT" );
	meta->registerClass(domFx_samplerRECT::create);


	meta->setElementSize(sizeof(domFx_samplerRECT));
	meta->validate();

	return meta;
}

