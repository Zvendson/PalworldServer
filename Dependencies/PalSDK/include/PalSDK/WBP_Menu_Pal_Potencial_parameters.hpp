#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.GetRankText
// 0x0028 (0x0028 - 0x0000)
struct WBP_Menu_Pal_Potencial_C_GetRankText final
{
public:
	int32                                         TalentValue;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RankText;                                          // 0x0008(0x0018)(Parm, OutParm)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Pal_Potencial_C_GetRankText) == 0x000008, "Wrong alignment on WBP_Menu_Pal_Potencial_C_GetRankText");
static_assert(sizeof(WBP_Menu_Pal_Potencial_C_GetRankText) == 0x000028, "Wrong size on WBP_Menu_Pal_Potencial_C_GetRankText");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_GetRankText, TalentValue) == 0x000000, "Member 'WBP_Menu_Pal_Potencial_C_GetRankText::TalentValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_GetRankText, RankText) == 0x000008, "Member 'WBP_Menu_Pal_Potencial_C_GetRankText::RankText' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_GetRankText, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Menu_Pal_Potencial_C_GetRankText::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_GetRankText, K2Node_SwitchInteger_CmpSuccess) == 0x000024, "Member 'WBP_Menu_Pal_Potencial_C_GetRankText::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByNum
// 0x000C (0x000C - 0x0000)
struct WBP_Menu_Pal_Potencial_C_SetupByNum final
{
public:
	int32                                         Talent_HP;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Talent_Attack;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Talent_Defense;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Pal_Potencial_C_SetupByNum) == 0x000004, "Wrong alignment on WBP_Menu_Pal_Potencial_C_SetupByNum");
static_assert(sizeof(WBP_Menu_Pal_Potencial_C_SetupByNum) == 0x00000C, "Wrong size on WBP_Menu_Pal_Potencial_C_SetupByNum");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByNum, Talent_HP) == 0x000000, "Member 'WBP_Menu_Pal_Potencial_C_SetupByNum::Talent_HP' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByNum, Talent_Attack) == 0x000004, "Member 'WBP_Menu_Pal_Potencial_C_SetupByNum::Talent_Attack' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByNum, Talent_Defense) == 0x000008, "Member 'WBP_Menu_Pal_Potencial_C_SetupByNum::Talent_Defense' has a wrong offset!");

// Function WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C.SetupByParameter
// 0x02C8 (0x02C8 - 0x0000)
struct WBP_Menu_Pal_Potencial_C_SetupByParameter final
{
public:
	class UPalIndividualCharacterParameter*       TargetParameter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0010(0x02A8)(ConstParm)
	int32                                         CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Menu_Pal_Potencial_C_SetupByParameter) == 0x000008, "Wrong alignment on WBP_Menu_Pal_Potencial_C_SetupByParameter");
static_assert(sizeof(WBP_Menu_Pal_Potencial_C_SetupByParameter) == 0x0002C8, "Wrong size on WBP_Menu_Pal_Potencial_C_SetupByParameter");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, TargetParameter) == 0x000000, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::TargetParameter' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, CallFunc_GetSaveParameter_ReturnValue) == 0x000010, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue) == 0x0002B8, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue) == 0x0002BC, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Menu_Pal_Potencial_C_SetupByParameter, CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue) == 0x0002C0, "Member 'WBP_Menu_Pal_Potencial_C_SetupByParameter::CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue' has a wrong offset!");

}

