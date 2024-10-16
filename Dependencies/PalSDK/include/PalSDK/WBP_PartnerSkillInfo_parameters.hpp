#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.AnmEvent_HideShow
// 0x0002 (0x0002 - 0x0000)
struct WBP_PartnerSkillInfo_C_AnmEvent_HideShow final
{
public:
	bool                                          Hide_0;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Override;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_AnmEvent_HideShow) == 0x000001, "Wrong alignment on WBP_PartnerSkillInfo_C_AnmEvent_HideShow");
static_assert(sizeof(WBP_PartnerSkillInfo_C_AnmEvent_HideShow) == 0x000002, "Wrong size on WBP_PartnerSkillInfo_C_AnmEvent_HideShow");
static_assert(offsetof(WBP_PartnerSkillInfo_C_AnmEvent_HideShow, Hide_0) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_AnmEvent_HideShow::Hide_0' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_AnmEvent_HideShow, Override) == 0x000001, "Member 'WBP_PartnerSkillInfo_C_AnmEvent_HideShow::Override' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.CanRideCharacter
// 0x0038 (0x0038 - 0x0000)
struct WBP_PartnerSkillInfo_C_CanRideCharacter final
{
public:
	bool                                          CanRide;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetOtomoPalHolder_OtomoPalHolder;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRideMarkerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_CanRideCharacter) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_CanRideCharacter");
static_assert(sizeof(WBP_PartnerSkillInfo_C_CanRideCharacter) == 0x000038, "Wrong size on WBP_PartnerSkillInfo_C_CanRideCharacter");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CanRide) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CanRide' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_GetOtomoPalHolder_OtomoPalHolder) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_GetOtomoPalHolder_OtomoPalHolder' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_CanRideCharacter, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'WBP_PartnerSkillInfo_C_CanRideCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Change Ride Key Guide
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide final
{
public:
	bool                                          Ride;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0020(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0038(0x0018)()
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide) == 0x000050, "Wrong size on WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide, Ride) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide::Ride' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide, CallFunc_SelectText_ReturnValue) == 0x000038, "Member 'WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide::CallFunc_SelectText_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Check Partner Skill Unlocked Timer
// 0x0078 (0x0078 - 0x0000)
struct WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer final
{
public:
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRideCharacter_CanRide;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistActiveSkill_ReturnValue;           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Partner_Skill_Name_Text_SkillNameText; // 0x0030(0x0018)()
	bool                                          CallFunc_BooleanNOR_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0050(0x0018)()
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRestrictedByItems_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer) == 0x000078, "Wrong size on WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_BooleanOR_ReturnValue) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_CanRideCharacter_CanRide) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_CanRideCharacter_CanRide' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_IsExistActiveSkill_ReturnValue) == 0x000029, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_IsExistActiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_Get_Partner_Skill_Name_Text_SkillNameText) == 0x000030, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_Get_Partner_Skill_Name_Text_SkillNameText' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_BooleanNOR_ReturnValue) == 0x000048, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_BooleanNOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_SelectText_ReturnValue) == 0x000050, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1) == 0x000068, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_IsRestrictedByItems_ReturnValue) == 0x000070, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_IsRestrictedByItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'WBP_PartnerSkillInfo_C_Check_Partner_Skill_Unlocked_Timer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.EndExecuteAnmTimer
// 0x0020 (0x0020 - 0x0000)
struct WBP_PartnerSkillInfo_C_EndExecuteAnmTimer final
{
public:
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEffectTimeRatio_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_EndExecuteAnmTimer");
static_assert(sizeof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer) == 0x000020, "Wrong size on WBP_PartnerSkillInfo_C_EndExecuteAnmTimer");
static_assert(offsetof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_EndExecuteAnmTimer::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer, CallFunc_GetEffectTimeRatio_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_EndExecuteAnmTimer::CallFunc_GetEffectTimeRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_PartnerSkillInfo_C_EndExecuteAnmTimer::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer, CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_EndExecuteAnmTimer::CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_EndExecuteAnmTimer, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_EndExecuteAnmTimer::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ExecuteUbergraph_WBP_PartnerSkillInfo
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint& CoolDownTime, const struct FFixedPoint& CoolDownTimeMax)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue;     // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue_1;   // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_InvalidateTimerHandle_ReturnValue_2;   // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0070(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint& EffectTime, const struct FFixedPoint& EffectTimeMax)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistActiveSkill_ReturnValue;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExistActiveSkill_ReturnValue_1;         // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Hide;                           // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Override;                       // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97[0x1];                                       // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x2];                                       // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsExecuting)>             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo");
static_assert(sizeof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo) == 0x0000D0, "Wrong size on WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, EntryPoint) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_K2_InvalidateTimerHandle_ReturnValue) == 0x000048, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_K2_InvalidateTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_K2_InvalidateTimerHandle_ReturnValue_1) == 0x000050, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_K2_InvalidateTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_4) == 0x000058, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_K2_InvalidateTimerHandle_ReturnValue_2) == 0x000068, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_K2_InvalidateTimerHandle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_5) == 0x000078, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000088, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_IsExistActiveSkill_ReturnValue) == 0x000090, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_IsExistActiveSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_IsExistActiveSkill_ReturnValue_1) == 0x000092, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_IsExistActiveSkill_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_IsValid_ReturnValue_1) == 0x000093, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CustomEvent_Hide) == 0x000094, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CustomEvent_Hide' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CustomEvent_Override) == 0x000095, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CustomEvent_Override' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000096, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A0, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, Temp_bool_Variable) == 0x0000B0, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, Temp_byte_Variable) == 0x0000B1, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000B4, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, Temp_byte_Variable_1) == 0x0000C4, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, K2Node_Select_Default) == 0x0000C5, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Get Partner Skill Name Text
// 0x0090 (0x0090 - 0x0000)
struct WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text final
{
public:
	class FText                                   SkillNameText;                                     // 0x0000(0x0018)(Parm, OutParm)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetOtomoPalHolder_OtomoPalHolder;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetOtomoPalHolder_OtomoPalHolder_1;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0078(0x0018)()
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text) == 0x000090, "Wrong size on WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, SkillNameText) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::SkillNameText' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetOtomoPalHolder_OtomoPalHolder) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetOtomoPalHolder_OtomoPalHolder' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetOtomoPalHolder_OtomoPalHolder_1) == 0x000030, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetOtomoPalHolder_OtomoPalHolder_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x000038, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetIndividualParameter_ReturnValue) == 0x000050, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetCharacterID_ReturnValue) == 0x00005C, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000064, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetPartnerSkillMsgID_OutMsgID) == 0x00006C, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetPartnerSkillMsgID_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text, CallFunc_GetLocalizedText_ReturnValue) == 0x000078, "Member 'WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetOtomoPalHolder
// 0x0020 (0x0020 - 0x0000)
struct WBP_PartnerSkillInfo_C_GetOtomoPalHolder final
{
public:
	class UBP_OtomoPalHolderComponent_C*          OtomoPalHolder;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_GetOtomoPalHolder");
static_assert(sizeof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder) == 0x000020, "Wrong size on WBP_PartnerSkillInfo_C_GetOtomoPalHolder");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder, OtomoPalHolder) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_GetOtomoPalHolder::OtomoPalHolder' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_GetOtomoPalHolder::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_GetOtomoPalHolder::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetOtomoPalHolder, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_GetOtomoPalHolder::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetPartnerSkillParameter
// 0x0030 (0x0030 - 0x0000)
struct WBP_PartnerSkillInfo_C_GetPartnerSkillParameter final
{
public:
	class UPalPartnerSkillParameterComponent*     PartnerSkillParameter;                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetOtomoPalHolder_OtomoPalHolder;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetOtomoPalHolder_OtomoPalHolder_1;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_GetPartnerSkillParameter");
static_assert(sizeof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter) == 0x000030, "Wrong size on WBP_PartnerSkillInfo_C_GetPartnerSkillParameter");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_GetOtomoPalHolder_OtomoPalHolder) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_GetOtomoPalHolder_OtomoPalHolder' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_GetOtomoPalHolder_OtomoPalHolder_1) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_GetOtomoPalHolder_OtomoPalHolder_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_GetPartnerSkillParameter, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_GetPartnerSkillParameter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStartCoop
// 0x0010 (0x0010 - 0x0000)
struct WBP_PartnerSkillInfo_C_OnStartCoop final
{
public:
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsToggleKey_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_OnStartCoop) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_OnStartCoop");
static_assert(sizeof(WBP_PartnerSkillInfo_C_OnStartCoop) == 0x000010, "Wrong size on WBP_PartnerSkillInfo_C_OnStartCoop");
static_assert(offsetof(WBP_PartnerSkillInfo_C_OnStartCoop, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_OnStartCoop::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_OnStartCoop, CallFunc_IsToggleKey_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_OnStartCoop::CallFunc_IsToggleKey_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStopCoop
// 0x0010 (0x0010 - 0x0000)
struct WBP_PartnerSkillInfo_C_OnStopCoop final
{
public:
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsToggleKey_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_OnStopCoop) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_OnStopCoop");
static_assert(sizeof(WBP_PartnerSkillInfo_C_OnStopCoop) == 0x000010, "Wrong size on WBP_PartnerSkillInfo_C_OnStopCoop");
static_assert(offsetof(WBP_PartnerSkillInfo_C_OnStopCoop, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_OnStopCoop::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_OnStopCoop, CallFunc_IsToggleKey_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_OnStopCoop::CallFunc_IsToggleKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_OnStopCoop, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PartnerSkillInfo_C_OnStopCoop::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Setup
// 0x0058 (0x0058 - 0x0000)
struct WBP_PartnerSkillInfo_C_Setup final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Setup) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Setup");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Setup) == 0x000058, "Wrong size on WBP_PartnerSkillInfo_C_Setup");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_Setup::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'WBP_PartnerSkillInfo_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.SetupDisplay
// 0x0030 (0x0030 - 0x0000)
struct WBP_PartnerSkillInfo_C_SetupDisplay final
{
public:
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRideCharacter_CanRide;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolDown_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint                            CallFunc_GetCoolDownTimeMax_ReturnValue;           // 0x0020(0x0004)(ConstParm, NoDestructor)
	struct FFixedPoint                            CallFunc_GetEffectTimeMax_ReturnValue;             // 0x0024(0x0004)(ConstParm, NoDestructor)
	struct FFixedPoint                            CallFunc_GetEffectTime_ReturnValue;                // 0x0028(0x0004)(ConstParm, NoDestructor)
	struct FFixedPoint                            CallFunc_GetCoolDownTime_ReturnValue;              // 0x002C(0x0004)(ConstParm, NoDestructor)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_SetupDisplay) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_SetupDisplay");
static_assert(sizeof(WBP_PartnerSkillInfo_C_SetupDisplay) == 0x000030, "Wrong size on WBP_PartnerSkillInfo_C_SetupDisplay");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_CanRideCharacter_CanRide) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_CanRideCharacter_CanRide' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_IsCoolDown_ReturnValue) == 0x00000A, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_IsCoolDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter_2' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetCoolDownTimeMax_ReturnValue) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetCoolDownTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetEffectTimeMax_ReturnValue) == 0x000024, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetEffectTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetEffectTime_ReturnValue) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetEffectTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_SetupDisplay, CallFunc_GetCoolDownTime_ReturnValue) == 0x00002C, "Member 'WBP_PartnerSkillInfo_C_SetupDisplay::CallFunc_GetCoolDownTime_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Should Show UI
// 0x0020 (0x0020 - 0x0000)
struct WBP_PartnerSkillInfo_C_Should_Show_UI final
{
public:
	bool                                          ShouldShow;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint                            CallFunc_GetEffectTimeMax_ReturnValue;             // 0x0014(0x0004)(ConstParm, NoDestructor)
	struct FFixedPoint                            CallFunc_GetEffectTime_ReturnValue;                // 0x0018(0x0004)(ConstParm, NoDestructor)
	bool                                          CallFunc_Less_FixedPointFixedPoint_ReturnValue;    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Should_Show_UI) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Should_Show_UI");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Should_Show_UI) == 0x000020, "Wrong size on WBP_PartnerSkillInfo_C_Should_Show_UI");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, ShouldShow) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::ShouldShow' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_GetEffectTimeMax_ReturnValue) == 0x000014, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_GetEffectTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_GetEffectTime_ReturnValue) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_GetEffectTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_Less_FixedPointFixedPoint_ReturnValue) == 0x00001C, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_Less_FixedPointFixedPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Should_Show_UI, CallFunc_BooleanOR_ReturnValue) == 0x00001D, "Member 'WBP_PartnerSkillInfo_C_Should_Show_UI::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Show Effect Time
