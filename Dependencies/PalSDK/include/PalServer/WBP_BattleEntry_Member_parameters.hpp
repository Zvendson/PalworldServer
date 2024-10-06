#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.AddTaslDetailText
// 0x0030 (0x0030 - 0x0000)
struct WBP_BattleEntry_Member_C_AddTaslDetailText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequireNum;                                        // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterial*>                      NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(WBP_BattleEntry_Member_C_AddTaslDetailText) == 0x000008, "Wrong alignment on WBP_BattleEntry_Member_C_AddTaslDetailText");
static_assert(sizeof(WBP_BattleEntry_Member_C_AddTaslDetailText) == 0x000030, "Wrong size on WBP_BattleEntry_Member_C_AddTaslDetailText");
static_assert(offsetof(WBP_BattleEntry_Member_C_AddTaslDetailText, Text) == 0x000000, "Member 'WBP_BattleEntry_Member_C_AddTaslDetailText::Text' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_AddTaslDetailText, NowNum) == 0x000018, "Member 'WBP_BattleEntry_Member_C_AddTaslDetailText::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_AddTaslDetailText, RequireNum) == 0x00001C, "Member 'WBP_BattleEntry_Member_C_AddTaslDetailText::RequireNum' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_AddTaslDetailText, NewLocalVar_0) == 0x000020, "Member 'WBP_BattleEntry_Member_C_AddTaslDetailText::NewLocalVar_0' has a wrong offset!");

// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.ExecuteUbergraph_WBP_BattleEntry_Member
// 0x0298 (0x0298 - 0x0000)
struct WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BossType;                       // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      K2Node_CustomEvent_Difficulty;                     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            K2Node_CustomEvent_PlayerList;                     // 0x0040(0x0010)(ConstParm, ReferenceParm)
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxJoinablePlayerNum_ReturnValue;      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x00E0(0x0010)(NoDestructor)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0050)(HasGetValueTypeHash)
	class UWBP_BattleEntry_MemberList_C*          CallFunc_SpawnObject_ReturnValue;                  // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_BattleEntry_MemberList_C*          CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_Array_Get_Item_1;                         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A2[0x2];                                      // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetPlayerUIDByActor_ReturnValue;          // 0x01A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x01F0(0x0018)()
	class FText                                   CallFunc_SelectText_ReturnValue;                   // 0x0208(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0220(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0270(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0280(0x0018)()
};
static_assert(alignof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member) == 0x000008, "Wrong alignment on WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member");
static_assert(sizeof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member) == 0x000298, "Wrong size on WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, EntryPoint) == 0x000000, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_CustomEvent_BossType) == 0x000034, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_CustomEvent_BossType' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_CustomEvent_Difficulty) == 0x00003C, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_CustomEvent_Difficulty' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_CustomEvent_PlayerList) == 0x000040, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_CustomEvent_PlayerList' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetBossBattleManager_ReturnValue) == 0x000050, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetMaxJoinablePlayerNum_ReturnValue) == 0x00005C, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetMaxJoinablePlayerNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000068, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000070, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C8, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeArray_Array) == 0x0000D0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeStruct_DataTableRowHandle) == 0x0000E0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000108, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_SpawnObject_ReturnValue) == 0x000170, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000178, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Get_Item) == 0x000180, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Length_ReturnValue_2) == 0x000188, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Less_IntInt_ReturnValue_1) == 0x00018C, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, Temp_int_Array_Index_Variable_1) == 0x000190, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Add_ReturnValue) == 0x000194, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001A0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_IsValid_ReturnValue_1) == 0x0001A1, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetPlayerUIDByActor_ReturnValue) == 0x0001A4, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetPlayerUIDByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetLevel_ReturnValue) == 0x0001B4, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetNickName_outName) == 0x0001B8, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x0001C8, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x0001D8, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetPalmi_ReturnValue) == 0x0001E0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Array_Contains_ReturnValue) == 0x0001E8, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_GetLocalizedText_ReturnValue) == 0x0001F0, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_SelectText_ReturnValue) == 0x000208, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_SelectText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeStruct_FormatArgumentData_2) == 0x000220, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, K2Node_MakeArray_Array_1) == 0x000270, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member, CallFunc_Format_ReturnValue_1) == 0x000280, "Member 'WBP_BattleEntry_Member_C_ExecuteUbergraph_WBP_BattleEntry_Member::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_BattleEntry_Member.WBP_BattleEntry_Member_C.OnChangedBossBattlePlayerListEvent
// 0x0020 (0x0020 - 0x0000)
struct WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent final
{
public:
	class FName                                   BossType;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBossBattleDifficulty                      Difficulty;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalPlayerCharacter*>            PlayerList;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent) == 0x000008, "Wrong alignment on WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent");
static_assert(sizeof(WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent) == 0x000020, "Wrong size on WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent");
static_assert(offsetof(WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent, BossType) == 0x000000, "Member 'WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent::BossType' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent, Difficulty) == 0x000008, "Member 'WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent::Difficulty' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent, PlayerList) == 0x000010, "Member 'WBP_BattleEntry_Member_C_OnChangedBossBattlePlayerListEvent::PlayerList' has a wrong offset!");

}

