#include <cstdarg>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <memory>
#include <map>
#include <vector>
#include <set>
#include <dae.h>
#include <dom/domConstants.h>
#include <dom/domCOLLADA.h>
#include <dom/domProfile_COMMON.h>
#include <dae/daeSIDResolver.h>
#include <dom/domInstance_controller.h>
#include <dae/domAny.h>
#include <dae/daeErrorHandler.h>
#include <dae/daeUtils.h>
#include <dom/domFx_surface_init_from_common.h>
#include <modules/stdErrPlugin.h>
#include <dom/domEllipsoid.h>
#include <dom/domInputGlobal.h>
#include <dom/domAsset.h>
#include "domTest.h"

namespace fs = boost::filesystem;
using namespace std;
using namespace cdom;

float toFloat(const string& s) {
	istringstream stream(s);
	float f;
	stream >> f;
	return f;
}

#define CheckResultWithMsg(val, msg) \
	if (!(val)) { \
		return testResult(false, __FILE__, __LINE__, msg); \
	}

#define CompareDocs(dae, file1, file2) \
	{ \
		domCOLLADA *root1 = (dae).getDomFile((file1).c_str()), \
		           *root2 = (dae).getDomFile((file2).c_str()); \
		daeElement::compareResult result = daeElement::compareWithFullResult(*root1, *root2); \
		if (result.compareValue != 0) { \
			return testResult(false, __FILE__, __LINE__, result.format()); \
		} \
	}

map<string, domTest*>& registeredTests() {
	static map<string, domTest*> tests;
	return tests;
}

fs::path& dataPath() {
	static fs::path dataPath_;
	return dataPath_;
}

fs::path& tmpPath() {
	static fs::path tmpPath_;
	return tmpPath_;
}

#define RunTest(testName) \
	{ \
		map<string, domTest*>::iterator iter = registeredTests().find(#testName); \
		CheckResult(iter != registeredTests().end()); \
		CheckResult(iter->second->run()); \
	}


string lookupTestFile(const string& fileName) {
	return (dataPath() / fileName).native_file_string();
}

string getTmpFile(const string& fileName) {
	return (tmpPath() / fileName).native_file_string();
}


string chopWS(const string& s) {
	string ws = " \t\n\r";
	size_t beginPos = s.find_first_not_of(ws);
	size_t endPos = s.find_last_not_of(ws);
	if (beginPos == string::npos)
		return "";
	return s.substr(beginPos, endPos-beginPos+1);
}

DefineTest(chopWS) {
	CheckResult(chopWS("") == "");
	CheckResult(chopWS("") == "");
	CheckResult(chopWS(" ") == "");
	CheckResult(chopWS(" test") == "test");
	CheckResult(chopWS("test ") == "test");
	CheckResult(chopWS(" test ") == "test");
	CheckResult(chopWS(" a ") == "a");
	return testResult(true);
}


DefineTest(utils) {
	CheckResult(replace("abc", "abc", "def") == "def");
	CheckResult(replace("abc", "a", "1") == "1bc");
	CheckResult(replace("abc", "c", "1") == "ab1");
	CheckResult(replace("abc123", "bc12", "b") == "ab3");
	CheckResult(replace("abracadabra", "a", "") == "brcdbr");

	CheckResult(tokenize("1|2|3|4", "|")   == makeStringList("1", "2", "3", "4", 0));
	CheckResult(tokenize("|1|", "|")       == makeStringList("1", 0));
	CheckResult(tokenize("1|||2||3|", "|") == makeStringList("1", "2", "3", 0));
	CheckResult(tokenize("1|||2||3|", "|", true) ==
	            makeStringList("1", "|", "|", "|", "2", "|", "|", "3", "|", 0));
	CheckResult(tokenize("this/is some#text", "/#", true) ==
	            makeStringList("this", "/", "is some", "#", "text", 0));
	CheckResult(tokenize("this/is some#text", "/# ", false) ==
	            makeStringList("this", "is", "some", "text", 0));

	CheckResult(toString(5) == "5");
	CheckResult(toFloat(toString(4.0f)) == 4.0f);

	return testResult(true);
}


DefineTest(elementAddFunctions) {
	DAE dae;
	const char* uri = "file.dae";

	// Test the new 'add' functions
	daeElement* root = dae.addURI(uri);
	CheckResult(root);
	daeElement* geomLib = root->add("library_geometries");
	CheckResult(geomLib);
	daeElement* effectLib = root->add("library_effects", 0);
	CheckResult(effectLib && root->getChildren()[0] == effectLib);
	root->addBefore(geomLib, effectLib);
	CheckResult(root->getChildren()[0] == geomLib);
	CheckResult(root->removeChildElement(geomLib));
	root->addAfter(geomLib, effectLib);
	CheckResult(root->getChildren()[1] == geomLib);
	CheckResult(root->removeChildElement(geomLib));
	root->add(geomLib);
	CheckResult(root->getDescendant("library_geometries"));
	daeElement* instanceGeom = root->add("library_nodes node instance_geometry");
	CheckResult(instanceGeom && instanceGeom->typeID() == domInstance_geometry::ID());
	CheckResult(root->add("library_materials material blah") == NULL);
	CheckResult(root->getDescendant("library_materials") == NULL);

	// Test the deprecated functions
	CheckResult(dae.unloadURI(uri));
	root = dae.addURI(uri);
	CheckResult(root);
	geomLib = root->createAndPlace("library_geometries");
	CheckResult(geomLib);
	effectLib = root->createAndPlaceAt(0, "library_effects");
	CheckResult(effectLib && root->getChildren()[0] == effectLib);
	root->placeElementBefore(effectLib, geomLib);
	CheckResult(root->getChildren()[0] == geomLib);
	CheckResult(root->removeChildElement(geomLib));
	root->placeElementAfter(effectLib, geomLib);
	CheckResult(root->getChildren()[1] == geomLib);
	CheckResult(root->removeChildElement(geomLib));
	root->placeElement(geomLib);
	CheckResult(root->getDescendant("library_geometries"));

	return testResult(true);
}


DefineTest(loadClipPlane) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("clipPlane.dae").c_str()));
	return testResult(true);
}


