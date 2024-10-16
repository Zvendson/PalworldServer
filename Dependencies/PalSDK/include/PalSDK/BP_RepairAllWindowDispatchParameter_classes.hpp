#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_RepairAllWindowDispatchParameter.BP_RepairAllWindowDispatchParameter_C
// 0x0028 (0x0060 - 0x0038)
class UBP_RepairAllWindowDispatchParameter_C final : public UPalHUDDispatchParameterBase
{
public:
	TArray<class UPalItemSlot*>                   TargetItemSlots;                                   // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPalStaticItemIdAndNum>         RequireMaterials;                                  // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OutResult;                                         // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RepairAllWindowDispatchParameter_C">();
	}
	static class UBP_RepairAllWindowDispatchParameter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RepairAllWindowDispatchParameter_C>();
	}
};
static_assert(alignof(UBP_RepairAllWindowDispatchParameter_C) == 0x000008, "Wrong alignment on UBP_RepairAllWindowDispatchParameter_C");
static_assert(sizeof(UBP_RepairAllWindowDispatchParameter_C) == 0x000060, "Wrong size on UBP_RepairAllWindowDispatchParameter_C");
static_assert(offsetof(UBP_RepairAllWindowDispatchParameter_C, TargetItemSlots) == 0x000038, "Member 'UBP_RepairAllWindowDispatchParameter_C::TargetItemSlots' has a wrong offset!");
static_assert(offsetof(UBP_RepairAllWindowDispatchParameter_C, RequireMaterials) == 0x000048, "Member 'UBP_RepairAllWindowDispatchParameter_C::RequireMaterials' has a wrong offset!");
static_assert(offsetof(UBP_RepairAllWindowDispatchParameter_C, OutResult) == 0x000058, "Member 'UBP_RepairAllWindowDispatchParameter_C::OutResult' has a wrong offset!");

}

