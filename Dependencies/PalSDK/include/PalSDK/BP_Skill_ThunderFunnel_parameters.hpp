#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.Create Skill Effect
// 0x0220 (0x0220 - 0x0000)
struct BP_Skill_ThunderFunnel_C_Create_Skill_Effect final
{
public:
	struct FTransform                             SpawnTransform;                                    // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Owner_0;                                           // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0068(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffectBase_C*                  SkillEffect;                                       // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_SpawnSkillEffect_SkillEffect;             // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_1;                      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_ThunderFunnel_Funnel_C*       K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel; // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_3;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_2;                      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_3;                      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_4;                      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue_5;                      // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_4;           // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_5;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue_1;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_5;           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect) == 0x000010, "Wrong alignment on BP_Skill_ThunderFunnel_C_Create_Skill_Effect");
static_assert(sizeof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect) == 0x000220, "Wrong size on BP_Skill_ThunderFunnel_C_Create_Skill_Effect");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, SpawnTransform) == 0x000000, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::SpawnTransform' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, Owner_0) == 0x000060, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::Owner_0' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, Index_0) == 0x000068, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::Index_0' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, SkillEffect) == 0x000070, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::SkillEffect' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue) == 0x000080, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000088, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000090, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000098, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Percent_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000A4, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000A8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000A9, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_SelectFloat_ReturnValue) == 0x0000B0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_SelectFloat_ReturnValue_1) == 0x0000B8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_SpawnSkillEffect_SkillEffect) == 0x0000C0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_SpawnSkillEffect_SkillEffect' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue_1) == 0x0000C8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel) == 0x0000D0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x0000E0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_FFloor_ReturnValue) == 0x0000F0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue_3) == 0x0000F8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue_2) == 0x000100, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000108, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue_3) == 0x000110, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue_4) == 0x000118, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_X) == 0x000120, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Y) == 0x000128, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Z) == 0x000130, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000138, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x000140, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_X_1) == 0x000148, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Y_1) == 0x000150, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Z_1) == 0x000158, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_VSize_ReturnValue_5) == 0x000160, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_VSize_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_MakeVector_ReturnValue) == 0x000168, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x000180, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue_4) == 0x000188, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Divide_DoubleDouble_ReturnValue_5) == 0x000190, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Divide_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_X_2) == 0x000198, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Y_2) == 0x0001A0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_BreakVector_Z_2) == 0x0001A8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_FFloor_ReturnValue_1) == 0x0001B0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Conv_IntToDouble_ReturnValue_5) == 0x0001C0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Conv_IntToDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0001C8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0001D0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_MakeVector_ReturnValue_1) == 0x0001D8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001F0, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0001F8, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_MakeVector_ReturnValue_2) == 0x000200, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_Percent_IntInt_ReturnValue_2) == 0x000218, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_Create_Skill_Effect, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00021C, "Member 'BP_Skill_ThunderFunnel_C_Create_Skill_Effect::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");

// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.ExecuteUbergraph_BP_Skill_ThunderFunnel
// 0x01A0 (0x01A0 - 0x0000)
struct BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTargetActor_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x013C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Skill_ThunderFunnel_Funnel_C*       CallFunc_Array_Get_Item;                           // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue;            // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetOwnerCharacter_ReturnValue_1;          // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_Create_Skill_Effect_SkillEffect;          // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_ThunderFunnel_Funnel_C*       K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel) == 0x000010, "Wrong alignment on BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel");
static_assert(sizeof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel) == 0x0001A0, "Wrong size on BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, EntryPoint) == 0x000000, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_GetActionTargetActor_ReturnValue) == 0x000008, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_GetActionTargetActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, Temp_int_Variable) == 0x000080, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_BreakTransform_Location) == 0x000088, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_BreakTransform_Rotation) == 0x0000A0, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_BreakTransform_Scale) == 0x0000B8, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Add_IntInt_ReturnValue_1) == 0x000130, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Subtract_IntInt_ReturnValue) == 0x000134, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000138, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, K2Node_CreateDelegate_OutputDelegate) == 0x00013C, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Array_Get_Item) == 0x000150, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Less_IntInt_ReturnValue) == 0x00015C, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000160, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Array_Add_ReturnValue) == 0x000168, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_GetOwnerCharacter_ReturnValue) == 0x000170, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_GetOwnerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_GetOwnerCharacter_ReturnValue_1) == 0x000178, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_GetOwnerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Create_Skill_Effect_SkillEffect) == 0x000180, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Create_Skill_Effect_SkillEffect' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel) == 0x000188, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel_Funnel' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_Array_Add_ReturnValue_1) == 0x000194, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000198, "Member 'BP_Skill_ThunderFunnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.SpawnSkillEffect
// 0x0090 (0x0090 - 0x0000)
struct BP_Skill_ThunderFunnel_C_SpawnSkillEffect final
{
public:
	struct FTransform                             SpawTransform;                                     // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Owner_0;                                           // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0068(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffectBase_C*                  SkillEffect;                                       // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Skill_ThunderFunnel_Funnel_C*       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect) == 0x000010, "Wrong alignment on BP_Skill_ThunderFunnel_C_SpawnSkillEffect");
static_assert(sizeof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect) == 0x000090, "Wrong size on BP_Skill_ThunderFunnel_C_SpawnSkillEffect");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, SpawTransform) == 0x000000, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::SpawTransform' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, Owner_0) == 0x000060, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::Owner_0' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, Index_0) == 0x000068, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::Index_0' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, SkillEffect) == 0x000070, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::SkillEffect' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000078, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_SpawnSkillEffect, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'BP_Skill_ThunderFunnel_C_SpawnSkillEffect::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_Skill_ThunderFunnel.BP_Skill_ThunderFunnel_C.UpdateMaxDuration
// 0x0010 (0x0010 - 0x0000)
struct BP_Skill_ThunderFunnel_C_UpdateMaxDuration final
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_ThunderFunnel_C_UpdateMaxDuration) == 0x000008, "Wrong alignment on BP_Skill_ThunderFunnel_C_UpdateMaxDuration");
static_assert(sizeof(BP_Skill_ThunderFunnel_C_UpdateMaxDuration) == 0x000010, "Wrong size on BP_Skill_ThunderFunnel_C_UpdateMaxDuration");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_UpdateMaxDuration, Value) == 0x000000, "Member 'BP_Skill_ThunderFunnel_C_UpdateMaxDuration::Value' has a wrong offset!");
static_assert(offsetof(BP_Skill_ThunderFunnel_C_UpdateMaxDuration, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_Skill_ThunderFunnel_C_UpdateMaxDuration::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

}

