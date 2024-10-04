#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_TreasureBoxVisual_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_TreasureBoxVisual_OilrigGoal.BP_TreasureBoxVisual_OilrigGoal_C
// 0x0010 (0x0310 - 0x0300)
class ABP_TreasureBoxVisual_OilrigGoal_C final : public ABP_TreasureBoxVisual_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TreasureBoxVisual_OilrigGoal_C;  // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal(int32 EntryPoint);
	void OnFinishOpenAnimation();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureBoxVisual_OilrigGoal_C">();
	}
	static class ABP_TreasureBoxVisual_OilrigGoal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBoxVisual_OilrigGoal_C>();
	}
};
static_assert(alignof(ABP_TreasureBoxVisual_OilrigGoal_C) == 0x000008, "Wrong alignment on ABP_TreasureBoxVisual_OilrigGoal_C");
static_assert(sizeof(ABP_TreasureBoxVisual_OilrigGoal_C) == 0x000310, "Wrong size on ABP_TreasureBoxVisual_OilrigGoal_C");
static_assert(offsetof(ABP_TreasureBoxVisual_OilrigGoal_C, UberGraphFrame_BP_TreasureBoxVisual_OilrigGoal_C) == 0x000300, "Member 'ABP_TreasureBoxVisual_OilrigGoal_C::UberGraphFrame_BP_TreasureBoxVisual_OilrigGoal_C' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxVisual_OilrigGoal_C, PointLight) == 0x000308, "Member 'ABP_TreasureBoxVisual_OilrigGoal_C::PointLight' has a wrong offset!");

}

