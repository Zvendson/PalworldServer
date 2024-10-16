#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Bind Event
// 0x0508 (0x0508 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_Bind_Event final
{
public:
	class UPalIndividualCharacterParameter*       TargetParam;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterID;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalGenderType                                CallFunc_GetGenderType_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0018(0x02A8)(ConstParm)
	struct FPalWorkSuitabilityPreferenceInfo      CallFunc_GetSaveParameterValue_WorkSuitabilityOptionInfo_ReturnValue; // 0x02C0(0x0018)(ConstParm)
	TMap<EPalWorkSuitability, int32>              CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue; // 0x02D8(0x0050)()
	TArray<class FName>                           CallFunc_GetPassiveSkillList_ReturnValue;          // 0x0328(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_GetPalSoulRank_ReturnValue;               // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_344[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetExp_ReturnValue;                       // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSanityValue_ReturnValue;               // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxSanityValue_ReturnValue;            // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxFullStomach_ReturnValue;            // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFullStomach_ReturnValue;               // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0370(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0378(0x0008)(NoDestructor)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0390(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0398(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x03A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x03C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue_1;     // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x03F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0408(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFoodAmount_ReturnValue;                // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x3];                                      // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPalWazaID WazaID)>            K2Node_CreateDelegate_OutputDelegate_5;            // 0x0434(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_444[0x4];                                      // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_2; // 0x0448(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element1;                  // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element2;                  // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_452[0x2];                                      // 0x0452(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0454(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0464(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalWorkSuitabilityPreferenceInfo& NewWorkSuitabilityOption)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0474(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0484(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int64 AddExp, int64 NowExp)>   K2Node_CreateDelegate_OutputDelegate_10;           // 0x0494(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x04A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NowSanity, float OldSanity)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x04B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x04C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float Current, float Last)>    K2Node_CreateDelegate_OutputDelegate_14;           // 0x04D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x04E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x04F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_Bind_Event) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_Bind_Event");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_Bind_Event) == 0x000508, "Wrong size on WBP_IndividualParameterBindWidget_C_Bind_Event");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, TargetParam) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::TargetParam' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CharacterID) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_IsRarePal_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetGenderType_ReturnValue) == 0x000011, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetGenderType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetSaveParameter_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetSaveParameterValue_WorkSuitabilityOptionInfo_ReturnValue) == 0x0002C0, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetSaveParameterValue_WorkSuitabilityOptionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue) == 0x0002D8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetWorkSuitabilityRanksWithCharacterRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetPassiveSkillList_ReturnValue) == 0x000328, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetPassiveSkillList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetPalSoulRank_ReturnValue) == 0x000338, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetPalSoulRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetRank_ReturnValue) == 0x00033C, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetLevel_ReturnValue) == 0x000340, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetExp_ReturnValue) == 0x000348, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetSanityValue_ReturnValue) == 0x000350, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetSanityValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetMaxSanityValue_ReturnValue) == 0x000354, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetMaxSanityValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetNickName_outName) == 0x000358, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetMaxFullStomach_ReturnValue) == 0x000368, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetMaxFullStomach_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetFullStomach_ReturnValue) == 0x00036C, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetFullStomach_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetHP_ReturnValue) == 0x000370, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000378, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetCharacterID_ReturnValue) == 0x000380, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetPalmi_ReturnValue) == 0x000388, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetIndividualParameter_ReturnValue) == 0x000390, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000398, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003A8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetBindedHandle_targetHandle) == 0x0003B8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_TryGetIndividualActor_ReturnValue) == 0x0003C0, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_2) == 0x0003C8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_IsValid_ReturnValue) == 0x0003D8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetTrainerPlayer_ReturnValue) == 0x0003E0, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_IsValid_ReturnValue_1) == 0x0003E8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetIndividualParameter_ReturnValue_1) == 0x0003F0, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_3) == 0x0003F8, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_4) == 0x000408, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000418, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetFoodAmount_ReturnValue) == 0x000420, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetFoodAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000428, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetIsBoss_ReturnValue) == 0x000430, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_5) == 0x000434, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetDatabaseCharacterParameter_ReturnValue_2) == 0x000448, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetDatabaseCharacterParameter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetElementType_Element1) == 0x000450, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetElementType_Element1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, CallFunc_GetElementType_Element2) == 0x000451, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::CallFunc_GetElementType_Element2' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_6) == 0x000454, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_7) == 0x000464, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_8) == 0x000474, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_9) == 0x000484, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_10) == 0x000494, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_11) == 0x0004A4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_12) == 0x0004B4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_13) == 0x0004C4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_14) == 0x0004D4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_15) == 0x0004E4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Bind_Event, K2Node_CreateDelegate_OutputDelegate_16) == 0x0004F4, "Member 'WBP_IndividualParameterBindWidget_C_Bind_Event::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromHandle
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& InstanceId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0020(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidInstanceID_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPalIndividualCharacterHandle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0070(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_BindFromHandle");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_BindFromHandle) == 0x0000A0, "Wrong size on WBP_IndividualParameterBindWidget_C_BindFromHandle");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_GetIndividualID_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_IsValidInstanceID_ReturnValue) == 0x000050, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_IsValidInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000058, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_GetCharacterManager_ReturnValue) == 0x000060, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromHandle, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000070, "Member 'WBP_IndividualParameterBindWidget_C_BindFromHandle::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromSlot
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_BindFromSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_BindFromSlot) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_BindFromSlot");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_BindFromSlot) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_BindFromSlot");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromSlot, TargetSlot) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_BindFromSlot::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromSlot, CallFunc_GetHandle_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_BindFromSlot::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_BindFromSlot, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_BindFromSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.ExecuteUbergraph_WBP_IndividualParameterBindWidget
// 0x0004 (0x0004 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget) == 0x000004, "Wrong alignment on WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget) == 0x000004, "Wrong size on WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget, EntryPoint) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget::EntryPoint' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.GetBindedHandle
// 0x0028 (0x0028 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_GetBindedHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_GetBindedHandle) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_GetBindedHandle");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_GetBindedHandle) == 0x000028, "Wrong size on WBP_IndividualParameterBindWidget_C_GetBindedHandle");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_GetBindedHandle, TargetHandle) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_GetBindedHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_GetBindedHandle, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_GetBindedHandle::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_GetBindedHandle, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_GetBindedHandle::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_GetBindedHandle, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_GetBindedHandle::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_GetBindedHandle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_GetBindedHandle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Hunger Internal
// 0x0048 (0x0048 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal final
{
public:
	float                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxFullStomach_ReturnValue;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFullStomach_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CallDelegate_nowMaxHunger_ImplicitCast;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_nowHunger_ImplicitCast;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal) == 0x000048, "Wrong size on WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, Current) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::Current' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, Last) == 0x000004, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::Last' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_GetMaxFullStomach_ReturnValue) == 0x00002C, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_GetMaxFullStomach_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, CallFunc_GetFullStomach_ReturnValue) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::CallFunc_GetFullStomach_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, K2Node_CallDelegate_nowMaxHunger_ImplicitCast) == 0x000038, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::K2Node_CallDelegate_nowMaxHunger_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal, K2Node_CallDelegate_nowHunger_ImplicitCast) == 0x000040, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal::K2Node_CallDelegate_nowHunger_ImplicitCast' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Level Internal