DefineTest(renderStates) {
	string memoryUri = "renderStates_create.dae";
	string file = getTmpFile("renderStates.dae");
	
	DAE dae;
	daeElement* root = dae.addFile(memoryUri.c_str());
	CheckResult(root);
	daeElement* pass = root->add("library_effects effect profile_CG technique pass");
	CheckResult(pass);
	pass->add("color_clear")->setCharData("0 0 0 0");
	pass->add("depth_mask")->setAttribute("value", "true");
	pass->add("cull_face_enable")->setAttribute("value", "true");
	pass->add("blend_enable")->setAttribute("value", "true");
	pass->add("blend_func_separate")->setAttribute("value", "true");
	pass->add("cull_face")->setAttribute("value", "FRONT");
	pass->add("polygon_offset_fill_enable")->setAttribute("value", "true");
	pass->add("clear_color")->setAttribute("value", "0 0 0 0");
	
	// Write the document to disk
	CheckResult(dae.saveAsFile(file.c_str(), memoryUri.c_str()));

	// Load up the saved document and see if it's the same as our in-memory document
	root = dae.loadFile(file.c_str());
	CheckResult(root);
	CompareDocs(dae, memoryUri, file);

	// Check default attribute value suppression
	CheckResult(root->getDescendant("depth_mask")->isAttributeSet("value") == false);
	CheckResult(root->getDescendant("clear_color")->isAttributeSet("value") == false);
	CheckResult(root->getDescendant("color_clear")->getCharData() != "");
	CheckResult(root->getDescendant("polygon_offset_fill_enable")->isAttributeSet("value"));
		
	return testResult(true);
}


DefineTest(compareElements) {
	string memoryUri = "file.dae";
	
	DAE dae;
	daeElement* root = dae.addURI(memoryUri.c_str());
	CheckResult(root);

	daeElement* technique = root->add("extra technique");
	CheckResult(technique);

	// Make sure attribute order doesn't matter
	daeElement* elt1 = technique->add("elt");
	daeElement* elt2 = technique->add("elt");
	CheckResult(elt1 && elt2);

	elt1->setAttribute("attr1", "val1");
	elt1->setAttribute("attr2", "val2");
	elt2->setAttribute("attr2", "val2");
	elt2->setAttribute("attr1", "val1");

	CheckResult(daeElement::compare(*elt1, *elt2) == 0);

	// Make sure that element comparison fails when appropriate
	elt2->setAttribute("attr3", "val3");
	CheckResult(daeElement::compare(*elt1, *elt2) < 0);

	return testResult(true);
}


DefineTest(writeCamera) {
	string memoryUri = "camera_create.dae";
	string file = getTmpFile("camera.dae");

	DAE dae;
	daeElement* elt = dae.addFile(memoryUri.c_str());
	CheckResult(elt);
	elt = elt->add("library_cameras camera optics technique_common perspective xfov");
	CheckResult(elt);
	elt->setCharData("1.0");

	CheckResult(dae.saveAsFile(file.c_str(), memoryUri.c_str()));
	domCOLLADA* root = dae.loadFile(file.c_str());
	CheckResult(root);
	CompareDocs(dae, memoryUri, file);
	CheckResult(toFloat(root->getDescendant("xfov")->getCharData()) == 1.0f);
	
	return testResult(true);
}


string getRoundTripFile(const string& name) {
	return getTmpFile(fs::basename(fs::path(name)) + "_roundTrip.dae");
}

bool roundTrip(const string& file) {
	DAE dae;
	if (!dae.loadFile(file.c_str()))
		return false;
	return dae.saveAsFile(getRoundTripFile(file).c_str(), file.c_str()) != NULL;
}

DefineTest(roundTripSeymour) {
	string file1 = lookupTestFile("Seymour.dae"),
	       file2 = getRoundTripFile(file1);
	DAE dae;
	CheckResult(dae.loadFile(file1.c_str()));
	CheckResult(dae.saveAsFile(file2.c_str(), file1.c_str()));
	CheckResult(dae.loadFile(file2.c_str()));
	CompareDocs(dae, file1, file2);
	return testResult(true);
}


DefineTest(rawSupport) {
	string seymourOrig = lookupTestFile("Seymour.dae"),
	       seymourRaw  = getTmpFile("Seymour_raw.dae");
	DAE dae;

	CheckResult(dae.loadFile(seymourOrig.c_str()));
	dae.getIOPlugin()->setOption("saveRawBinary", "true");
	CheckResult(dae.saveAsFile(seymourRaw.c_str(), seymourOrig.c_str()));

	// Make sure the .raw file is there
	CheckResult(fs::exists(fs::path(seymourRaw + ".raw")));

	daeElement* seymourRawRoot = dae.loadFile(seymourRaw.c_str());
	CheckResult(seymourRawRoot);
	CheckResult(dae.getDatabase()->idLookup("l_hip_rotateY_l_hip_rotateY_ANGLE-input",
	                                        seymourRawRoot->getDocument()));

	return testResult(true);
}

