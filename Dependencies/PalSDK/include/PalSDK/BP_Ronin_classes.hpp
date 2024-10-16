#pragma once

#include "Basic.hpp"

#include "BP_MonsterBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Ronin.BP_Ronin_C
// 0x0020 (0x0A80 - 0x0A60)
class ABP_Ronin_C final : public ABP_MonsterBase_C
{
public:
	class UBP_PalTimerPointLightComponent_C*      BP_PalTimerPointLightComponent;                    // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule;                               // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsCapsuleComponent*          PalBodyPartsCapsule1;                              // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalBodyPartsSphereComponent*           PalBodyPartsSphere1;                               // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>* OutComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ronin_C">();
	}
	static class ABP_Ronin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ronin_C>();
	}
};
static_assert(alignof(ABP_Ronin_C) == 0x000010, "Wrong alignment on ABP_Ronin_C");
static_assert(sizeof(ABP_Ronin_C) == 0x000A80, "Wrong size on ABP_Ronin_C");
static_assert(offsetof(ABP_Ronin_C, BP_PalTimerPointLightComponent) == 0x000A60, "Member 'ABP_Ronin_C::BP_PalTimerPointLightComponent' has a wrong offset!");
static_assert(offsetof(ABP_Ronin_C, PalBodyPartsCapsule) == 0x000A68, "Member 'ABP_Ronin_C::PalBodyPartsCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Ronin_C, PalBodyPartsCapsule1) == 0x000A70, "Member 'ABP_Ronin_C::PalBodyPartsCapsule1' has a wrong offset!");
static_assert(offsetof(ABP_Ronin_C, PalBodyPartsSphere1) == 0x000A78, "Member 'ABP_Ronin_C::PalBodyPartsSphere1' has a wrong offset!");

}

