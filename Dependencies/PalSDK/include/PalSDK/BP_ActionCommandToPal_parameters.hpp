#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionCommandToPal_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCommandToPal_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionCommandToPal_C_TickAction");
static_assert(sizeof(BP_ActionCommandToPal_C_TickAction) == 0x000004, "Wrong size on BP_ActionCommandToPal_C_TickAction");
static_assert(offsetof(BP_ActionCommandToPal_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionCommandToPal_C_TickAction::DeltaTime' has a wrong offset!");

// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.ExecuteUbergraph_BP_ActionCommandToPal
// 0x0190 (0x0190 - 0x0000)
struct BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;                // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaTime;                            // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal) == 0x000008, "Wrong alignment on BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal");
static_assert(sizeof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal) == 0x000190, "Wrong size on BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, EntryPoint) == 0x000000, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionTarget_ReturnValue) == 0x000030, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_X) == 0x000070, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_Y) == 0x000078, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_Z) == 0x000080, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_X_1) == 0x000088, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_Y_1) == 0x000090, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_BreakVector_Z_1) == 0x000098, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_MakeVector_ReturnValue_1) == 0x0000A0, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_MakeVector_ReturnValue_2) == 0x0000B8, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000D0, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000D8, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000F0, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_Normal_ReturnValue) == 0x0000F8, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_MakeRotFromXZ_ReturnValue) == 0x000110, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000128, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000130, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, K2Node_Event_DeltaTime) == 0x000148, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_RInterpTo_ReturnValue) == 0x000150, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000168, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000170, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_GetActionCharacter_ReturnValue_5) == 0x000178, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_K2_SetActorRotation_ReturnValue_1) == 0x000180, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_K2_SetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000188, "Member 'BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

