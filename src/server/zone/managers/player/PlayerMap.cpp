/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/managers/player/PlayerMap.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../objects/player/Player.h"

#include "PlayerMap.h"

#include "PlayerMapImplementation.h"

/*
 *	PlayerMapStub
 */

PlayerMap::PlayerMap() : ORBObjectStub(NULL) {
}

PlayerMap::PlayerMap(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

PlayerMap::PlayerMap(PlayerMap& ref) : ORBObjectStub(ref) {
}

PlayerMap::~PlayerMap() {
}

PlayerMap* PlayerMap::clone() {
	return new PlayerMap(*this);
}


Player* PlayerMap::put(string& name, Player* player, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addAsciiParameter(name);
		invocation.addObjectParameter(player);
		invocation.addBooleanParameter(doLock);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->put(name, player, doLock);
}

Player* PlayerMap::get(string& name, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addAsciiParameter(name);
		invocation.addBooleanParameter(doLock);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->get(name, doLock);
}

Player* PlayerMap::remove(string& name, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addAsciiParameter(name);
		invocation.addBooleanParameter(doLock);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->remove(name, doLock);
}

int PlayerMap::size() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->size();
}

Player* PlayerMap::getNextValue(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addBooleanParameter(doLock);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->getNextValue(doLock);
}

bool PlayerMap::hasNext(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addBooleanParameter(doLock);

		return invocation.executeWithBooleanReturn();
	} else
		return ((PlayerMapImplementation*) _impl)->hasNext(doLock);
}

void PlayerMap::resetIterator(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((PlayerMapImplementation*) _impl)->resetIterator(doLock);
}

void PlayerMap::lock() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		invocation.executeWithVoidReturn();
	} else
		((PlayerMapImplementation*) _impl)->lock();
}

void PlayerMap::unlock() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		invocation.executeWithVoidReturn();
	} else
		((PlayerMapImplementation*) _impl)->unlock();
}

/*
 *	PlayerMapAdapter
 */

PlayerMapAdapter::PlayerMapAdapter(PlayerMapImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* PlayerMapAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(put(inv->getAsciiParameter(_param0_put__string_Player_bool_), (Player*) inv->getObjectParameter(), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 7:
		resp->insertLong(get(inv->getAsciiParameter(_param0_get__string_bool_), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 8:
		resp->insertLong(remove(inv->getAsciiParameter(_param0_remove__string_bool_), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 9:
		resp->insertSignedInt(size());
		break;
	case 10:
		resp->insertLong(getNextValue(inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 11:
		resp->insertBoolean(hasNext(inv->getBooleanParameter()));
		break;
	case 12:
		resetIterator(inv->getBooleanParameter());
		break;
	case 13:
		lock();
		break;
	case 14:
		unlock();
		break;
	default:
		return NULL;
	}

	return resp;
}

Player* PlayerMapAdapter::put(string& name, Player* player, bool doLock) {
	return ((PlayerMapImplementation*) impl)->put(name, player, doLock);
}

Player* PlayerMapAdapter::get(string& name, bool doLock) {
	return ((PlayerMapImplementation*) impl)->get(name, doLock);
}

Player* PlayerMapAdapter::remove(string& name, bool doLock) {
	return ((PlayerMapImplementation*) impl)->remove(name, doLock);
}

int PlayerMapAdapter::size() {
	return ((PlayerMapImplementation*) impl)->size();
}

Player* PlayerMapAdapter::getNextValue(bool doLock) {
	return ((PlayerMapImplementation*) impl)->getNextValue(doLock);
}

bool PlayerMapAdapter::hasNext(bool doLock) {
	return ((PlayerMapImplementation*) impl)->hasNext(doLock);
}

void PlayerMapAdapter::resetIterator(bool doLock) {
	return ((PlayerMapImplementation*) impl)->resetIterator(doLock);
}

void PlayerMapAdapter::lock() {
	return ((PlayerMapImplementation*) impl)->lock();
}

void PlayerMapAdapter::unlock() {
	return ((PlayerMapImplementation*) impl)->unlock();
}

/*
 *	PlayerMapHelper
 */

PlayerMapHelper::PlayerMapHelper() {
	className = "PlayerMap";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void PlayerMapHelper::finalizeHelper() {
	PlayerMapHelper::finalize();
}

ORBObject* PlayerMapHelper::instantiateObject() {
	return new PlayerMap();
}

ORBObjectAdapter* PlayerMapHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new PlayerMapAdapter((PlayerMapImplementation*) obj);

	ORBObjectStub* stub = new PlayerMap(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	PlayerMapServant
 */

PlayerMapServant::PlayerMapServant() {
	_classHelper = PlayerMapHelper::instance();
}

PlayerMapServant::~PlayerMapServant() {
}

void PlayerMapServant::_setStub(ORBObjectStub* stub) {
	_this = (PlayerMap*) stub;
}

ORBObjectStub* PlayerMapServant::_getStub() {
	return _this;
}

