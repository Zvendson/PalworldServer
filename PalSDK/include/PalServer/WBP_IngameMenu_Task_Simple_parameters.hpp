#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.AddItemInfo
// 0x0038 (0x0038 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_AddItemInfo final
{
public:
	bool                                          IsHideWhenZero;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ItemId;                                            // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         ItemNum;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         GaugeMaxNumBorder;                                 // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_TaskMaterial_C*         CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_AddItemInfo) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_AddItemInfo");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_AddItemInfo) == 0x000038, "Wrong size on WBP_IngameMenu_Task_Simple_C_AddItemInfo");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, IsHideWhenZero) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::IsHideWhenZero' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, ItemId) == 0x000004, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::ItemId' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, ItemNum) == 0x000010, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::ItemNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, GaugeMaxNumBorder) == 0x000018, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::GaugeMaxNumBorder' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddItemInfo, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_Task_Simple_C_AddItemInfo::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.AddTaslDetailText
// 0x0168 (0x0168 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_AddTaslDetailText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         NowNum;                                            // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequireNum;                                        // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterial*>                      NewLocalVar_0;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	class UBP_PalTextBlock_C*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0150(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_AddTaslDetailText");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText) == 0x000168, "Wrong size on WBP_IngameMenu_Task_Simple_C_AddTaslDetailText");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, Text) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, NowNum) == 0x000018, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::NowNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, RequireNum) == 0x00001C, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::RequireNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, NewLocalVar_0) == 0x000020, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_SpawnObject_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000A0, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B8, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, K2Node_MakeArray_Array) == 0x000108, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Format_ReturnValue) == 0x000118, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000130, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Concat_StrStr_ReturnValue) == 0x000140, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_AddTaslDetailText, CallFunc_Conv_StringToText_ReturnValue) == 0x000150, "Member 'WBP_IngameMenu_Task_Simple_C_AddTaslDetailText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.ExecuteUbergraph_WBP_IngameMenu_Task_Simple
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_IngameMenu_Task_SimpleList_C*> K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple) == 0x000018, "Wrong size on WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple, K2Node_MakeArray_Array) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_ExecuteUbergraph_WBP_IngameMenu_Task_Simple::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Camp Name
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_Set_Camp_Name final
{
public:
	class FText                                   BaseCampName;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Name) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_Set_Camp_Name");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Name) == 0x000018, "Wrong size on WBP_IngameMenu_Task_Simple_C_Set_Camp_Name");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Name, BaseCampName) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Name::BaseCampName' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Camp Pal and Bed Num
