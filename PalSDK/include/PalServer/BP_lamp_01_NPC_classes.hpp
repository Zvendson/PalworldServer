#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_lamp_01_NPC.BP_lamp_01_NPC_C
// 0x0018 (0x02A8 - 0x0290)
class ABP_lamp_01_NPC_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_Lantern_Flames;                                 // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_lamp_01_NPC_C">();
	}
	static class ABP_lamp_01_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_lamp_01_NPC_C>();
	}
};
static_assert(alignof(ABP_lamp_01_NPC_C) == 0x000008, "Wrong alignment on ABP_lamp_01_NPC_C");
static_assert(sizeof(ABP_lamp_01_NPC_C) == 0x0002A8, "Wrong size on ABP_lamp_01_NPC_C");
static_assert(offsetof(ABP_lamp_01_NPC_C, SM_Lantern_Flames) == 0x000290, "Member 'ABP_lamp_01_NPC_C::SM_Lantern_Flames' has a wrong offset!");
static_assert(offsetof(ABP_lamp_01_NPC_C, PointLight) == 0x000298, "Member 'ABP_lamp_01_NPC_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_lamp_01_NPC_C, StaticMesh) == 0x0002A0, "Member 'ABP_lamp_01_NPC_C::StaticMesh' has a wrong offset!");

}

