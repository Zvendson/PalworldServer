#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_Item_Anim_PalEgg_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         HatchingTemperature;                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Item_Anim_PalEgg_Base(int32 EntryPoint);
	void GetHatchingTemperature(int32* Temperature);
	void ReceiveBeginPlay();
	void SetAnimPlayState(bool IsPlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Item_Anim_PalEgg_Base_C">();
	}
	static class ABP_Item_Anim_PalEgg_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Item_Anim_PalEgg_Base_C>();
	}
};
static_assert(alignof(ABP_Item_Anim_PalEgg_Base_C) == 0x000008, "Wrong alignment on ABP_Item_Anim_PalEgg_Base_C");
static_assert(sizeof(ABP_Item_Anim_PalEgg_Base_C) == 0x0002B0, "Wrong size on ABP_Item_Anim_PalEgg_Base_C");
static_assert(offsetof(ABP_Item_Anim_PalEgg_Base_C, UberGraphFrame) == 0x000290, "Member 'ABP_Item_Anim_PalEgg_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Item_Anim_PalEgg_Base_C, SK_Kurinuki_EggA) == 0x000298, "Member 'ABP_Item_Anim_PalEgg_Base_C::SK_Kurinuki_EggA' has a wrong offset!");
static_assert(offsetof(ABP_Item_Anim_PalEgg_Base_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Item_Anim_PalEgg_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Item_Anim_PalEgg_Base_C, HatchingTemperature) == 0x0002A8, "Member 'ABP_Item_Anim_PalEgg_Base_C::HatchingTemperature' has a wrong offset!");

}

