#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_EnableSummonPalGuide
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide final
{
public:
	bool                                          EnableFlag;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide) == 0x000001, "Wrong alignment on WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide) == 0x000001, "Wrong size on WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide, EnableFlag) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide::EnableFlag' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.BindPartnerSkillCTTime
// 0x0078 (0x0078 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPartnerSkillParameterComponent*     CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint& CoolDownTime, const struct FFixedPoint& CoolDownTimeMax)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint                            CallFunc_GetCoolDownTime_ReturnValue;              // 0x004C(0x0004)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsCoolDown_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0058(0x0018)()
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime) == 0x000078, "Wrong size on WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, Character) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::Character' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_GetCoolDownTime_ReturnValue) == 0x00004C, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_GetCoolDownTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_IsCoolDown_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_IsCoolDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x000054, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000058, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x000070, "Member 'WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_CustomEvent final
{
public:
	int32                                         AddLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_CustomEvent) == 0x000004, "Wrong alignment on WBP_Ingame_PalHPGauge_C_CustomEvent");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_CustomEvent) == 0x000008, "Wrong size on WBP_Ingame_PalHPGauge_C_CustomEvent");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_CustomEvent, AddLevel) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_CustomEvent::AddLevel' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_CustomEvent, NowLevel) == 0x000004, "Member 'WBP_Ingame_PalHPGauge_C_CustomEvent::NowLevel' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.ExecuteUbergraph_WBP_Ingame_PalHPGauge
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint                            CallFunc_GetCoolDownTimeMax_ReturnValue;           // 0x0018(0x0004)(ConstParm, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B[0x1];                                       // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_EnableFlag;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPreviousOtomoSlotID_ReturnValue;       // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNextOtomoSlotID_ReturnValue;           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00E0(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0124(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_5;            // 0x0144(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_addLevel;                       // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_nowLevel;                       // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint                            K2Node_CustomEvent_Now;                            // 0x0180(0x0004)(NoDestructor)
	struct FFixedPoint                            K2Node_CustomEvent_Max;                            // 0x0184(0x0004)(NoDestructor)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0190(0x0018)()
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge) == 0x0001B0, "Wrong size on WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetCoolDownTimeMax_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetCoolDownTimeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetEndTime_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000040, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000048, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1) == 0x000060, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1) == 0x000068, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetEndTime_ReturnValue_1) == 0x000074, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000078, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000080, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2) == 0x000088, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2) == 0x000090, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_IsValid_ReturnValue_3) == 0x000098, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000099, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00009A, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_2) == 0x00009C, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x0000B0, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CustomEvent_EnableFlag) == 0x0000B8, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CustomEvent_EnableFlag' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetPreviousOtomoSlotID_ReturnValue) == 0x0000BC, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetPreviousOtomoSlotID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetNextOtomoSlotID_ReturnValue) == 0x0000C4, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetNextOtomoSlotID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000C8, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x0000CC, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000D0, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000D8, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_Event_MyGeometry) == 0x0000E0, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_Event_InDeltaTime) == 0x000120, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_3) == 0x000124, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_4) == 0x000134, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_5) == 0x000144, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CreateDelegate_OutputDelegate_6) == 0x000154, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetPalmi_ReturnValue) == 0x000168, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CustomEvent_addLevel) == 0x000170, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CustomEvent_addLevel' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CustomEvent_nowLevel) == 0x000174, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CustomEvent_nowLevel' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x000178, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CustomEvent_Now) == 0x000180, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CustomEvent_Now' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, K2Node_CustomEvent_Max) == 0x000184, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::K2Node_CustomEvent_Max' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x000188, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000190, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x0001A8, "Member 'WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetNextOtomoSlot
// 0x0030 (0x0030 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNextOtomoSlotID_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot) == 0x000030, "Wrong size on WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, Slot_0) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, IsEmpty) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::IsEmpty' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, CallFunc_GetNextOtomoSlotID_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::CallFunc_GetNextOtomoSlotID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetPrevOtomoSlot
// 0x0030 (0x0030 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPreviousOtomoSlotID_ReturnValue;       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot) == 0x000030, "Wrong size on WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, Slot_0) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, IsEmpty) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::IsEmpty' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, CallFunc_GetPreviousOtomoSlotID_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::CallFunc_GetPreviousOtomoSlotID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.On Update Otomo Index
// 0x0060 (0x0060 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index final
{
public:
	int32                                         TmpSelectedIndex;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0040(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0048(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0050(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index) == 0x000060, "Wrong size on WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, TmpSelectedIndex) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::TmpSelectedIndex' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001D, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetHandle_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetHP_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000048, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000058, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Index::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.On Update Otomo Slot
// 0x0028 (0x0028 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot final
{
public:
	int32                                         SlotIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          LastHandle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot) == 0x000028, "Wrong size on WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, SlotIndex) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::SlotIndex' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, LastHandle) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::LastHandle' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot, CallFunc_IsEmpty_ReturnValue) == 0x000025, "Member 'WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnActivatedOtomo
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_OnActivatedOtomo final
{
public:
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_OnActivatedOtomo) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_OnActivatedOtomo");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_OnActivatedOtomo) == 0x000010, "Wrong size on WBP_Ingame_PalHPGauge_C_OnActivatedOtomo");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnActivatedOtomo, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_OnActivatedOtomo::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnActivatedOtomo, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_OnActivatedOtomo::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnChangedWeapon
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_OnChangedWeapon final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ThrowPalWeapon_C*                   K2Node_DynamicCast_AsBP_Throw_Pal_Weapon;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_OnChangedWeapon");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon) == 0x000018, "Wrong size on WBP_Ingame_PalHPGauge_C_OnChangedWeapon");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon, Weapon) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_OnChangedWeapon::Weapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon, K2Node_DynamicCast_AsBP_Throw_Pal_Weapon) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_OnChangedWeapon::K2Node_DynamicCast_AsBP_Throw_Pal_Weapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_OnChangedWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnChangedWeapon, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_Ingame_PalHPGauge_C_OnChangedWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnCTTimeUpdate
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate final
{
public:
	struct FFixedPoint                            Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                            Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate) == 0x000004, "Wrong alignment on WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate) == 0x000008, "Wrong size on WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate, Now) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate::Now' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate, Max) == 0x000004, "Member 'WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate::Max' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnEndAim
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_OnEndAim final
{
public:
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_OnEndAim) == 0x000001, "Wrong alignment on WBP_Ingame_PalHPGauge_C_OnEndAim");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_OnEndAim) == 0x000001, "Wrong size on WBP_Ingame_PalHPGauge_C_OnEndAim");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_OnEndAim, CallFunc_BooleanOR_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_OnEndAim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Setup
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_Setup final
{
public:
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalPlayerController_C*              K2Node_DynamicCast_AsBP_Pal_Player_Controller;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_Setup) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_Setup");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_Setup) == 0x0000D8, "Wrong size on WBP_Ingame_PalHPGauge_C_Setup");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_DynamicCast_AsBP_Pal_Player_Controller) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_DynamicCast_AsBP_Pal_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x00004C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_4) == 0x00005C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000070, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000079, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_5) == 0x00007C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_6) == 0x00008C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_7) == 0x00009C, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000AC, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x0000C0, "Member 'WBP_Ingame_PalHPGauge_C_Setup::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x0000C8, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Setup, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'WBP_Ingame_PalHPGauge_C_Setup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_Tick) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_Tick");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_Tick) == 0x000048, "Wrong size on WBP_Ingame_PalHPGauge_C_Tick");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Ingame_PalHPGauge_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UnbindPartnerSkill
// 0x0034 (0x0034 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint& CoolDownTime, const struct FFixedPoint& CoolDownTimeMax)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill) == 0x000004, "Wrong alignment on WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill) == 0x000034, "Wrong size on WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalHPGauge_C_UnbindPartnerSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Update Level Binded
// 0x0038 (0x0038 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_Update_Level_Binded final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_Update_Level_Binded");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded) == 0x000038, "Wrong size on WBP_Ingame_PalHPGauge_C_Update_Level_Binded");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, NewLevel) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, Temp_bool_Variable) == 0x000004, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, Temp_object_Variable) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, Temp_object_Variable_1) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Level_Binded, K2Node_Select_Default) == 0x000030, "Member 'WBP_Ingame_PalHPGauge_C_Update_Level_Binded::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Update Otomo List
// 0x0058 (0x0058 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_Update_Otomo_List final
{
public:
	class UPalOtomoHolderComponentBase*           TmpOtomoholder;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetPrevOtomoSlot_Slot;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPrevOtomoSlot_IsEmpty;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetNextOtomoSlot_Slot;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNextOtomoSlot_IsEmpty;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsALLEmpty_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetOtomoCount_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_Update_Otomo_List");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List) == 0x000058, "Wrong size on WBP_Ingame_PalHPGauge_C_Update_Otomo_List");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, TmpOtomoholder) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::TmpOtomoholder' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetPrevOtomoSlot_Slot) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetPrevOtomoSlot_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetPrevOtomoSlot_IsEmpty) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetPrevOtomoSlot_IsEmpty' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetNextOtomoSlot_Slot) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetNextOtomoSlot_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetNextOtomoSlot_IsEmpty) == 0x000020, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetNextOtomoSlot_IsEmpty' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000024, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_TryGetOtomoActorBySlotIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_IsALLEmpty_ReturnValue) == 0x000048, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_IsALLEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, CallFunc_GetOtomoCount_ReturnValue) == 0x00004C, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::CallFunc_GetOtomoCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, K2Node_SwitchInteger_CmpSuccess) == 0x000050, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_Update_Otomo_List, K2Node_SwitchInteger_CmpSuccess_1) == 0x000051, "Member 'WBP_Ingame_PalHPGauge_C_Update_Otomo_List::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateHP_Binded
// 0x0020 (0x0020 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_UpdateHP_Binded final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_UpdateHP_Binded");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded) == 0x000020, "Wrong size on WBP_Ingame_PalHPGauge_C_UpdateHP_Binded");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded, NowHP) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_UpdateHP_Binded::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded, NowMaxHP) == 0x000008, "Member 'WBP_Ingame_PalHPGauge_C_UpdateHP_Binded::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_UpdateHP_Binded::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateHP_Binded, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PalHPGauge_C_UpdateHP_Binded::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateNickName_Binded
// 0x0028 (0x0028 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded) == 0x000008, "Wrong alignment on WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded) == 0x000028, "Wrong size on WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded, NewNickName) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.SetElementType
// 0x0003 (0x0003 - 0x0000)
struct WBP_Ingame_PalHPGauge_C_SetElementType final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PalHPGauge_C_SetElementType) == 0x000001, "Wrong alignment on WBP_Ingame_PalHPGauge_C_SetElementType");
static_assert(sizeof(WBP_Ingame_PalHPGauge_C_SetElementType) == 0x000003, "Wrong size on WBP_Ingame_PalHPGauge_C_SetElementType");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_SetElementType, Type1) == 0x000000, "Member 'WBP_Ingame_PalHPGauge_C_SetElementType::Type1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_SetElementType, Type2) == 0x000001, "Member 'WBP_Ingame_PalHPGauge_C_SetElementType::Type2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PalHPGauge_C_SetElementType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_Ingame_PalHPGauge_C_SetElementType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