// 0x0038 (0x0038 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal final
{
public:
	int32                                         AddLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcCorrectedLevel_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal) == 0x000038, "Wrong size on WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, AddLevel) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::AddLevel' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, NowLevel) == 0x000004, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::NowLevel' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_GetLevel_ReturnValue) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_CalcCorrectedLevel_ReturnValue) == 0x00002C, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_CalcCorrectedLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Trainer Level Internal
// 0x0038 (0x0038 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal final
{
public:
	int32                                         AddLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal) == 0x000038, "Wrong size on WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, AddLevel) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::AddLevel' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, NowLevel) == 0x000004, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::NowLevel' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal, CallFunc_GetLevel_ReturnValue) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal::CallFunc_GetLevel_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateActiveSkill__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature final
{
public:
	TArray<EPalWazaID>                            ActiveSkills;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature, ActiveSkills) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature::ActiveSkills' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         OldExp;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowExpRate;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature, AddExp) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature, OldExp) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature::OldExp' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature, NowExpRate) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature::NowExpRate' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp_Internal
// 0x0088 (0x0088 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         NowExp;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalExpDatabase*                        CallFunc_GetExpDatabase_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetTotalExp_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_GetNextExp_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_Int64ToDouble_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Add_Int64Int64_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_Int64ToDouble_ReturnValue_1;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal) == 0x000088, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, AddExp) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, NowExp) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::NowExp' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_GetExpDatabase_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_GetExpDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000038, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_GetLevel_ReturnValue) == 0x000040, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000045, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_GetTotalExp_ReturnValue) == 0x000050, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_GetTotalExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_GetNextExp_ReturnValue) == 0x000058, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_GetNextExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Subtract_Int64Int64_ReturnValue) == 0x000060, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Subtract_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Conv_Int64ToDouble_ReturnValue) == 0x000068, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Conv_Int64ToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Add_Int64Int64_ReturnValue) == 0x000070, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Add_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Conv_Int64ToDouble_ReturnValue_1) == 0x000078, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Conv_Int64ToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature, NowHP) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature, NowMaxHP) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature::NowMaxHP' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal, NowHP) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal, NowMaxHP) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal::NowMaxHP' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHunger__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature, NowHunger) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature, NowMaxHunger) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature::NowMaxHunger' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateLevel__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature) == 0x000004, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature) == 0x000004, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature, NewLevel) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature::NewLevel' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredSkill__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature final
{
public:
	class UPalIndividualCharacterParameter*       Individual_Parameter;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    WazaID;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature, Individual_Parameter) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature::Individual_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature, WazaID) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature::WazaID' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredWaza_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParameter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalWazaID                                    WazaID;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal, IndividualParameter) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal::IndividualParameter' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal, WazaID) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal::WazaID' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature, NewNickName) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature::NewNickName' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal, NewNickName) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal::NewNickName' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature final
{
public:
	double                                        NowSanity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxSanity;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature, NowSanity) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature::NowSanity' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature, NowMaxSanity) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature::NowMaxSanity' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity_Internal