DefineTest(extraTypeTest) {
	DAE dae;
	string file = lookupTestFile("extraTest.dae");
	daeElement* root = dae.loadFile(file.c_str());
	CheckResult(root);

	daeElement *technique = root->getDescendant("technique"),
	           *expectedTypesElt = root->getDescendant("expected_types");
	CheckResult(technique && expectedTypesElt);

	istringstream expectedTypesStream(expectedTypesElt->getCharData());
	vector<string> expectedTypes;
	string tmp;
	while (expectedTypesStream >> tmp)
		expectedTypes.push_back(tmp);

	daeElementRefArray elements = technique->getChildren();

	CheckResult(expectedTypes.size() == elements.getCount()-1);
	for (size_t i = 0; i < elements.getCount()-1; i++) {
		ostringstream msg;
		msg << "Actual type - " << elements[i]->getTypeName() << ", Expected type - " << expectedTypes[i];
		CheckResultWithMsg(expectedTypes[i] == elements[i]->getTypeName(), msg.str());
	}

	return testResult(true);
}

#if defined(TINYXML)
#include <dae/daeTinyXMLPlugin.h>
DefineTest(tinyXmlLoad) {
	string seymourOrig = lookupTestFile("Seymour.dae"),
	       seymourTinyXml = getTmpFile("Seymour_tinyXml.dae");

	// Plan: Load Seymour with libxml, then save with TinyXml and immediately reload the
	// saved document, and make sure the results are the same.
	DAE dae;
	CheckResult(dae.loadFile(seymourOrig.c_str()));
	auto_ptr<daeTinyXMLPlugin> tinyXmlPlugin(new daeTinyXMLPlugin);
	dae.setIOPlugin(tinyXmlPlugin.get());
	CheckResult(dae.saveAsFile(seymourTinyXml.c_str(), seymourOrig.c_str()));
	CheckResult(dae.loadFile(seymourTinyXml.c_str()));
	CompareDocs(dae, seymourOrig, seymourTinyXml);

	return testResult(true);
}
#endif


string resolveResultToString(daeSIDResolver::ResolveState state) {
	switch(state) {
		case daeSIDResolver::target_empty: return "target empty"; break;
		case daeSIDResolver::target_loaded: return "target loaded"; break;
		case daeSIDResolver::sid_failed_not_found: return "failed"; break;
		case daeSIDResolver::sid_success_element: return "element"; break;
		case daeSIDResolver::sid_success_array: return "array"; break;
		case daeSIDResolver::sid_success_double: return "double"; break;
	}

	return "unknown error";
}

daeSIDResolver::ResolveState resolveSidToState(const string& sid, daeElement* container) {
	daeSIDResolver sidResolver(container, sid.c_str());
	sidResolver.getElement();
	return sidResolver.getState();
}

DefineTest(sidResolveTest) {
	DAE dae;
	daeElement* root = dae.loadFile(lookupTestFile("sidResolveTest.dae").c_str());
	CheckResult(root);
	daeDatabase& database = *dae.getDatabase();
	daeDocument* doc = root->getDocument();

	daeElement *effect = database.idLookup("myEffect", doc),
	           *effectExtra = database.idLookup("effectExtra", doc);
	CheckResult(effect && effectExtra);

	istringstream stream(effectExtra->getCharData());
	string sidRef, expectedResult;
	while (stream >> sidRef >> expectedResult) {
		string result = resolveResultToString(resolveSidToState(sidRef, effect));
		CheckResultWithMsg(result == expectedResult,
		                   string("sid ref=") + sidRef + ", expectedResult=" + expectedResult + ", actualResult=" + result);
	}

	daeElement* nodeSidRefExtra = database.idLookup("nodeSidRefExtra", doc);
	CheckResult(nodeSidRefExtra);

	stream.clear();
	stream.str(nodeSidRefExtra->getCharData());
	while (stream >> sidRef >> expectedResult) {
		string result = resolveResultToString(resolveSidToState(sidRef, root));
		CheckResultWithMsg(result == expectedResult,
		                   string("sid ref=") + sidRef + ", expectedResult=" + expectedResult + ", actualResult=" + result);
	}

	nodeSidRefExtra = database.idLookup("nodeSidRefExtra2", doc);
	CheckResult(nodeSidRefExtra);

	stream.clear();
	stream.str(nodeSidRefExtra->getCharData());
	while (stream >> sidRef >> expectedResult) {
		daeElement* elt = cdom::resolveSid(root, sidRef);
		string result = elt ? elt->getAttribute("id") : "failed";
		CheckResultWithMsg(result == expectedResult,
		                   string("sid ref=") + sidRef + ", expectedResult=" + expectedResult + ", actualResult=" + result);
	}

	nodeSidRefExtra = database.idLookup("nodeSidRefExtra3", doc);
	CheckResult(nodeSidRefExtra);

	stream.clear();
	stream.str(nodeSidRefExtra->getCharData());
	string profile;
	while (stream >> sidRef >> profile >> expectedResult) {
		daeElement* elt = cdom::resolveSid(root, sidRef, profile);
		string result = elt ? elt->getAttribute("id") : "failed";
		CheckResultWithMsg(result == expectedResult,
		                   string("sid ref=") + sidRef + ", profile=" + profile +
		                   ", expectedResult=" + expectedResult + ", actualResult=" + result);
	}


	return testResult(true);
}

daeElement* findChildByName(daeElement* el, daeString name) {
	if (!el)
		return 0;

	daeElementRefArray children = el->getChildren();
	for (size_t i = 0; i < children.getCount(); i++)
		if (strcmp(children[i]->getElementName(), name) == 0)
			return children[i];

	return 0;
}

