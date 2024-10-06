#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	float                                         CoolRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateCoolDown_Cool_ImplicitCast;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000010, "Wrong size on WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0, CoolRate) == 0x000000, "Member 'WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0::CoolRate' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0, CallFunc_UpdateCoolDown_Cool_ImplicitCast) == 0x000008, "Member 'WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0::CallFunc_UpdateCoolDown_Cool_ImplicitCast' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ExecuteUbergraph_WBP_PalSkillEntry
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_SkillName;                      // 0x0048(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_Cool;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsCooling;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkill*                        K2Node_CustomEvent_ActiveSkill_1;                  // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolTimeFinish_ReturnValue;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float CoolRate)>               K2Node_CreateDelegate_OutputDelegate_3;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActiveSkill*                        K2Node_CustomEvent_ActiveSkill;                    // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Start;                          // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_3;                           // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry");
static_assert(sizeof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry) == 0x0000F0, "Wrong size on WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, EntryPoint) == 0x000000, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable) == 0x000004, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable_1) == 0x000018, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_bool_Variable) == 0x000019, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_struct_Variable) == 0x00001C, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_struct_Variable_1) == 0x00002C, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_bool_Variable_1) == 0x00003C, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable_2) == 0x00003D, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable_3) == 0x00003E, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_SkillName) == 0x000048, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_SkillName' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_bool_Variable_2) == 0x000060, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_Cool) == 0x000068, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_Cool' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_IsCooling) == 0x000070, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_IsCooling' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_Select_Default) == 0x000071, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_Select_Default_1) == 0x000074, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_ActiveSkill_1) == 0x000088, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_ActiveSkill_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_IsCoolTimeFinish_ReturnValue) == 0x000098, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_IsCoolTimeFinish_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CreateDelegate_OutputDelegate_1) == 0x00009C, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000BC, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable_4) == 0x0000CC, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_ActiveSkill) == 0x0000D0, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_ActiveSkill' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_byte_Variable_5) == 0x0000D8, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, Temp_bool_Variable_3) == 0x0000D9, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_CustomEvent_Start) == 0x0000DA, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_CustomEvent_Start' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_Select_Default_2) == 0x0000DB, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, K2Node_Select_Default_3) == 0x0000DC, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000E0, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000E8, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000EC, "Member 'WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.LongPress
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalSkillEntry_C_LongPress final
{
public:
	bool                                          Start;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_LongPress) == 0x000001, "Wrong alignment on WBP_PalSkillEntry_C_LongPress");
static_assert(sizeof(WBP_PalSkillEntry_C_LongPress) == 0x000001, "Wrong size on WBP_PalSkillEntry_C_LongPress");
static_assert(offsetof(WBP_PalSkillEntry_C_LongPress, Start) == 0x000000, "Member 'WBP_PalSkillEntry_C_LongPress::Start' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.SetSkillText
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalSkillEntry_C_SetSkillText final
{
public:
	class FText                                   SkillName;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PalSkillEntry_C_SetSkillText) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_SetSkillText");
static_assert(sizeof(WBP_PalSkillEntry_C_SetSkillText) == 0x000018, "Wrong size on WBP_PalSkillEntry_C_SetSkillText");
static_assert(offsetof(WBP_PalSkillEntry_C_SetSkillText, SkillName) == 0x000000, "Member 'WBP_PalSkillEntry_C_SetSkillText::SkillName' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Setup
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalSkillEntry_C_Setup final
{
public:
	class UPalActiveSkill*                        ActiveSkill;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_Setup) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_Setup");
static_assert(sizeof(WBP_PalSkillEntry_C_Setup) == 0x000008, "Wrong size on WBP_PalSkillEntry_C_Setup");
static_assert(offsetof(WBP_PalSkillEntry_C_Setup, ActiveSkill) == 0x000000, "Member 'WBP_PalSkillEntry_C_Setup::ActiveSkill' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ToggleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalSkillEntry_C_ToggleVisibility final
{
public:
	bool                                          IsCooling;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_ToggleVisibility) == 0x000001, "Wrong alignment on WBP_PalSkillEntry_C_ToggleVisibility");
static_assert(sizeof(WBP_PalSkillEntry_C_ToggleVisibility) == 0x000001, "Wrong size on WBP_PalSkillEntry_C_ToggleVisibility");
static_assert(offsetof(WBP_PalSkillEntry_C_ToggleVisibility, IsCooling) == 0x000000, "Member 'WBP_PalSkillEntry_C_ToggleVisibility::IsCooling' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Unbind
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalSkillEntry_C_Unbind final
{
public:
	class UPalActiveSkill*                        ActiveSkill;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_Unbind) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_Unbind");
static_assert(sizeof(WBP_PalSkillEntry_C_Unbind) == 0x000008, "Wrong size on WBP_PalSkillEntry_C_Unbind");
static_assert(offsetof(WBP_PalSkillEntry_C_Unbind, ActiveSkill) == 0x000000, "Member 'WBP_PalSkillEntry_C_Unbind::ActiveSkill' has a wrong offset!");

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.UpdateCoolDown
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalSkillEntry_C_UpdateCoolDown final
{
public:
	double                                        Cool;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalSkillEntry_C_UpdateCoolDown) == 0x000008, "Wrong alignment on WBP_PalSkillEntry_C_UpdateCoolDown");
static_assert(sizeof(WBP_PalSkillEntry_C_UpdateCoolDown) == 0x000008, "Wrong size on WBP_PalSkillEntry_C_UpdateCoolDown");
static_assert(offsetof(WBP_PalSkillEntry_C_UpdateCoolDown, Cool) == 0x000000, "Member 'WBP_PalSkillEntry_C_UpdateCoolDown::Cool' has a wrong offset!");

}

