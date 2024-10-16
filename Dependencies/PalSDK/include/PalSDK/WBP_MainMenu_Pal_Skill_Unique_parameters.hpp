#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupBySaveParameter
// 0x0350 (0x0350 - 0x0000)
struct WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter final
{
public:
	struct FPalIndividualCharacterSaveParameter   Parameter;                                         // 0x0000(0x02A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ShowLv;                                            // 0x02A8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AA[0x2];                                      // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetSaveParameterValue_CharacterID_ReturnValue; // 0x02AC(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x02B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Rank_ReturnValue;   // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x02C8(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E2[0x2];                                      // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x02E4(0x0014)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F9[0x3];                                      // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x02FC(0x0014)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0310(0x0014)()
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0338(0x0018)()
};
static_assert(alignof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter");
static_assert(sizeof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter) == 0x000350, "Wrong size on WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, Parameter) == 0x000000, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, ShowLv) == 0x0002A8, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::ShowLv' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, Temp_bool_Variable) == 0x0002A9, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetSaveParameterValue_CharacterID_ReturnValue) == 0x0002AC, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetSaveParameterValue_CharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x0002B4, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetSaveParameterValue_Rank_ReturnValue) == 0x0002BC, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetSaveParameterValue_Rank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, Temp_bool_Variable_1) == 0x0002C0, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_Conv_IntToText_ReturnValue) == 0x0002C8, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, Temp_byte_Variable) == 0x0002E0, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, Temp_byte_Variable_1) == 0x0002E1, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, K2Node_MakeStruct_SlateColor) == 0x0002E4, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, K2Node_Select_Default) == 0x0002F8, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, K2Node_MakeStruct_SlateColor_1) == 0x0002FC, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, K2Node_Select_Default_1) == 0x000310, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000328, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetPartnerSkillMsgID_OutMsgID) == 0x000330, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetPartnerSkillMsgID_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter, CallFunc_GetLocalizedText_ReturnValue) == 0x000338, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupFromHandle
// 0x0070 (0x0070 - 0x0000)
struct WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          IndividualHandle;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0058(0x0018)()
};
static_assert(alignof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle");
static_assert(sizeof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle) == 0x000070, "Wrong size on WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, IndividualHandle) == 0x000000, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::IndividualHandle' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetRank_ReturnValue) == 0x00001C, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetCharacterID_ReturnValue) == 0x000038, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000040, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000048, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetPartnerSkillMsgID_OutMsgID) == 0x000050, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetPartnerSkillMsgID_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle, CallFunc_GetLocalizedText_ReturnValue) == 0x000058, "Member 'WBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

}