daeElement* findAncestorByType(daeElement* el, daeString type) {
	if (el == 0  ||  strcmp(el->getTypeName(), type) == 0)
		return el;
	return findAncestorByType(el->getParentElement(), type);
}

daeElement* resolveID(daeString id, daeDocument& document) {
	return document.getDatabase()->idLookup(id, &document);
}

daeElement* resolveSid(const string& sid, daeElement& container) {
	daeSIDResolver sidResolver(&container, sid.c_str());
	return sidResolver.getElement();
}

string getCharData(daeElement* el) {
	return el ? el->getCharData() : "";
}

daeURI* getTextureUri(const string& samplerSid, daeElement& effect) {
	daeElement* sampler = findChildByName(resolveSid(samplerSid, effect), "sampler2D");
	string surfaceSid = getCharData(findChildByName(sampler, "source"));
	daeElement* surface = findChildByName(resolveSid(surfaceSid, effect), "surface");
	domImage* image = daeSafeCast<domImage>(
		resolveID(getCharData(findChildByName(surface, "init_from")).c_str(), *effect.getDocument()));
	if (image && image->getInit_from())
		return &image->getInit_from()->getValue();
	return 0;
}

DefineTest(getTexture) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("Seymour.dae").c_str()));

	daeElement* effect = dae.getDatabase()->idLookup("face-fx").at(0);
	daeElement* texture = effect->getDescendant("texture");
	CheckResult(texture);

	daeURI* uri = getTextureUri(texture->getAttribute("texture"), *effect);
	CheckResult(uri);
	CheckResult(string(uri->getFile()) == "boy_10.tga");

	return testResult(true);
}
	

DefineTest(removeElement) {
	DAE dae;
	daeElement* collada = dae.loadFile(lookupTestFile("Seymour.dae").c_str());
	CheckResult(collada);

	daeElement *animLib = dae.getDatabase()->typeLookup(domLibrary_animations::ID()).at(0),
	           *asset = dae.getDatabase()->typeLookup(domAsset::ID()).at(0);

	collada->removeChildElement(asset);
	daeElement::removeFromParent(animLib);

	CheckResult(collada->getDescendant("asset") == NULL);
	CheckResult(collada->getDescendant("library_animations") == NULL);

	CheckResult(dae.saveAsFile(getTmpFile("Seymour_removeElements.dae").c_str(),
	                           lookupTestFile("Seymour.dae").c_str()));
	return testResult(true);
}


void nameArraySet(domListOfNames& names, size_t index, const char* name) {
	*(daeStringRef*)&names[index] = name;
}

void nameArrayAppend(domListOfNames& names, const char* name) {
	names.append(NULL);
	nameArraySet(names, names.getCount()-1, name);
}

DefineTest(nameArray) {
	domListOfNames names;
	for (int i = 0; i < 10; i++)
		nameArrayAppend(names, (string("name") + toString(i)).c_str());
	for (int i = 0; i < 10; i++) {
		CheckResult(string("name") + toString(i) == names[i]);
	}
	
	return testResult(true);
}

daeTArray<int> makeIntArray(int i, ...) {
	va_list args;
	va_start(args, i);
	daeTArray<int> result;
	while (i != INT_MAX) {
		result.append(i);
		i = va_arg(args, int);
	}
	va_end(args);
	return result;
}

DefineTest(arrayOps) {
	daeTArray<int> zeroToFour = makeIntArray(0, 1, 2, 3, 4, INT_MAX);

	// Test removeIndex
	daeTArray<int> array = zeroToFour;
	array.removeIndex(2);
	CheckResult(array == makeIntArray(0, 1, 3, 4, INT_MAX));

	// Insert several values into the middle of an array
	array = zeroToFour;
	array.insert(3, 5, 9); // Insert five copies of '9' at the third element of the array
	CheckResult(array == makeIntArray(0, 1, 2, 9, 9, 9, 9, 9, 3, 4, INT_MAX));

	// Insert several values beyond the end of an array
	array = zeroToFour;
	array.insert(7, 2, 5);
	CheckResult(array == makeIntArray(0, 1, 2, 3, 4, 5, 5, 5, 5, INT_MAX));

	return testResult(true);
}


void printMemoryToStringResult(daeAtomicType& type, daeMemoryRef value) {
	ostringstream buffer;
	type.memoryToString(value, buffer);
	cout << buffer.str() << endl;
}

string toString(daeAtomicType& type, daeMemoryRef value) {
	ostringstream buffer;
	type.memoryToString(value, buffer);
	return buffer.str();
}

