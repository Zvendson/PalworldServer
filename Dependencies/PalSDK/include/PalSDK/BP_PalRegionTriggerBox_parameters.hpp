#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ExecuteUbergraph_BP_PalRegionTriggerBox
// 0x0010 (0x0010 - 0x0000)
struct BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox) == 0x000008, "Wrong alignment on BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox");
static_assert(sizeof(BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox) == 0x000010, "Wrong size on BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox");
static_assert(offsetof(BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox, EntryPoint) == 0x000000, "Member 'BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_PalRegionTriggerBox_C_ExecuteUbergraph_BP_PalRegionTriggerBox::K2Node_Event_OtherActor' has a wrong offset!");

// Function BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_PalRegionTriggerBox_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

