#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.ExecuteUbergraph_WBP_IngameBossHP
// 0x0060 (0x0060 - 0x0000)
struct WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP");
static_assert(sizeof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP) == 0x000060, "Wrong size on WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP");
static_assert(offsetof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP, EntryPoint) == 0x000000, "Member 'WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP, CallFunc_SpawnObject_ReturnValue) == 0x000058, "Member 'WBP_IngameBossHP_C_ExecuteUbergraph_WBP_IngameBossHP::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.Set Enable Talent Detail
// 0x02E0 (0x02E0 - 0x0000)
struct WBP_IngameBossHP_C_Set_Enable_Talent_Detail final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       Parameter;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0018(0x02A8)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue; // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue; // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsTowerBoss_ReturnValue;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsRaidBoss_ReturnValue;                // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_Set_Enable_Talent_Detail");
static_assert(sizeof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail) == 0x0002E0, "Wrong size on WBP_IngameBossHP_C_Set_Enable_Talent_Detail");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, IsEnable) == 0x000000, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, Parameter) == 0x000008, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000010, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameter_ReturnValue) == 0x000018, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_IsValid_ReturnValue) == 0x0002C0, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue) == 0x0002C4, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_Defense_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue) == 0x0002C8, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_Shot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue) == 0x0002CC, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetSaveParameterValue_Talent_HP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetCharacterID_ReturnValue) == 0x0002D0, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetIsTowerBoss_ReturnValue) == 0x0002D8, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetIsTowerBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_GetIsRaidBoss_ReturnValue) == 0x0002D9, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_GetIsRaidBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Set_Enable_Talent_Detail, CallFunc_BooleanOR_ReturnValue) == 0x0002DA, "Member 'WBP_IngameBossHP_C_Set_Enable_Talent_Detail::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetBossName
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameBossHP_C_SetBossName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IngameBossHP_C_SetBossName) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_SetBossName");
static_assert(sizeof(WBP_IngameBossHP_C_SetBossName) == 0x000018, "Wrong size on WBP_IngameBossHP_C_SetBossName");
static_assert(offsetof(WBP_IngameBossHP_C_SetBossName, InText) == 0x000000, "Member 'WBP_IngameBossHP_C_SetBossName::InText' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetBossPrefix
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameBossHP_C_SetBossPrefix final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IngameBossHP_C_SetBossPrefix) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_SetBossPrefix");
static_assert(sizeof(WBP_IngameBossHP_C_SetBossPrefix) == 0x000018, "Wrong size on WBP_IngameBossHP_C_SetBossPrefix");
static_assert(offsetof(WBP_IngameBossHP_C_SetBossPrefix, Text) == 0x000000, "Member 'WBP_IngameBossHP_C_SetBossPrefix::Text' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetElement
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameBossHP_C_SetElement final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_SetElement) == 0x000001, "Wrong alignment on WBP_IngameBossHP_C_SetElement");
static_assert(sizeof(WBP_IngameBossHP_C_SetElement) == 0x000004, "Wrong size on WBP_IngameBossHP_C_SetElement");
static_assert(offsetof(WBP_IngameBossHP_C_SetElement, Type1) == 0x000000, "Member 'WBP_IngameBossHP_C_SetElement::Type1' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetElement, Type2) == 0x000001, "Member 'WBP_IngameBossHP_C_SetElement::Type2' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetElement, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_IngameBossHP_C_SetElement::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetElement, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'WBP_IngameBossHP_C_SetElement::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetHP
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_IngameBossHP_C_SetHP final
{
public:
	int32                                         NowHP;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHP;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0078(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_SetHP) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_SetHP");
static_assert(sizeof(WBP_IngameBossHP_C_SetHP) == 0x0000E0, "Wrong size on WBP_IngameBossHP_C_SetHP");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, NowHP) == 0x000000, "Member 'WBP_IngameBossHP_C_SetHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, MaxHP) == 0x000004, "Member 'WBP_IngameBossHP_C_SetHP::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_IngameBossHP_C_SetHP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000078, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, K2Node_MakeArray_Array) == 0x000090, "Member 'WBP_IngameBossHP_C_SetHP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0000A0, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000C8, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetHP, CallFunc_SetPercent_percent_ImplicitCast) == 0x0000D8, "Member 'WBP_IngameBossHP_C_SetHP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetLevel
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameBossHP_C_SetLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_IngameBossHP_C_SetLevel) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_SetLevel");
static_assert(sizeof(WBP_IngameBossHP_C_SetLevel) == 0x000020, "Wrong size on WBP_IngameBossHP_C_SetLevel");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevel, Level) == 0x000000, "Member 'WBP_IngameBossHP_C_SetLevel::Level' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_IngameBossHP_C_SetLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.SetLevelVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_IngameBossHP_C_SetLevelVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_SetLevelVisibility) == 0x000001, "Wrong alignment on WBP_IngameBossHP_C_SetLevelVisibility");
static_assert(sizeof(WBP_IngameBossHP_C_SetLevelVisibility) == 0x000005, "Wrong size on WBP_IngameBossHP_C_SetLevelVisibility");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevelVisibility, Visible) == 0x000000, "Member 'WBP_IngameBossHP_C_SetLevelVisibility::Visible' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevelVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_IngameBossHP_C_SetLevelVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevelVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_IngameBossHP_C_SetLevelVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevelVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_IngameBossHP_C_SetLevelVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_SetLevelVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_IngameBossHP_C_SetLevelVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameBossHP.WBP_IngameBossHP_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_IngameBossHP_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameBossHP_C_Tick) == 0x000008, "Wrong alignment on WBP_IngameBossHP_C_Tick");
static_assert(sizeof(WBP_IngameBossHP_C_Tick) == 0x000048, "Wrong size on WBP_IngameBossHP_C_Tick");
static_assert(offsetof(WBP_IngameBossHP_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_IngameBossHP_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_IngameBossHP_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_IngameBossHP_C_Tick::InDeltaTime' has a wrong offset!");

}