DefineTest(atomicTypeOps) {
	DAE dae;
	daeUIntType UIntType(dae);
	daeIntType IntType(dae);
	daeLongType LongType(dae);
	daeShortType ShortType(dae);
	daeULongType ULongType(dae);
	daeFloatType FloatType(dae);
	daeDoubleType DoubleType(dae);
	daeStringRefType StringRefType(dae);
	daeElementRefType ElementRefType(dae);
	daeEnumType EnumType(dae);
	daeResolverType ResolverType(dae);
	daeIDResolverType IDResolverType(dae);
	daeBoolType BoolType(dae);
	daeTokenType TokenType(dae);

	EnumType._values = new daeEnumArray;
	EnumType._strings = new daeStringRefArray;
	EnumType._values->append(0);
	EnumType._strings->append("myEnumValue");

	daeUInt UInt(1);
	daeInt Int(2);
	daeLong Long(3);
	daeShort Short(4);
	daeULong ULong(5);
	daeFloat Float(6.123f);
	daeDouble Double(7.456);
	daeStringRef StringRef("StringRef");
	//	daeElementRef ElementRef(0x12345678);
	daeEnum Enum(0);
	daeURI uri(dae, "http://www.example.com/#fragment");
	daeIDRef IDRef("sampleID");
	daeBool Bool(false);
	daeStringRef Token("token");

	
	CheckResult(toString(UIntType, (daeMemoryRef)&UInt) == "1");
	CheckResult(toString(IntType, (daeMemoryRef)&Int) == "2");
	CheckResult(toString(LongType, (daeMemoryRef)&Long) == "3");
	CheckResult(toString(ShortType, (daeMemoryRef)&Short) == "4");
	CheckResult(toString(ULongType, (daeMemoryRef)&ULong) == "5");
	CheckResult(toString(FloatType, (daeMemoryRef)&Float) == "6.123");
	CheckResult(toString(DoubleType, (daeMemoryRef)&Double) == "7.456");
	CheckResult(toString(StringRefType, (daeMemoryRef)&StringRef) == "StringRef");
	//	CheckResult(toString(ElementRefType, (daeMemoryRef)&ElementRef) == "");
	CheckResult(toString(EnumType, (daeMemoryRef)&Enum) == "myEnumValue");
	CheckResult(toString(ResolverType, (daeMemoryRef)&uri) == "http://www.example.com/#fragment");
	CheckResult(toString(IDResolverType, (daeMemoryRef)&IDRef) == "sampleID");
	CheckResult(toString(BoolType, (daeMemoryRef)&Bool) == "false");
	CheckResult(toString(TokenType, (daeMemoryRef)&Token) == "token");

	return testResult(true);
}


DefineTest(clone) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("Seymour.dae").c_str()));

	daeElement* el = dae.getDatabase()->idLookup("l_ulna").at(0);
	daeElementRef clone = el->clone("-foo", "-bar");
	el->getParentElement()->placeElement(clone);

	CheckResult(dae.saveAsFile(getTmpFile("cloneTest.dae").c_str(),
	                           lookupTestFile("Seymour.dae").c_str()));

	return testResult(true);
}


DefineTest(genericOps) {
	string file = lookupTestFile("cube.dae");
	DAE dae;
	CheckResult(dae.loadFile(file.c_str()));
	daeDatabase& database = *dae.getDatabase();

	// Attribute getter/setter tests
	daeElement* el = database.idLookup("box-lib-positions-array").at(0);

	CheckResult(el->hasAttribute("digits"));
 	CheckResult(el->getAttribute("count") == "24");
	CheckResult(el->setAttribute("blah", "hey") == false);
	CheckResult(el->setAttribute("magnitude", "30"));

	el = database.idLookup("Blue-fx").at(0);
	CheckResult(el->hasAttribute("name"));
	CheckResult(el->isAttributeSet("name") == false);
	CheckResult(el->isAttributeSet("hello") == false);

	// Character data getter/setter tests
	el = database.typeLookup(domAsset::domUp_axis::ID()).at(0);

	CheckResult(el->getCharData() == "Y_UP");
	el->setCharData("X_UP");

	el = database.idLookup("PerspCamera").at(0);
	CheckResult(!el->hasCharData());

	// <extra> tests using daeElement interface
	el = database.idLookup("my_test_element").at(0);
 	daeElementRef clone = el->clone("-clone", "-clone");

	CheckResult(el->getAttribute("attr1") == "value1" &&
	            el->getAttribute("attr2") == "value2");
	CheckResult(el->setAttribute("attr1", "value_1"));
	CheckResult(el->setAttribute("attr3", "value3"));
	
	CheckResult(chopWS(el->getCharData()) == "this is some text");
	el->setCharData("reset text");

	// <extra> tests using domAny interface
	el->getParentElement()->placeElementAfter(el, clone);
	domAny* any = (domAny*)clone.cast();
	CheckResult(any);
	CheckResult(any->getAttributeCount() == 3);
	CheckResult(string(any->getAttributeName(0)) == "id");
	CheckResult(string(any->getAttributeValue(1)) == "value1");
	CheckResult(chopWS(any->getValue()) == "this is some text");
	any->setValue("reset text 2");

	// Test for lots of attributes
 	for (size_t i = 0; i < 50; i++) {
		ostringstream name, value;
		name << "attr" << static_cast<unsigned int>(i);
		value << "value" << static_cast<unsigned int>(i);
		any->setAttribute(name.str().c_str(), value.str().c_str());
	}

	CheckResult(dae.saveAsFile(getTmpFile(fs::basename(fs::path(file)) + "_genericOps.dae").c_str(),
	                           file.c_str()));

	return testResult(true);
}


daeArray* getSkewArray(daeElement* node, const string& sid) {
	if (!node)
		return NULL;
	
	daeElement* skew = resolveSid(sid, *node);
	if (!skew || skew->getElementType() != COLLADA_TYPE::SKEW)
		return NULL;

	return (daeArray*)skew->getCharDataObject()->get(skew);
}

DefineTest(badSkew) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("badSkew.dae").c_str()));

	daeElement* node = dae.getDatabase()->idLookup("my-node").at(0);

	daeArray* array1 = getSkewArray(node, "tooFew");
	daeArray* array2 = getSkewArray(node, "justRight");
	daeArray* array3 = getSkewArray(node, "tooMany");
	CheckResult(array1 && array2 && array3);

	CheckResult(array1->getCount() == 4);
	CheckResult(array2->getCount() == 7);
	CheckResult(array3->getCount() == 11);
	
	return testResult(true);
}


DefineTest(stringTable) {
	daeStringTable stringTable;
	stringTable.allocString("hello");
	// These next two lines used to cause an abort
	stringTable.clear(); 
	stringTable.allocString("goodbye");
	return testResult(true);
}