// 0x0050 (0x0050 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal final
{
public:
	float                                         NowSanity;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldSanity;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxSanityValue_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSanityValue_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CallDelegate_nowMaxSanity_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CallDelegate_nowSanity_ImplicitCast;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal) == 0x000050, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, NowSanity) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::NowSanity' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, OldSanity) == 0x000004, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::OldSanity' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_GetMaxSanityValue_ReturnValue) == 0x000034, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_GetMaxSanityValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, CallFunc_GetSanityValue_ReturnValue) == 0x000038, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::CallFunc_GetSanityValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, K2Node_CallDelegate_nowMaxSanity_ImplicitCast) == 0x000040, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::K2Node_CallDelegate_nowMaxSanity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal, K2Node_CallDelegate_nowSanity_ImplicitCast) == 0x000048, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal::K2Node_CallDelegate_nowSanity_ImplicitCast' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature final
{
public:
	struct FFixedPoint64                          NowSP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxSP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsOverHeated;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature, NowSP) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature::NowSP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature, NowMaxSP) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature::NowMaxSP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature, IsOverHeated) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature::IsOverHeated' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP_Internal
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal final
{
public:
	struct FFixedPoint64                          NowSP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxSP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsOverHeated;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal, NowSP) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal::NowSP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal, NowMaxSP) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal::NowMaxSP' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal, IsOverHeated) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal::IsOverHeated' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWaza_Internal