// 0x0200 (0x0200 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num final
{
public:
	int32                                         NowPalNum;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPalNum;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BedNum;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0080(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00D0(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0128(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0138(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01B8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num) == 0x000200, "Wrong size on WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, NowPalNum) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::NowPalNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, MaxPalNum) == 0x000004, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::MaxPalNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, BedNum) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::BedNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_byte_Variable) == 0x00000C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000070, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000078, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000D0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000120, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeArray_Array) == 0x000128, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeStruct_FormatArgumentData_3) == 0x000138, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Format_ReturnValue) == 0x000188, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_byte_Variable_1) == 0x0001B0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, CallFunc_Format_ReturnValue_1) == 0x0001B8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_bool_Variable) == 0x0001D0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_object_Variable) == 0x0001D8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_object_Variable_1) == 0x0001E0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, Temp_bool_Variable_1) == 0x0001E8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_Select_Default) == 0x0001F0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num, K2Node_Select_Default_1) == 0x0001F8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Camp_Pal_and_Bed_Num::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Pal Slots
// 0x0248 (0x0248 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    Slots;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         MaxPalNum;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Palbed;                                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempLen;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UPalIndividualCharacterSlot*, int32> ActiveSlotsMap;                                    // 0x0020(0x0050)(Edit, BlueprintVisible)
	int32                                         TempMax;                                           // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    ActiveSlots;                                       // 0x0078(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSanityRate_ReturnValue;                // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBaseCampWorkerEventType                   CallFunc_GetBaseCampWorkerEventType_ReturnValue;   // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_Map_Keys_Keys;                            // 0x0110(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_Map_Values_Values;                        // 0x0120(0x0010)(ReferenceParm)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MaxOfIntArray_IndexOfMaxValue;            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MaxOfIntArray_MaxValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item_1;                         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           CallFunc_Array_Get_Item_2;                         // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x3];                                      // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPalConditionUrgency_ReturnValue;       // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item_3;                         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_SimpleList_C*      CallFunc_Array_Get_Item_4;                         // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0198(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0200(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_Task_SimpleList_C*      CallFunc_Array_Get_Item_5;                         // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23A[0x6];                                      // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots) == 0x000248, "Wrong size on WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Slots) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Slots' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, MaxPalNum) == 0x000010, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::MaxPalNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Palbed) == 0x000014, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Palbed' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, TempLen) == 0x000018, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::TempLen' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, ActiveSlotsMap) == 0x000020, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::ActiveSlotsMap' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, TempMax) == 0x000070, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::TempMax' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, ActiveSlots) == 0x000078, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::ActiveSlots' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Array_Index_Variable) == 0x000098, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Loop_Counter_Variable_1) == 0x00009C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GetHandle_ReturnValue) == 0x0000B0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x0000B8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GetUIDisplayPalCondition_outArray) == 0x0000C0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_1) == 0x0000D4, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GetSanityRate_ReturnValue) == 0x0000DC, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GetSanityRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GetBaseCampWorkerEventType_ReturnValue) == 0x0000E1, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GetBaseCampWorkerEventType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_SelectInt_ReturnValue) == 0x0000E4, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, K2Node_SwitchEnum_CmpSuccess) == 0x0000E8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_IsValid_ReturnValue_1) == 0x0000E9, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_IsEmpty_ReturnValue) == 0x0000EA, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Variable) == 0x0000EC, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000F0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Loop_Counter_Variable_2) == 0x0000F4, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Array_Index_Variable_1) == 0x0000FC, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Variable_1) == 0x000100, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000104, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Add_IntInt_ReturnValue_4) == 0x000108, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Map_Keys_Keys) == 0x000110, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Map_Values_Values) == 0x000120, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Map_Length_ReturnValue) == 0x000130, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_MaxOfIntArray_IndexOfMaxValue) == 0x000134, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_MaxOfIntArray_IndexOfMaxValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_MaxOfIntArray_MaxValue) == 0x000138, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_MaxOfIntArray_MaxValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00013C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Map_Remove_ReturnValue) == 0x000148, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Add_ReturnValue) == 0x00014C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_IsValid_ReturnValue_2) == 0x000150, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, Temp_int_Array_Index_Variable_2) == 0x000154, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_GetPalConditionUrgency_ReturnValue) == 0x00015C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_GetPalConditionUrgency_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Max_ReturnValue) == 0x000160, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_2) == 0x000164, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_3) == 0x000168, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item_3) == 0x000170, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_4) == 0x000178, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00017C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_5) == 0x000180, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Subtract_IntInt_ReturnValue) == 0x000184, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item_4) == 0x000188, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000190, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, K2Node_MakeStruct_FormatArgumentData) == 0x000198, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, K2Node_MakeArray_Array) == 0x0001E8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001F8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Format_ReturnValue) == 0x000200, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_6) == 0x000218, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Get_Item_5) == 0x000220, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Min_ReturnValue) == 0x000228, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00022C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Max_ReturnValue_1) == 0x000230, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Array_Length_ReturnValue_7) == 0x000234, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000238, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_IntInt_ReturnValue_3) == 0x000239, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000240, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Pal_Slots::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.Set Task List
// 0x0190 (0x0190 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_Set_Task_List final
{
public:
	struct FPalBaseCampTaskCheckedData            TaskCheckedData;                                   // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPalBaseCampTaskDataSet                TaskData;                                          // 0x0060(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalBaseCampTaskData_BuildObject       CallFunc_Array_Get_Item;                           // 0x0094(0x001C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x00B8(0x0018)()
	int32                                         CallFunc_Map_Find_Value;                           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00D8(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0148(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0178(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_Set_Task_List) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_Set_Task_List");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_Set_Task_List) == 0x000190, "Wrong size on WBP_IngameMenu_Task_Simple_C_Set_Task_List");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, TaskCheckedData) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::TaskCheckedData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, TaskData) == 0x000060, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::TaskData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Greater_IntInt_ReturnValue) == 0x00008C, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, Temp_int_Array_Index_Variable) == 0x000090, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Array_Get_Item) == 0x000094, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_GetMapObjectName_outName) == 0x0000B8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_GetMapObjectName_outName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Map_Find_ReturnValue) == 0x0000D4, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, K2Node_MakeStruct_FormatArgumentData) == 0x0000D8, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_SelectInt_ReturnValue) == 0x000128, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, K2Node_MakeArray_Array) == 0x000130, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Less_IntInt_ReturnValue) == 0x000140, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_GetLocalizedText_ReturnValue) == 0x000148, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_Format_ReturnValue) == 0x000160, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_Set_Task_List, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000178, "Member 'WBP_IngameMenu_Task_Simple_C_Set_Task_List::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetEnableWorkerBattleTypeInfo
// 0x0005 (0x0005 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo) == 0x000001, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo) == 0x000005, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo, IsEnable) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo, Temp_bool_Variable) == 0x000001, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo, Temp_byte_Variable) == 0x000002, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo, K2Node_Select_Default) == 0x000004, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkerBattleTypeInfo::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetEnableWorkHardInfo
// 0x0005 (0x0005 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo) == 0x000001, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo) == 0x000005, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo, IsEnable) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo::IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo, Temp_bool_Variable) == 0x000001, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo, Temp_byte_Variable) == 0x000002, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo, K2Node_Select_Default) == 0x000004, "Member 'WBP_IngameMenu_Task_Simple_C_SetEnableWorkHardInfo::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetRemainDIsplayPalNum
// 0x0088 (0x0088 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum) == 0x000088, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum, Num) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum::Num' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum, CallFunc_Format_ReturnValue) == 0x000070, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainDIsplayPalNum::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetRemainTimer
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetRemainTimer final
{
public:
	double                                        RemainTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetBindedOriginalText_ReturnValue;        // 0x0010(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetRemainTimer");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer) == 0x0000A8, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetRemainTimer");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, RemainTime) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::RemainTime' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, CallFunc_FCeil_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, CallFunc_GetBindedOriginalText_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::CallFunc_GetBindedOriginalText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetRemainTimer, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_IngameMenu_Task_Simple_C_SetRemainTimer::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetVisibilityTaskDetail
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail final
{
public:
	ESlateVisibility                              NewVisibility;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail) == 0x000001, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail) == 0x000001, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail, NewVisibility) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetVisibilityTaskDetail::NewVisibility' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetWorkerBattleType
// 0x0070 (0x0070 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType final
{
public:
	EPalBaseCampWorkerDirectionBattleType         BattleType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Map_Find_Value;                           // 0x0008(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value_1;                         // 0x0040(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0058(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType) == 0x000070, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, BattleType) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::BattleType' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, CallFunc_Map_Find_Value_1) == 0x000040, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, CallFunc_Map_Find_ReturnValue_1) == 0x000050, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000058, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkerBattleType::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

// Function WBP_IngameMenu_Task_Simple.WBP_IngameMenu_Task_Simple_C.SetWorkHardType
// 0x0070 (0x0070 - 0x0000)
struct WBP_IngameMenu_Task_Simple_C_SetWorkHardType final
{
public:
	EPalBaseCampPassiveEffectWorkHardType         WorkHardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Map_Find_Value;                           // 0x0008(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value_1;                         // 0x0040(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0058(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Simple_C_SetWorkHardType");
static_assert(sizeof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType) == 0x000070, "Wrong size on WBP_IngameMenu_Task_Simple_C_SetWorkHardType");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, WorkHardType) == 0x000000, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::WorkHardType' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, CallFunc_Map_Find_Value_1) == 0x000040, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, CallFunc_Map_Find_ReturnValue_1) == 0x000050, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Simple_C_SetWorkHardType, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000058, "Member 'WBP_IngameMenu_Task_Simple_C_SetWorkHardType::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