// We can only do this test if we have breps
#if 0
DefineTest(sidResolveSpeed) {
	DAE dae;
	string file = lookupTestFile("crankarm.dae");
	domCOLLADA* root = dae.loadFile(file.c_str());
	CheckResult(root);

	vector<domSIDREF_array*> sidRefArrays = dae.getDatabase()->typeLookup<domSIDREF_array>();
	for (size_t i = 0; i < sidRefArrays.size(); i++) {
		domListOfNames& sidRefs = sidRefArrays[i]->getValue();
		for (size_t j = 0; j < sidRefs.getCount(); j++) {
			CheckResult(cdom::resolveSid(root, sidRefs[i]));
		}
	}

	return testResult(true);
}
#endif


DefineTest(seymourSidResolve) {
	DAE dae;
	string file = lookupTestFile("Seymour.dae");
	CheckResult(dae.loadFile(file.c_str()));

	vector<daeElement*> nodes = dae.getDatabase()->typeLookup(domNode::ID());
	for (size_t i = 0; i < nodes.size(); i++) {
		daeElementRefArray children = nodes[i]->getChildren();
		for (size_t j = 0; j < children.getCount(); j++) {
			string sid = children[j]->getAttribute("sid");
			if (!sid.empty()) {
				CheckResult(cdom::resolveSid(nodes[i], sid));
			}
		}
	}

	return testResult(true);
}


vector<string> getChildNames(daeElement* elt) {
	vector<string> result;
	if (!elt)
		return result;

	daeElementRefArray children = elt->getChildren();
	for (size_t i = 0; i < children.getCount(); i++)
		result.push_back(children[i]->getElementName());

	return result;
}

DefineTest(placeElement) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("cube.dae").c_str()));

	daeElement* node = dae.getDatabase()->idLookup("Box").at(0);

	CheckResult(getChildNames(node) == makeStringArray(
		"rotate", "rotate", "rotate", "instance_geometry", 0));

	// Place a new <translate> after the first <rotate> using placeElementAfter, and
	// make sure the <translate> shows up in the right spot.
	node->placeElementAfter(node->getChildren()[0], node->createElement("translate"));
	CheckResult(getChildNames(node) == makeStringArray(
		"rotate", "translate", "rotate", "rotate", "instance_geometry", 0));

	node->placeElementBefore(node->getChildren()[0], node->createElement("scale"));
	CheckResult(getChildNames(node) == makeStringArray(
		"scale", "rotate", "translate", "rotate", "rotate", "instance_geometry", 0));

	return testResult(true);
};


DefineTest(uriConversion) {
	// Windows file path to URI
	CheckResult(cdom::filePathToUri("C:\\myFolder\\myFile.dae") == "/C:/myFolder/myFile.dae");
	CheckResult(cdom::filePathToUri("\\myFolder\\myFile.dae") == "file:////myFolder/myFile.dae");
	CheckResult(cdom::filePathToUri("..\\myFolder\\myFile.dae") == "../myFolder/myFile.dae");
	CheckResult(cdom::filePathToUri("\\\\otherComputer\\myFile.dae") == "file://///otherComputer/myFile.dae");

	// Linux/Mac file path to URI
	CheckResult(cdom::filePathToUri("/myFolder/myFile.dae") == "/myFolder/myFile.dae");
	CheckResult(cdom::filePathToUri("../myFolder/myFile.dae") == "../myFolder/myFile.dae");
	CheckResult(cdom::filePathToUri("/my folder/my file.dae") == "/my%20folder/my%20file.dae");

#ifdef WIN32
	// URI to Windows file path
	CheckResult(cdom::uriToFilePath("../folder/file.dae") == "..\\folder\\file.dae");
	CheckResult(cdom::uriToFilePath("file:///C:/folder/file.dae") == "C:\\folder\\file.dae");
	CheckResult(cdom::uriToFilePath("file://///otherComputer/file.dae") == "\\\\otherComputer\\file.dae");
	CheckResult(cdom::uriToFilePath("http://www.slashdot.org") == "");
#else
	// URI to Linux/Mac file path
	CheckResult(cdom::uriToFilePath("../folder/file.dae") == "../folder/file.dae");
	CheckResult(cdom::uriToFilePath("file:///folder/file.dae") == "/folder/file.dae");
	CheckResult(cdom::uriToFilePath("http://www.slashdot.org") == "");
#endif

	return testResult(true);
}


DefineTest(makeRelativeTo) {
	DAE dae;
	daeURI uri1(dae, "myFolder/myFile.dae");
	daeURI uri2(dae, "myFolder/myFile.dae");
	uri1.makeRelativeTo(&uri2);
	return testResult(true);
}


DefineTest(xmlNavigation) {
	DAE dae;
	string file = lookupTestFile("cube.dae");
	domCOLLADA* root = dae.loadFile(file.c_str());
	CheckResult(root);

	CheckResult(root->getChild("library_cameras"));
	CheckResult(root->getChild("contributor") == 0);
	CheckResult(root->getDescendant("steveT") == 0);
	daeElement* upAxis = root->getDescendant("up_axis");
	CheckResult(upAxis);
	CheckResult(upAxis->getParent());
	CheckResult(upAxis->getAncestor("asset"));
	CheckResult(upAxis->getAncestor("library_geometries") == 0);

	CheckResult(root->getChild(daeElement::matchType(domLibrary_cameras::ID())));
	CheckResult(root->getChild(daeElement::matchType(domAsset::domContributor::ID())) == 0);
	CheckResult(root->getDescendant(daeElement::matchType(-10)) == 0);
	upAxis = root->getDescendant(daeElement::matchType(domAsset::domUp_axis::ID()));
	CheckResult(upAxis);
	CheckResult(upAxis->getParent());
	CheckResult(upAxis->getAncestor(daeElement::matchType(domAsset::ID())));
	CheckResult(upAxis->getAncestor(daeElement::matchType(domLibrary_geometries::ID())) == 0);

	return testResult(true);
}


