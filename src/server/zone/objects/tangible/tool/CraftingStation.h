/*
 *	server/zone/objects/tangible/tool/CraftingStation.h generated by engine3 IDL compiler 0.60
 */

#ifndef CRAFTINGSTATION_H_
#define CRAFTINGSTATION_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingStation : public ToolTangibleObject {
public:
	CraftingStation();

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(PlayerCreature* player);

	void createChildObjects();

protected:
	CraftingStation(DummyConstructorParameter* param);

	virtual ~CraftingStation();

	friend class CraftingStationHelper;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace tool {

class CraftingStationImplementation : public ToolTangibleObjectImplementation {
	int type;

	float effectiveness;

	int complexityLevel;

public:
	CraftingStationImplementation();

	CraftingStationImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(PlayerCreature* player);

	void createChildObjects();

	CraftingStation* _this;

	operator const CraftingStation*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CraftingStationImplementation();

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

	friend class CraftingStation;
};

class CraftingStationAdapter : public ToolTangibleObjectAdapter {
public:
	CraftingStationAdapter(CraftingStationImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void updateCraftingValues(ManufactureSchematic* schematic);

	bool isCraftingStation();

	int getComplexityLevel();

	int getStationType();

	void setComplexityLevel(int level);

	SceneObject* findCraftingTool(PlayerCreature* player);

	void createChildObjects();

};

class CraftingStationHelper : public DistributedObjectClassHelper, public Singleton<CraftingStationHelper> {
	static CraftingStationHelper* staticInitializer;

public:
	CraftingStationHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CraftingStationHelper>;
};

} // namespace tool
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::tool;

#endif /*CRAFTINGSTATION_H_*/
