#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ExecuteUbergraph_BP_PalBiomeTriggerBox
// 0x0040 (0x0040 - 0x0000)
struct BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBiomeType                                 CallFunc_GetBiomeType_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox) == 0x000008, "Wrong alignment on BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox");
static_assert(sizeof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox) == 0x000040, "Wrong size on BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, EntryPoint) == 0x000000, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, K2Node_Event_OtherActor_1) == 0x000010, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, CallFunc_GetBiomeType_ReturnValue) == 0x000018, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::CallFunc_GetBiomeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, K2Node_Event_OtherActor) == 0x000020, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, CallFunc_GetPalmi_ReturnValue_1) == 0x000030, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000038, "Member 'BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

}

