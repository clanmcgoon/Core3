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
 *	server/zone/objects/group/GroupObject.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../../../chat/room/ChatRoom.h"

#include "GroupObject.h"

#include "GroupObjectImplementation.h"

/*
 *	GroupObjectStub
 */

GroupObject::GroupObject() : SceneObject(NULL) {
}

GroupObject::GroupObject(ORBObjectServant* obj) : SceneObject(obj) {
}

GroupObject::GroupObject(GroupObject& ref) : SceneObject(ref) {
}

GroupObject::~GroupObject() {
}

GroupObject* GroupObject::clone() {
	return new GroupObject(*this);
}


void GroupObject::sendTo(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->sendTo(player);
}

void GroupObject::broadcastMessage(BaseMessage* msg) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(msg);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->broadcastMessage(msg);
}

void GroupObject::addPlayer(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->addPlayer(player);
}

void GroupObject::removePlayer(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->removePlayer(player);
}

void GroupObject::disband() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->disband();
}

void GroupObject::makeLeader(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->makeLeader(player);
}

bool GroupObject::hasMember(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addObjectParameter(player);

		return invocation.executeWithBooleanReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->hasMember(player);
}

void GroupObject::startChannel() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->startChannel();
}

ChatRoom* GroupObject::getGroupChannel() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return (ChatRoom*) invocation.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupChannel();
}

int GroupObject::getListSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getListSize();
}

int GroupObject::getGroupSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupSize();
}

Player* GroupObject::getGroupMember(int index) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);
		invocation.addSignedIntParameter(index);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupMember(index);
}

void GroupObject::addMember(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->addMember(player);
}

Player* GroupObject::getLeader() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return (Player*) invocation.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getLeader();
}

unsigned int GroupObject::getListCount() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getListCount();
}

unsigned int GroupObject::getNewListCount(int cnt) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);
		invocation.addSignedIntParameter(cnt);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getNewListCount(cnt);
}

/*
 *	GroupObjectAdapter
 */

GroupObjectAdapter::GroupObjectAdapter(GroupObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* GroupObjectAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((Player*) inv->getObjectParameter());
		break;
	case 7:
		broadcastMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 8:
		addPlayer((Player*) inv->getObjectParameter());
		break;
	case 9:
		removePlayer((Player*) inv->getObjectParameter());
		break;
	case 10:
		disband();
		break;
	case 11:
		makeLeader((Player*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertBoolean(hasMember((Player*) inv->getObjectParameter()));
		break;
	case 13:
		startChannel();
		break;
	case 14:
		resp->insertLong(getGroupChannel()->_getORBObjectID());
		break;
	case 15:
		resp->insertSignedInt(getListSize());
		break;
	case 16:
		resp->insertSignedInt(getGroupSize());
		break;
	case 17:
		resp->insertLong(getGroupMember(inv->getSignedIntParameter())->_getORBObjectID());
		break;
	case 18:
		addMember((Player*) inv->getObjectParameter());
		break;
	case 19:
		resp->insertLong(getLeader()->_getORBObjectID());
		break;
	case 20:
		resp->insertInt(getListCount());
		break;
	case 21:
		resp->insertInt(getNewListCount(inv->getSignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void GroupObjectAdapter::sendTo(Player* player) {
	return ((GroupObjectImplementation*) impl)->sendTo(player);
}

void GroupObjectAdapter::broadcastMessage(BaseMessage* msg) {
	return ((GroupObjectImplementation*) impl)->broadcastMessage(msg);
}

void GroupObjectAdapter::addPlayer(Player* player) {
	return ((GroupObjectImplementation*) impl)->addPlayer(player);
}

void GroupObjectAdapter::removePlayer(Player* player) {
	return ((GroupObjectImplementation*) impl)->removePlayer(player);
}

void GroupObjectAdapter::disband() {
	return ((GroupObjectImplementation*) impl)->disband();
}

void GroupObjectAdapter::makeLeader(Player* player) {
	return ((GroupObjectImplementation*) impl)->makeLeader(player);
}

bool GroupObjectAdapter::hasMember(Player* player) {
	return ((GroupObjectImplementation*) impl)->hasMember(player);
}

void GroupObjectAdapter::startChannel() {
	return ((GroupObjectImplementation*) impl)->startChannel();
}

ChatRoom* GroupObjectAdapter::getGroupChannel() {
	return ((GroupObjectImplementation*) impl)->getGroupChannel();
}

int GroupObjectAdapter::getListSize() {
	return ((GroupObjectImplementation*) impl)->getListSize();
}

int GroupObjectAdapter::getGroupSize() {
	return ((GroupObjectImplementation*) impl)->getGroupSize();
}

Player* GroupObjectAdapter::getGroupMember(int index) {
	return ((GroupObjectImplementation*) impl)->getGroupMember(index);
}

void GroupObjectAdapter::addMember(Player* player) {
	return ((GroupObjectImplementation*) impl)->addMember(player);
}

Player* GroupObjectAdapter::getLeader() {
	return ((GroupObjectImplementation*) impl)->getLeader();
}

unsigned int GroupObjectAdapter::getListCount() {
	return ((GroupObjectImplementation*) impl)->getListCount();
}

unsigned int GroupObjectAdapter::getNewListCount(int cnt) {
	return ((GroupObjectImplementation*) impl)->getNewListCount(cnt);
}

/*
 *	GroupObjectHelper
 */

GroupObjectHelper::GroupObjectHelper() {
	className = "GroupObject";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void GroupObjectHelper::finalizeHelper() {
	GroupObjectHelper::finalize();
}

ORBObject* GroupObjectHelper::instantiateObject() {
	return new GroupObject();
}

ORBObjectAdapter* GroupObjectHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new GroupObjectAdapter((GroupObjectImplementation*) obj);

	ORBObjectStub* stub = new GroupObject(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	GroupObjectServant
 */

GroupObjectServant::GroupObjectServant(unsigned long long oid) : SceneObjectImplementation(oid) {
	_classHelper = GroupObjectHelper::instance();
}

GroupObjectServant::~GroupObjectServant() {
}

void GroupObjectServant::_setStub(ORBObjectStub* stub) {
	_this = (GroupObject*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* GroupObjectServant::_getStub() {
	return _this;
}

