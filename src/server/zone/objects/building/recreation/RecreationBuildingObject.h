/*
 *	server/zone/objects/building/recreation/RecreationBuildingObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef RECREATIONBUILDINGOBJECT_H_
#define RECREATIONBUILDINGOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace cell {

class CellObject;

} // namespace cell
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::cell;

#include "server/zone/objects/building/BuildingObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace recreation {

class RecreationBuildingObject : public BuildingObject {
public:
	RecreationBuildingObject();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RecreationBuildingObject(DummyConstructorParameter* param);

	virtual ~RecreationBuildingObject();

	friend class RecreationBuildingObjectHelper;
};

} // namespace recreation
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::recreation;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace recreation {

class RecreationBuildingObjectImplementation : public BuildingObjectImplementation {

public:
	RecreationBuildingObjectImplementation();

	RecreationBuildingObjectImplementation(DummyConstructorParameter* param);

	RecreationBuildingObject* _this;

	operator const RecreationBuildingObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RecreationBuildingObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class RecreationBuildingObject;
};

class RecreationBuildingObjectAdapter : public BuildingObjectAdapter {
public:
	RecreationBuildingObjectAdapter(RecreationBuildingObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class RecreationBuildingObjectHelper : public DistributedObjectClassHelper, public Singleton<RecreationBuildingObjectHelper> {
	static RecreationBuildingObjectHelper* staticInitializer;

public:
	RecreationBuildingObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RecreationBuildingObjectHelper>;
};

} // namespace recreation
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::recreation;

#endif /*RECREATIONBUILDINGOBJECT_H_*/
