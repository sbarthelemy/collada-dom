#include <dae.h>
#include <dae/daeDom.h>
#include <dom/domRotate.h>
#include <dae/daeMetaCMPolicy.h>
#include <dae/daeMetaSequence.h>
#include <dae/daeMetaChoice.h>
#include <dae/daeMetaGroup.h>
#include <dae/daeMetaAny.h>
#include <dae/daeMetaElementAttribute.h>

daeElementRef
domRotate::create(DAE& dae)
{
	domRotateRef ref = new domRotate(dae);
	return ref;
}


daeMetaElement *
domRotate::registerElement(DAE& dae)
{
	daeMetaElement* meta = dae.getMeta(ID());
	if ( meta != NULL ) return meta;

	meta = new daeMetaElement(dae);
	dae.setMeta(ID(), *meta);
	meta->setName( "rotate" );
	meta->registerClass(domRotate::create);

	//	Add attribute: _value
	{
		daeMetaAttribute *ma = new daeMetaAttribute;
		ma->setName( "_value" );
		ma->setType( dae.getAtomicTypes().get("Targetable_float4"));
		ma->setOffset( daeOffsetOf( domRotate , _value ));
		ma->setContainer( meta );
		meta->appendAttribute(ma);
	}

	meta->setElementSize(sizeof(domRotate));
	meta->validate();

	return meta;
}

