#pragma once

#include "Basic.hpp"

#include "BP_MapObject_PickupItem_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_CaveMushroom.BP_MapObject_PickupItem_CaveMushroom_C
// 0x0038 (0x0450 - 0x0418)
class ABP_MapObject_PickupItem_CaveMushroom_C final : public ABP_MapObject_PickupItem_Base_C
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter;                   // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_CaveMushroom_C">();
	}
	static class ABP_MapObject_PickupItem_CaveMushroom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_CaveMushroom_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_CaveMushroom_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_CaveMushroom_C");
static_assert(sizeof(ABP_MapObject_PickupItem_CaveMushroom_C) == 0x000450, "Wrong size on ABP_MapObject_PickupItem_CaveMushroom_C");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, PointLight) == 0x000418, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, StaticMesh3) == 0x000420, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, StaticMesh2) == 0x000428, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, Niagara) == 0x000430, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, StaticMesh1) == 0x000438, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, IndicatorOrigin) == 0x000440, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_CaveMushroom_C, PalMapObjectPickupItemParameter) == 0x000448, "Member 'ABP_MapObject_PickupItem_CaveMushroom_C::PalMapObjectPickupItemParameter' has a wrong offset!");

}