DefineTest(multipleDae) {
	// Basically we just want to make sure that having multiple DAE objects doesn't
	// crash the DOM.
	DAE dae1;
	DAE dae2;
	CheckResult(dae2.loadFile(lookupTestFile("cube.dae").c_str()));
	CheckResult(dae1.loadFile(lookupTestFile("duck.dae").c_str()));
	return testResult(true);
}


DefineTest(unusedTypeCheck) {
	DAE dae;

	// The following types are defined in the schema but aren't used anywhere in
	// Collada, so they should have a null meta entry:
	//   ellipsoid
	//   ellipsoid/size
	//   InputGlobal
	// Also, <any> doesn't use a single global meta, so it'll also show up in the
	// set of elements that don't have metas.
	set<int> expectedUnusedTypes;
	expectedUnusedTypes.insert(domEllipsoid::ID());
	expectedUnusedTypes.insert(domEllipsoid::domSize::ID());
	expectedUnusedTypes.insert(domInputGlobal::ID());
	expectedUnusedTypes.insert(domAny::ID());

	// Collect the list of types that don't have a corresponding meta defined
	set<int> actualUnusedTypes;
	const daeMetaElementRefArray &metas = dae.getAllMetas();
	for (size_t i = 0; i < metas.getCount(); i++)
		if (!metas[i])
			actualUnusedTypes.insert((int)i);

	// Make sure the set of unused types matches what we expect
	return testResult(expectedUnusedTypes == actualUnusedTypes);
}


DefineTest(domCommon_transparent_type) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("cube.dae").c_str()));

	domCommon_transparent_type* transparent =
		dae.getDatabase()->typeLookup<domCommon_transparent_type>().at(0);

	CheckResult(transparent->getColor() != NULL);
	CheckResult(transparent->getParam() == NULL);
	CheckResult(transparent->getTexture() == NULL);
	CheckResult(transparent->getOpaque() == FX_OPAQUE_ENUM_A_ONE);

	return testResult(true);
};


DefineTest(autoResolve) {
	// When you load a document, daeIDRefs, xsIDREFS, and daeURIs should resolve automatically.
	// Make sure that works properly.
	DAE dae;
	daeDatabase& database = *dae.getDatabase();
	CheckResult(dae.loadFile(lookupTestFile("Seymour.dae").c_str()));

	{
		// Make sure the IDREF_array element had all its daeIDRef objects resolved
		xsIDREFS& idRefs = database.typeLookup<domIDREF_array>().at(0)->getValue();
		for (size_t i = 0; i < idRefs.getCount(); i++) {
			CheckResult(idRefs[i].getElement());
		}

		domInstance_controller& ic = *database.typeLookup<domInstance_controller>().at(0);
		CheckResult(ic.getUrl().getElement());

		domFx_surface_init_from_common& initFrom =
			*database.typeLookup<domFx_surface_init_from_common>().at(0);
		CheckResult(initFrom.getValue().getElement());
	}

	// When you're modifying a new document or creating a new one and you create some
	// new ID or URI refs, they should resolve automatically.
	dae.clear();
	domCOLLADA* root = dae.addFile("tmp.dae");
	CheckResult(root);

	// Create a <geometry> with an <IDREF_array>
	CheckResult(root->add("library_geometries geometry mesh source IDREF_array"));
	daeElement* geom = root->getDescendant("geometry");
	geom->setAttribute("id", "myGeom");
	xsIDREFS& idRefs = database.typeLookup<domIDREF_array>().at(0)->getValue();
	idRefs.append(daeIDRef("myGeom"));

	// Create a <library_nodes> with a <node> that we'll instantiate via <instance_node>
	daeElement* node1 = root->add("library_nodes node");
	node1->setAttribute("id", "myNode");

	// Create a <node> with an <instance_geometry> and <instance_node> to test URIs
	daeElement* node2 = root->getDescendant("library_nodes")->add("node");
	domInstance_node& instanceNode = *daeSafeCast<domInstance_node>(node2->add("instance_node"));
	domInstance_geometry& instanceGeom = *daeSafeCast<domInstance_geometry>(
		node2->add("instance_geometry"));
	instanceNode.setUrl("#myNode");
	instanceGeom.setUrl("#myGeom");

	// Create a <surface> with an <init_from> to test ID refs
	domFx_surface_init_from_common& initFrom = *daeSafeCast<domFx_surface_init_from_common>(
		root->add("library_effects effect profile_COMMON newparam surface init_from"));
	initFrom.setValue("myGeom");

	// Make sure everything resolves automatically
	CheckResult(idRefs[0].getElement() == geom);
	CheckResult(instanceGeom.getUrl().getElement() == geom);
	CheckResult(initFrom.getValue().getElement() == geom);
	CheckResult(instanceNode.getUrl().getElement() == node1);

	return testResult(true);
}


DefineTest(baseURI) {
	DAE dae1, dae2;
	dae1.setBaseURI("http://www.example.com/");
	daeURI uri1(dae1, "myFolder/myFile.dae");
	daeURI uri2(dae2, "myFolder/myFile.dae");
	CheckResult(string(uri1.getURI()) != uri2.getURI());
	CheckResult(string(uri1.getURI()) == "http://www.example.com/myFolder/myFile.dae");
	return testResult(true);
}


