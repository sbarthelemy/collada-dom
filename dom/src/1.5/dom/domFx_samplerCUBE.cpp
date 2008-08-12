#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domFx_samplerCUBE.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domFx_samplerCUBE::create(DAE& dae)
{
	domFx_samplerCUBERef ref = new domFx_samplerCUBE(dae);
	return ref;
}


daeMetaElement *
domFx_samplerCUBE::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "fx_samplerCUBE" );
	meta->registerClass(domFx_samplerCUBE::create);


	meta->setElementSize(sizeof(domFx_samplerCUBE));
	meta->validate();

	return meta;
}

