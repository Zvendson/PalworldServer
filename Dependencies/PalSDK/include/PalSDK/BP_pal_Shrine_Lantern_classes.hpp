#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_pal_Shrine_Lantern.BP_pal_Shrine_Lantern_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_pal_Shrine_Lantern_C final : public AActor
{
public:
	class UBP_ObjectEmitter_C*                    BP_ObjectEmitter;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_pal_b00_ShrineLantern01;                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_pal_Shrine_Lantern_C">();
	}
	static class ABP_pal_Shrine_Lantern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_pal_Shrine_Lantern_C>();
	}
};
static_assert(alignof(ABP_pal_Shrine_Lantern_C) == 0x000008, "Wrong alignment on ABP_pal_Shrine_Lantern_C");
static_assert(sizeof(ABP_pal_Shrine_Lantern_C) == 0x0002B0, "Wrong size on ABP_pal_Shrine_Lantern_C");
static_assert(offsetof(ABP_pal_Shrine_Lantern_C, BP_ObjectEmitter) == 0x000290, "Member 'ABP_pal_Shrine_Lantern_C::BP_ObjectEmitter' has a wrong offset!");
static_assert(offsetof(ABP_pal_Shrine_Lantern_C, SM_pal_b00_ShrineLantern01) == 0x000298, "Member 'ABP_pal_Shrine_Lantern_C::SM_pal_b00_ShrineLantern01' has a wrong offset!");
static_assert(offsetof(ABP_pal_Shrine_Lantern_C, PointLight) == 0x0002A0, "Member 'ABP_pal_Shrine_Lantern_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_pal_Shrine_Lantern_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_pal_Shrine_Lantern_C::DefaultSceneRoot' has a wrong offset!");

}

