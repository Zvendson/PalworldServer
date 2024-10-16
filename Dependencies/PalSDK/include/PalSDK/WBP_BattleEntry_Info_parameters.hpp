#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_BattleEntry_Info.WBP_BattleEntry_Info_C.ExecuteUbergraph_WBP_BattleEntry_Info
// 0x0230 (0x0230 - 0x0000)
struct WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BossType;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      K2Node_CustomEvent_Difficulty;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            K2Node_CustomEvent_EntryPlayers;                   // 0x0040(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0068(0x0010)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00C8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F0(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15B[0x5];                                      // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0188(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x01A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01B8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0218(0x0018)()
};
static_assert(alignof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info) == 0x000008, "Wrong alignment on WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info");
static_assert(sizeof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info) == 0x000230, "Wrong size on WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, EntryPoint) == 0x000000, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_CustomEvent_BossType) == 0x000030, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_CustomEvent_BossType' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_CustomEvent_Difficulty) == 0x000038, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_CustomEvent_Difficulty' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_CustomEvent_EntryPlayers) == 0x000040, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_CustomEvent_EntryPlayers' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Array_IsEmpty_ReturnValue) == 0x000050, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000060, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeStruct_DataTableRowHandle) == 0x000068, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000C8, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeArray_Array) == 0x0000E0, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F0, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Format_ReturnValue) == 0x000140, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_IsVisible_ReturnValue) == 0x000158, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_IsVisible_ReturnValue_1) == 0x000159, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Not_PreBool_ReturnValue) == 0x00015A, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_PlayAnimation_ReturnValue) == 0x000160, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000168, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000170, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_GetPalmi_ReturnValue) == 0x000178, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Array_Contains_ReturnValue) == 0x000180, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_IsValid_ReturnValue) == 0x000181, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Not_PreBool_ReturnValue_1) == 0x000182, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_BooleanOR_ReturnValue) == 0x000183, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_GetLocalizedText_ReturnValue) == 0x000188, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_SelectText_ReturnValue) == 0x0001A0, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001B8, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, K2Node_MakeArray_Array_1) == 0x000208, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info, CallFunc_Format_ReturnValue_1) == 0x000218, "Member 'WBP_BattleEntry_Info_C_ExecuteUbergraph_WBP_BattleEntry_Info::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_BattleEntry_Info.WBP_BattleEntry_Info_C.SetEntryInfo
// 0x0020 (0x0020 - 0x0000)
struct WBP_BattleEntry_Info_C_SetEntryInfo final
{
public:
	class FName                                   BossType;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      Difficulty;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            EntryPlayers;                                      // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BattleEntry_Info_C_SetEntryInfo) == 0x000008, "Wrong alignment on WBP_BattleEntry_Info_C_SetEntryInfo");
static_assert(sizeof(WBP_BattleEntry_Info_C_SetEntryInfo) == 0x000020, "Wrong size on WBP_BattleEntry_Info_C_SetEntryInfo");
static_assert(offsetof(WBP_BattleEntry_Info_C_SetEntryInfo, BossType) == 0x000000, "Member 'WBP_BattleEntry_Info_C_SetEntryInfo::BossType' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_SetEntryInfo, Difficulty) == 0x000008, "Member 'WBP_BattleEntry_Info_C_SetEntryInfo::Difficulty' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Info_C_SetEntryInfo, EntryPlayers) == 0x000010, "Member 'WBP_BattleEntry_Info_C_SetEntryInfo::EntryPlayers' has a wrong offset!");

}

