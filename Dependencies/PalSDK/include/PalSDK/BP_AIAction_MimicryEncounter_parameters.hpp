#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AIAction_MimicryEncounter.BP_AIAction_MimicryEncounter_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_MimicryEncounter_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_MimicryEncounter_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_MimicryEncounter_C_ActionStart");
static_assert(sizeof(BP_AIAction_MimicryEncounter_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_MimicryEncounter_C_ActionStart");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_MimicryEncounter_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_MimicryEncounter.BP_AIAction_MimicryEncounter_C.ExecuteUbergraph_BP_AIAction_MimicryEncounter
// 0x01D0 (0x01D0 - 0x0000)
struct BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0080(0x00E0)()
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter           K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x0168(0x0050)(NoDestructor)
	class UPalAIActionComponent*                  CallFunc_GetAIActionComponent_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                       CallFunc_SetActionClassParameter_ReturnValue;      // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter) == 0x000010, "Wrong alignment on BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter");
static_assert(sizeof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter) == 0x0001D0, "Wrong size on BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, EntryPoint) == 0x000000, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, K2Node_Event_ControlledPawn) == 0x000020, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_GetActionComponent_ReturnValue) == 0x000028, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_Vector_Normal2D_ReturnValue) == 0x000060, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, K2Node_MakeStruct_ActionDynamicParameter) == 0x000080, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_PlayActionParameter_ReturnValue) == 0x000160, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, K2Node_MakeStruct_PalAIActionDynamicParameter) == 0x000168, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::K2Node_MakeStruct_PalAIActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_GetAIActionComponent_ReturnValue) == 0x0001B8, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_GetAIActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter, CallFunc_SetActionClassParameter_ReturnValue) == 0x0001C0, "Member 'BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter::CallFunc_SetActionClassParameter_ReturnValue' has a wrong offset!");

}