// 0x0010 (0x0010 - 0x0000)
struct WBP_PartnerSkillInfo_C_Show_Effect_Time final
{
public:
	class UPalPartnerSkillParameterComponent*     CallFunc_GetPartnerSkillParameter_PartnerSkillParameter; // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRestrictedByItems_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Show_Effect_Time) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Show_Effect_Time");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Show_Effect_Time) == 0x000010, "Wrong size on WBP_PartnerSkillInfo_C_Show_Effect_Time");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Show_Effect_Time, CallFunc_GetPartnerSkillParameter_PartnerSkillParameter) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Show_Effect_Time::CallFunc_GetPartnerSkillParameter_PartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Show_Effect_Time, CallFunc_IsRestrictedByItems_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Show_Effect_Time::CallFunc_IsRestrictedByItems_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowCoolDownTime
// 0x0020 (0x0020 - 0x0000)
struct WBP_PartnerSkillInfo_C_ShowCoolDownTime final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint                            CallFunc_GetCoolDownTimeMax_ReturnValue;           // 0x0004(0x0004)(ConstParm, NoDestructor)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_ShowCoolDownTime) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_ShowCoolDownTime");
static_assert(sizeof(WBP_PartnerSkillInfo_C_ShowCoolDownTime) == 0x000020, "Wrong size on WBP_PartnerSkillInfo_C_ShowCoolDownTime");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowCoolDownTime, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_ShowCoolDownTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowCoolDownTime, CallFunc_GetCoolDownTimeMax_ReturnValue) == 0x000004, "Member 'WBP_PartnerSkillInfo_C_ShowCoolDownTime::CallFunc_GetCoolDownTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowCoolDownTime, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_ShowCoolDownTime::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowCoolDownTime, CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_ShowCoolDownTime::CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowCoolDownTime, CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_ShowCoolDownTime::CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowSkillExecuteAnm
// 0x0028 (0x0028 - 0x0000)
struct WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm final
{
public:
	bool                                          IsExcuting;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm");
static_assert(sizeof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm) == 0x000028, "Wrong size on WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm, IsExcuting) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm::IsExcuting' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000001, "Member 'WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ToggleCoopText
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartnerSkillInfo_C_ToggleCoopText final
{
public:
	bool                                          ShowOriginal;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Partner_Skill_Name_Text_SkillNameText; // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0038(0x0018)()
};
static_assert(alignof(WBP_PartnerSkillInfo_C_ToggleCoopText) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_ToggleCoopText");
static_assert(sizeof(WBP_PartnerSkillInfo_C_ToggleCoopText) == 0x000050, "Wrong size on WBP_PartnerSkillInfo_C_ToggleCoopText");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ToggleCoopText, ShowOriginal) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_ToggleCoopText::ShowOriginal' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ToggleCoopText, CallFunc_Get_Partner_Skill_Name_Text_SkillNameText) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_ToggleCoopText::CallFunc_Get_Partner_Skill_Name_Text_SkillNameText' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ToggleCoopText, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_ToggleCoopText::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_ToggleCoopText, CallFunc_SelectText_ReturnValue) == 0x000038, "Member 'WBP_PartnerSkillInfo_C_ToggleCoopText::CallFunc_SelectText_ReturnValue' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Cool Down Time
// 0x0020 (0x0020 - 0x0000)
struct WBP_PartnerSkillInfo_C_Update_Cool_Down_Time final
{
public:
	struct FFixedPoint                            Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                            Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue_1;  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Update_Cool_Down_Time");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time) == 0x000020, "Wrong size on WBP_PartnerSkillInfo_C_Update_Cool_Down_Time");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, Now) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::Now' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, Max) == 0x000004, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::Max' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, CallFunc_Convert_FixedPointToFloat_ReturnValue_1) == 0x00000C, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::CallFunc_Convert_FixedPointToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::CallFunc_Set_Cool_Down_Gauge_Percent_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Cool_Down_Time, CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_Update_Cool_Down_Time::CallFunc_Set_Cool_Down_Gauge_Percent_Now_ImplicitCast' has a wrong offset!");

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Effect Time
// 0x0038 (0x0038 - 0x0000)
struct WBP_PartnerSkillInfo_C_Update_Effect_Time final
{
public:
	struct FFixedPoint                            Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                            Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue_1;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartnerSkillInfo_C_Update_Effect_Time) == 0x000008, "Wrong alignment on WBP_PartnerSkillInfo_C_Update_Effect_Time");
static_assert(sizeof(WBP_PartnerSkillInfo_C_Update_Effect_Time) == 0x000038, "Wrong size on WBP_PartnerSkillInfo_C_Update_Effect_Time");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, Now) == 0x000000, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::Now' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, Max) == 0x000004, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::Max' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x000008, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_Convert_FixedPointToFloat_ReturnValue_1) == 0x000010, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_Convert_FixedPointToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000020, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PartnerSkillInfo_C_Update_Effect_Time, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'WBP_PartnerSkillInfo_C_Update_Effect_Time::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