DefineTest(databaseLookup) {
	DAE dae;
	CheckResult(dae.loadFile(lookupTestFile("cube.dae").c_str()));
	daeDatabase& database = *dae.getDatabase();
	daeDocument* doc = database.getDoc(0);
	CheckResult(doc);

	// Test the new functions
	CheckResult(database.idLookup("light-lib").size() == 1);
	CheckResult(database.idLookup("light-lib", doc));
	CheckResult(database.typeLookup(domNode::ID()).size() == 5);
	vector<daeElement*> elts;
	database.typeLookup(domRotate::ID(), elts, doc);
	CheckResult(elts.size() == 15);
	CheckResult(database.typeLookup<domNode>().size() == 5);
	vector<domRotate*> rotateElts;
	database.typeLookup(rotateElts);
	CheckResult(rotateElts.size() == 15);

	// Test the old functions
	CheckResult(database.getElementCount("light-lib") == 1);
	daeElement* elt = NULL;
	database.getElement(&elt, 0, "light-lib", NULL, doc->getDocumentURI()->getURI());
	CheckResult(elt);
	CheckResult(database.getElementCount(NULL, "node") == 5);
	database.getElement(&elt, 8, NULL, "rotate");
	CheckResult(elt);
	
	return testResult(true);
}


// DefineTest(hauntedHouse) {
// 	DAE dae;
// 	CheckResult(dae.loadFile("/home/sthomas/models/hauntedHouse.dae"));
// 	return testResult(true);
// }


// Returns true if all test names are valid
bool checkTests(const set<string>& tests) {
	bool invalidTestFound = false;
	for (set<string>::const_iterator iter = tests.begin(); iter != tests.end(); iter++) {
		if (registeredTests().find(*iter) == registeredTests().end()) {
			if (!invalidTestFound)
				cout << "Invalid arguments:\n";
			cout << "  " << *iter << endl;
			invalidTestFound = true;
		}
	}

	return !invalidTestFound;
}

// Returns the set of tests that failed
map<string, testResult> runTests(const set<string>& tests) {
	map<string, testResult> failedTests;
	for (set<string>::const_iterator iter = tests.begin(); iter != tests.end(); iter++) {
		testResult result = registeredTests()[*iter]->run();
		if (!result.passed)
			failedTests[*iter] = result;
	}
	return failedTests;
}

// Prints test results to the console.
// Returns true if all tests passed, false otherwise.
bool printTestResults(const map<string, testResult>& failedTests) {
	if (!failedTests.empty()) {
		cout << "Failed tests:\n";
		for (map<string, testResult>::const_iterator iter = failedTests.begin();
		     iter != failedTests.end();
		     iter++) {
			cout << "    " << iter->first;
			if (!iter->second.file.empty()) {
				cout << " (file " << fs::path(iter->second.file).leaf();
				if (iter->second.line != -1)
					cout << ", line " << iter->second.line << ")";
				else
					cout << ")";
			}
			cout << endl;
			if (!iter->second.msg.empty()) // Make sure to indent the message
				cout << "        " << replace(iter->second.msg, "\n", "\n        ") << "\n";
		}
		return false;
	}
	else {
		cout << "All tests passed.\n";
		return true;
	}
}

struct tmpDir {
	fs::path path;
	bool deleteWhenDone;
	
	tmpDir(fs::path& path, bool deleteWhenDone)
		: path(path),
			deleteWhenDone(deleteWhenDone) {
		fs::create_directories(path);
	}

	~tmpDir() {
		if (deleteWhenDone)
			fs::remove_all(path);
	}
};


int main(int argc, char* argv[]) {
	if (argc == 1) {
		cout << "Usage:\n"
		        "  -printTests - Print the names of all available tests\n"
		        "  -all - Run all tests\n"
		        "  -leaveTmpFiles - Don't delete the tmp folder containing the generated test files\n"
		        "  test1 test2 ... - Run the named tests\n";
		return 0;
	}

	bool printTests = false;
	bool allTests = false;
	bool leaveTmpFiles = false;
	set<string> tests;
	for (int i = 1; i < argc; i++) {
		if (string(argv[i]) == "-printTests")
			printTests = true;
		else if (string(argv[i]) == "-all")
			allTests = true;
		else if (string(argv[i]) == "-leaveTmpFiles")
			leaveTmpFiles = true;
		else
			tests.insert(argv[i]);
	}

#ifdef __CELLOS_LV2__
	// The program crashes on PS3 if we try to delete the tmp directory when we're done.
	// That shouldn't be the case, but it's really not worth trying to fix it now.
	// Just leave the tmp folder.
	leaveTmpFiles = true;
#endif

	// Shut the DOM up
	daeErrorHandler::setErrorHandler(&quietErrorHandler::getInstance());

	dataPath() = (fs::path(argv[0]).branch_path()/"../../test/data/").normalize();
	tmpPath() = dataPath() / "tmp";
	tmpDir tmp(tmpPath(), !leaveTmpFiles);

	if (checkTests(tests) == false)
		return 0;

	// -printTest
	if (printTests) {
		map<string, domTest*>::iterator iter;
		for (iter = registeredTests().begin(); iter != registeredTests().end(); iter++)
			cout << iter->second->name << endl;
		return 0;
	}

	// -all
	if (allTests) {
		map<string, domTest*>::iterator iter;
		for (iter = registeredTests().begin(); iter != registeredTests().end(); iter++)
			tests.insert(iter->first);
	}

	// test1 test2 ...
 	return printTestResults(runTests(tests)) ? 0 : 1;
}
