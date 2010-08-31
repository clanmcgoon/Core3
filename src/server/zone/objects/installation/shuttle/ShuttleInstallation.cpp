/*
 *	server/zone/objects/installation/shuttle/ShuttleInstallation.cpp generated by engine3 IDL compiler 0.60
 */

#include "ShuttleInstallation.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

#include "server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.h"

#include "server/zone/objects/tangible/terminal/travel/TravelTerminal.h"

/*
 *	ShuttleInstallationStub
 */

ShuttleInstallation::ShuttleInstallation() : InstallationObject(DummyConstructorParameter::instance()) {
	_impl = new ShuttleInstallationImplementation();
	_impl->_setStub(this);
}

ShuttleInstallation::ShuttleInstallation(DummyConstructorParameter* param) : InstallationObject(param) {
}

ShuttleInstallation::~ShuttleInstallation() {
}


void ShuttleInstallation::insertToZone(Zone* zone) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		((ShuttleInstallationImplementation*) _impl)->insertToZone(zone);
}

void ShuttleInstallation::spawnShuttleObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ShuttleInstallationImplementation*) _impl)->spawnShuttleObjects();
}

bool ShuttleInstallation::checkRequisitesForPlacement(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((ShuttleInstallationImplementation*) _impl)->checkRequisitesForPlacement(player);
}

/*
 *	ShuttleInstallationImplementation
 */

ShuttleInstallationImplementation::ShuttleInstallationImplementation(DummyConstructorParameter* param) : InstallationObjectImplementation(param) {
	_initializeImplementation();
}


ShuttleInstallationImplementation::~ShuttleInstallationImplementation() {
}


void ShuttleInstallationImplementation::finalize() {
}

void ShuttleInstallationImplementation::_initializeImplementation() {
	_setClassHelper(ShuttleInstallationHelper::instance());

	_serializationHelperMethod();
}

void ShuttleInstallationImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ShuttleInstallation*) stub;
	InstallationObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ShuttleInstallationImplementation::_getStub() {
	return _this;
}

ShuttleInstallationImplementation::operator const ShuttleInstallation*() {
	return _this;
}

void ShuttleInstallationImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ShuttleInstallationImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ShuttleInstallationImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ShuttleInstallationImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ShuttleInstallationImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ShuttleInstallationImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ShuttleInstallationImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ShuttleInstallationImplementation::_serializationHelperMethod() {
	InstallationObjectImplementation::_serializationHelperMethod();

	_setClassName("ShuttleInstallation");

	addSerializableVariable("shuttle", &shuttle);
	addSerializableVariable("ticketCollector", &ticketCollector);
	addSerializableVariable("travelTerminal", &travelTerminal);
}

ShuttleInstallationImplementation::ShuttleInstallationImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/shuttle/ShuttleInstallation.idl(70):  		setLoggingName("ShuttleInstallation");
	setLoggingName("ShuttleInstallation");
}

void ShuttleInstallationImplementation::insertToZone(Zone* zone) {
	// server/zone/objects/installation/shuttle/ShuttleInstallation.idl(80):  		super.insertToZone(zone);
	InstallationObjectImplementation::insertToZone(zone);
	// server/zone/objects/installation/shuttle/ShuttleInstallation.idl(82):  		spawnShuttleObjects();
	spawnShuttleObjects();
}

/*
 *	ShuttleInstallationAdapter
 */

ShuttleInstallationAdapter::ShuttleInstallationAdapter(ShuttleInstallationImplementation* obj) : InstallationObjectAdapter(obj) {
}

Packet* ShuttleInstallationAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 7:
		spawnShuttleObjects();
		break;
	case 8:
		resp->insertBoolean(checkRequisitesForPlacement((PlayerCreature*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ShuttleInstallationAdapter::insertToZone(Zone* zone) {
	((ShuttleInstallationImplementation*) impl)->insertToZone(zone);
}

void ShuttleInstallationAdapter::spawnShuttleObjects() {
	((ShuttleInstallationImplementation*) impl)->spawnShuttleObjects();
}

bool ShuttleInstallationAdapter::checkRequisitesForPlacement(PlayerCreature* player) {
	return ((ShuttleInstallationImplementation*) impl)->checkRequisitesForPlacement(player);
}

/*
 *	ShuttleInstallationHelper
 */

ShuttleInstallationHelper* ShuttleInstallationHelper::staticInitializer = ShuttleInstallationHelper::instance();

ShuttleInstallationHelper::ShuttleInstallationHelper() {
	className = "ShuttleInstallation";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ShuttleInstallationHelper::finalizeHelper() {
	ShuttleInstallationHelper::finalize();
}

DistributedObject* ShuttleInstallationHelper::instantiateObject() {
	return new ShuttleInstallation(DummyConstructorParameter::instance());
}

DistributedObjectServant* ShuttleInstallationHelper::instantiateServant() {
	return new ShuttleInstallationImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ShuttleInstallationHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ShuttleInstallationAdapter((ShuttleInstallationImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

