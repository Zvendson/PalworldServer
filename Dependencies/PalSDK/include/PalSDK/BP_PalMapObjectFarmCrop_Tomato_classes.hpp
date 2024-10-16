#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMapObjectFarmCrop_Tomato.BP_PalMapObjectFarmCrop_Tomato_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_PalMapObjectFarmCrop_Tomato_C final : public APalMapObjectFarmCrop
{
public:
	class UInstancedStaticMeshComponent*          CropISM;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          GrowupISM;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          GrassISM;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectFarmCrop_Tomato_C">();
	}
	static class ABP_PalMapObjectFarmCrop_Tomato_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectFarmCrop_Tomato_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectFarmCrop_Tomato_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectFarmCrop_Tomato_C");
static_assert(sizeof(ABP_PalMapObjectFarmCrop_Tomato_C) == 0x0002C0, "Wrong size on ABP_PalMapObjectFarmCrop_Tomato_C");
static_assert(offsetof(ABP_PalMapObjectFarmCrop_Tomato_C, CropISM) == 0x0002A0, "Member 'ABP_PalMapObjectFarmCrop_Tomato_C::CropISM' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectFarmCrop_Tomato_C, GrowupISM) == 0x0002A8, "Member 'ABP_PalMapObjectFarmCrop_Tomato_C::GrowupISM' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectFarmCrop_Tomato_C, GrassISM) == 0x0002B0, "Member 'ABP_PalMapObjectFarmCrop_Tomato_C::GrassISM' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectFarmCrop_Tomato_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_PalMapObjectFarmCrop_Tomato_C::DefaultSceneRoot' has a wrong offset!");

}

