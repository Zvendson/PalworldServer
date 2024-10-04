#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C
// 0x0038 (0x02C8 - 0x0290)
class ABP_NPCSpawnPointOnly_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalHumanData      NPCName;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_NPCUniqueData     UniqueName;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideControllerClass;                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 OverrideDefaultActionClass;                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         OverrideLevel;                                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Get_Spawn_One_Info(struct FF_NPCOnePointSpawnInfo* OneInfo);
	void GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCSpawnPointOnly_C">();
	}
	static class ABP_NPCSpawnPointOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCSpawnPointOnly_C>();
	}
};
static_assert(alignof(ABP_NPCSpawnPointOnly_C) == 0x000008, "Wrong alignment on ABP_NPCSpawnPointOnly_C");
static_assert(sizeof(ABP_NPCSpawnPointOnly_C) == 0x0002C8, "Wrong size on ABP_NPCSpawnPointOnly_C");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, StaticMesh) == 0x000290, "Member 'ABP_NPCSpawnPointOnly_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_NPCSpawnPointOnly_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, NPCName) == 0x0002A0, "Member 'ABP_NPCSpawnPointOnly_C::NPCName' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, UniqueName) == 0x0002A8, "Member 'ABP_NPCSpawnPointOnly_C::UniqueName' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, OverrideControllerClass) == 0x0002B0, "Member 'ABP_NPCSpawnPointOnly_C::OverrideControllerClass' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, OverrideDefaultActionClass) == 0x0002B8, "Member 'ABP_NPCSpawnPointOnly_C::OverrideDefaultActionClass' has a wrong offset!");
static_assert(offsetof(ABP_NPCSpawnPointOnly_C, OverrideLevel) == 0x0002C0, "Member 'ABP_NPCSpawnPointOnly_C::OverrideLevel' has a wrong offset!");

}

