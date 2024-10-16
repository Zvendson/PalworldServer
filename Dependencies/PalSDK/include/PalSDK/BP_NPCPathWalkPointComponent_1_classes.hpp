#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_NPCPathWalkPointComponent_1.BP_NPCPathWalkPointComponent_1_C
// 0x0010 (0x0600 - 0x05F0)
class UBP_NPCPathWalkPointComponent_1_C final : public UStaticMeshComponent
{
public:
	double                                        WaitTime;                                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                ActionType;                                        // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCPathWalkPointComponent_1_C">();
	}
	static class UBP_NPCPathWalkPointComponent_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCPathWalkPointComponent_1_C>();
	}
};
static_assert(alignof(UBP_NPCPathWalkPointComponent_1_C) == 0x000010, "Wrong alignment on UBP_NPCPathWalkPointComponent_1_C");
static_assert(sizeof(UBP_NPCPathWalkPointComponent_1_C) == 0x000600, "Wrong size on UBP_NPCPathWalkPointComponent_1_C");
static_assert(offsetof(UBP_NPCPathWalkPointComponent_1_C, WaitTime) == 0x0005F0, "Member 'UBP_NPCPathWalkPointComponent_1_C::WaitTime' has a wrong offset!");
static_assert(offsetof(UBP_NPCPathWalkPointComponent_1_C, ActionType) == 0x0005F8, "Member 'UBP_NPCPathWalkPointComponent_1_C::ActionType' has a wrong offset!");

}

