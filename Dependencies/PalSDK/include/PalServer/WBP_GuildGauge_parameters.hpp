#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "E_PalUIGuildHPGaugeDisplayType_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_GuildGauge.WBP_GuildGauge_C.ExecuteUbergraph_WBP_GuildGauge
// 0x0020 (0x0020 - 0x0000)
struct WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge");
static_assert(sizeof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge) == 0x000020, "Wrong size on WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge");
static_assert(offsetof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge, EntryPoint) == 0x000000, "Member 'WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000018, "Member 'WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.Set Display Type
// 0x0210 (0x0210 - 0x0000)
struct WBP_GuildGauge_C_Set_Display_Type final
{
public:
	E_PalUIGuildHPGaugeDisplayType                NewDisplayType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0040(0x00D0)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0110(0x0014)()
	uint8                                         Pad_124[0xC];                                      // 0x0124(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0130(0x00D0)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildGauge_C_Set_Display_Type) == 0x000010, "Wrong alignment on WBP_GuildGauge_C_Set_Display_Type");
static_assert(sizeof(WBP_GuildGauge_C_Set_Display_Type) == 0x000210, "Wrong size on WBP_GuildGauge_C_Set_Display_Type");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, NewDisplayType) == 0x000000, "Member 'WBP_GuildGauge_C_Set_Display_Type::NewDisplayType' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_Margin) == 0x000004, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_Margin_1) == 0x000028, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_SlateBrush) == 0x000040, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_SlateColor_1) == 0x000110, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, K2Node_MakeStruct_SlateBrush_1) == 0x000130, "Member 'WBP_GuildGauge_C_Set_Display_Type::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000200, "Member 'WBP_GuildGauge_C_Set_Display_Type::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_Set_Display_Type, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000201, "Member 'WBP_GuildGauge_C_Set_Display_Type::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.SetDying
// 0x0020 (0x0020 - 0x0000)
struct WBP_GuildGauge_C_SetDying final
{
public:
	class UBP_Status_Dying_C*                     DyingStatus;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(double DyingHP, double MaxDyingHP)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildGauge_C_SetDying) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_SetDying");
static_assert(sizeof(WBP_GuildGauge_C_SetDying) == 0x000020, "Wrong size on WBP_GuildGauge_C_SetDying");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, DyingStatus) == 0x000000, "Member 'WBP_GuildGauge_C_SetDying::DyingStatus' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, Enable) == 0x000008, "Member 'WBP_GuildGauge_C_SetDying::Enable' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, Temp_bool_Variable) == 0x000009, "Member 'WBP_GuildGauge_C_SetDying::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, Temp_byte_Variable) == 0x00000A, "Member 'WBP_GuildGauge_C_SetDying::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, Temp_byte_Variable_1) == 0x00000B, "Member 'WBP_GuildGauge_C_SetDying::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, K2Node_Select_Default) == 0x00000C, "Member 'WBP_GuildGauge_C_SetDying::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000D, "Member 'WBP_GuildGauge_C_SetDying::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetDying, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_GuildGauge_C_SetDying::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.SetGuildName
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_GuildGauge_C_SetGuildName final
{
public:
	class FString                                 GuildName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(WBP_GuildGauge_C_SetGuildName) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_SetGuildName");
static_assert(sizeof(WBP_GuildGauge_C_SetGuildName) == 0x0000A0, "Wrong size on WBP_GuildGauge_C_SetGuildName");
static_assert(offsetof(WBP_GuildGauge_C_SetGuildName, GuildName) == 0x000000, "Member 'WBP_GuildGauge_C_SetGuildName::GuildName' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetGuildName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_GuildGauge_C_SetGuildName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetGuildName, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_GuildGauge_C_SetGuildName::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetGuildName, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_GuildGauge_C_SetGuildName::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetGuildName, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_GuildGauge_C_SetGuildName::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.SetHP
// 0x0038 (0x0038 - 0x0000)
struct WBP_GuildGauge_C_SetHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          MaxHP;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildGauge_C_SetHP) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_SetHP");
static_assert(sizeof(WBP_GuildGauge_C_SetHP) == 0x000038, "Wrong size on WBP_GuildGauge_C_SetHP");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, NowHP) == 0x000000, "Member 'WBP_GuildGauge_C_SetHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, MaxHP) == 0x000008, "Member 'WBP_GuildGauge_C_SetHP::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000010, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000014, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000020, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetHP, CallFunc_SetPercent_percent_ImplicitCast) == 0x000030, "Member 'WBP_GuildGauge_C_SetHP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.SetLevel
// 0x0020 (0x0020 - 0x0000)
struct WBP_GuildGauge_C_SetLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_GuildGauge_C_SetLevel) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_SetLevel");
static_assert(sizeof(WBP_GuildGauge_C_SetLevel) == 0x000020, "Wrong size on WBP_GuildGauge_C_SetLevel");
static_assert(offsetof(WBP_GuildGauge_C_SetLevel, Level) == 0x000000, "Member 'WBP_GuildGauge_C_SetLevel::Level' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_GuildGauge_C_SetLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.SetNickName
// 0x0028 (0x0028 - 0x0000)
struct WBP_GuildGauge_C_SetNickName final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_GuildGauge_C_SetNickName) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_SetNickName");
static_assert(sizeof(WBP_GuildGauge_C_SetNickName) == 0x000028, "Wrong size on WBP_GuildGauge_C_SetNickName");
static_assert(offsetof(WBP_GuildGauge_C_SetNickName, NewNickName) == 0x000000, "Member 'WBP_GuildGauge_C_SetNickName::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_SetNickName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_GuildGauge_C_SetNickName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_GuildGauge.WBP_GuildGauge_C.UpdateForTick
// 0x0010 (0x0010 - 0x0000)
struct WBP_GuildGauge_C_UpdateForTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Update_deltaTime_ImplicitCast;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildGauge_C_UpdateForTick) == 0x000008, "Wrong alignment on WBP_GuildGauge_C_UpdateForTick");
static_assert(sizeof(WBP_GuildGauge_C_UpdateForTick) == 0x000010, "Wrong size on WBP_GuildGauge_C_UpdateForTick");
static_assert(offsetof(WBP_GuildGauge_C_UpdateForTick, DeltaTime) == 0x000000, "Member 'WBP_GuildGauge_C_UpdateForTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_GuildGauge_C_UpdateForTick, CallFunc_Update_deltaTime_ImplicitCast) == 0x000008, "Member 'WBP_GuildGauge_C_UpdateForTick::CallFunc_Update_deltaTime_ImplicitCast' has a wrong offset!");

}

