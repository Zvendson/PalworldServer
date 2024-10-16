#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameFlyEff.WBP_IngameFlyEff_C.EnableEff
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameFlyEff_C_EnableEff final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Character_0;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameFlyEff_C_EnableEff) == 0x000008, "Wrong alignment on WBP_IngameFlyEff_C_EnableEff");
static_assert(sizeof(WBP_IngameFlyEff_C_EnableEff) == 0x000010, "Wrong size on WBP_IngameFlyEff_C_EnableEff");
static_assert(offsetof(WBP_IngameFlyEff_C_EnableEff, IsEnable) == 0x000000, "Member 'WBP_IngameFlyEff_C_EnableEff::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_EnableEff, Character_0) == 0x000008, "Member 'WBP_IngameFlyEff_C_EnableEff::Character_0' has a wrong offset!");

// Function WBP_IngameFlyEff.WBP_IngameFlyEff_C.ExecuteUbergraph_WBP_IngameFlyEff
// 0x0100 (0x0100 - 0x0000)
struct WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_Character;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff) == 0x000008, "Wrong alignment on WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff");
static_assert(sizeof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff) == 0x000100, "Wrong size on WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, EntryPoint) == 0x000000, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_byte_Variable) == 0x000005, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_CustomEvent_IsEnable) == 0x000007, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_CustomEvent_Character) == 0x000008, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_Select_Default) == 0x000010, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_GetMainMesh_ReturnValue) == 0x000028, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_GetAnimInstance_ReturnValue) == 0x000038, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000040, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_GetGameSetting_ReturnValue) == 0x000050, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_FMax_ReturnValue) == 0x000070, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000078, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_byte_Variable_2) == 0x000080, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_FMin_ReturnValue) == 0x000098, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_byte_Variable_3) == 0x0000A0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000A1, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000A2, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x0000A4, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_SelectFloat_ReturnValue) == 0x0000A8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_SelectFloat_ReturnValue_1) == 0x0000B8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000C0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, Temp_bool_Variable_1) == 0x0000C8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, K2Node_Select_Default_1) == 0x0000C9, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000D8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000E0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0000E8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_SelectFloat_A_ImplicitCast) == 0x0000F0, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0000F8, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000FC, "Member 'WBP_IngameFlyEff_C_ExecuteUbergraph_WBP_IngameFlyEff::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

}