// 0x0030 (0x0030 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal final
{
public:
	EPalWazaID                                    WazaID;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalWazaID>                            CallFunc_GetEquipWaza_ReturnValue;                 // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal) == 0x000030, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, WazaID) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::WazaID' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, CallFunc_GetBindedHandle_targetHandle) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal, CallFunc_GetEquipWaza_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal::CallFunc_GetEquipWaza_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWorkSuitabilityOption__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature final
{
public:
	struct FPalWorkSuitabilityPreferenceInfo      Info;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature, Info) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature::Info' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWorkSuitabilityOption_Internal
// 0x0018 (0x0018 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal final
{
public:
	struct FPalWorkSuitabilityPreferenceInfo      NewWorkSuitabilityOption;                          // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal) == 0x000018, "Wrong size on WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal, NewWorkSuitabilityOption) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal::NewWorkSuitabilityOption' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Set Work Suitability
// 0x0050 (0x0050 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_Set_Work_Suitability final
{
public:
	TMap<EPalWorkSuitability, int32>              WorkSuitabilities;                                 // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_Set_Work_Suitability) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_Set_Work_Suitability");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_Set_Work_Suitability) == 0x000050, "Wrong size on WBP_IndividualParameterBindWidget_C_Set_Work_Suitability");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_Set_Work_Suitability, WorkSuitabilities) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_Set_Work_Suitability::WorkSuitabilities' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetElementType
// 0x0002 (0x0002 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetElementType final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetElementType) == 0x000001, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetElementType");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetElementType) == 0x000002, "Wrong size on WBP_IndividualParameterBindWidget_C_SetElementType");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetElementType, Type1) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetElementType::Type1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetElementType, Type2) == 0x000001, "Member 'WBP_IndividualParameterBindWidget_C_SetElementType::Type2' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetFoodAmount
// 0x0004 (0x0004 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetFoodAmount final
{
public:
	int32                                         FoodAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetFoodAmount) == 0x000004, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetFoodAmount");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetFoodAmount) == 0x000004, "Wrong size on WBP_IndividualParameterBindWidget_C_SetFoodAmount");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetFoodAmount, FoodAmount) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetFoodAmount::FoodAmount' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetGender
// 0x0001 (0x0001 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetGender final
{
public:
	EPalGenderType                                GenderType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetGender) == 0x000001, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetGender");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetGender) == 0x000001, "Wrong size on WBP_IndividualParameterBindWidget_C_SetGender");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetGender, GenderType) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetGender::GenderType' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetPassiveSkill
// 0x0010 (0x0010 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetPassiveSkill final
{
public:
	TArray<class FName>                           PassiveSkills;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetPassiveSkill) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetPassiveSkill");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetPassiveSkill) == 0x000010, "Wrong size on WBP_IndividualParameterBindWidget_C_SetPassiveSkill");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetPassiveSkill, PassiveSkills) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetPassiveSkill::PassiveSkills' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRank
// 0x0004 (0x0004 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetRank) == 0x000004, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetRank");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetRank) == 0x000004, "Wrong size on WBP_IndividualParameterBindWidget_C_SetRank");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetRank, Rank) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetRank::Rank' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRarity
// 0x0002 (0x0002 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetRarity final
{
public:
	bool                                          IsBoss;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRare;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetRarity) == 0x000001, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetRarity");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetRarity) == 0x000002, "Wrong size on WBP_IndividualParameterBindWidget_C_SetRarity");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetRarity, IsBoss) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetRarity::IsBoss' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetRarity, IsRare) == 0x000001, "Member 'WBP_IndividualParameterBindWidget_C_SetRarity::IsRare' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetSoulRank
// 0x0004 (0x0004 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SetSoulRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SetSoulRank) == 0x000004, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SetSoulRank");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SetSoulRank) == 0x000004, "Wrong size on WBP_IndividualParameterBindWidget_C_SetSoulRank");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SetSoulRank, Rank) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SetSoulRank::Rank' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SyncBind
// 0x0068 (0x0068 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_SyncBind final
{
public:
	struct FPalInstanceID                         InstanceId;                                        // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidInstanceID_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalInstanceID& InstanceId)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_SyncBind) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_SyncBind");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_SyncBind) == 0x000068, "Wrong size on WBP_IndividualParameterBindWidget_C_SyncBind");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, InstanceId) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::InstanceId' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_GetBindedHandle_targetHandle) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_IsValidInstanceID_ReturnValue) == 0x000038, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_IsValidInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000040, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue) == 0x000048, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_SyncBind, CallFunc_GetCharacterManager_ReturnValue) == 0x000060, "Member 'WBP_IndividualParameterBindWidget_C_SyncBind::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.UnbindEvent
// 0x0150 (0x0150 - 0x0000)
struct WBP_IndividualParameterBindWidget_C_UnbindEvent final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue_1;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NowSanity, float OldSanity)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int64 AddExp, int64 NowExp)>   K2Node_CreateDelegate_OutputDelegate_9;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float Current, float Last)>    K2Node_CreateDelegate_OutputDelegate_11;           // 0x00F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0100(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IndividualParameterBindWidget_C_UnbindEvent) == 0x000008, "Wrong alignment on WBP_IndividualParameterBindWidget_C_UnbindEvent");
static_assert(sizeof(WBP_IndividualParameterBindWidget_C_UnbindEvent) == 0x000150, "Wrong size on WBP_IndividualParameterBindWidget_C_UnbindEvent");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_GetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000028, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_GetIndividualParameter_ReturnValue_1) == 0x000048, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_GetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000060, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000B0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000C0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000D0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000E0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000F0, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_12) == 0x000100, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_CreateDelegate_OutputDelegate_13) == 0x000110, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000120, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000128, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000130, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000140, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_IsValid_ReturnValue_2) == 0x000148, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IndividualParameterBindWidget_C_UnbindEvent, CallFunc_IsValid_ReturnValue_3) == 0x000149, "Member 'WBP_IndividualParameterBindWidget_C_UnbindEvent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}

