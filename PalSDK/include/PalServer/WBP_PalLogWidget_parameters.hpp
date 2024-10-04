#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckImportantLog
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalLogWidget_C_CheckImportantLog final
{
public:
	bool                                          IsRemoved;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckRemoveLog_Removed;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_CheckImportantLog) == 0x000001, "Wrong alignment on WBP_PalLogWidget_C_CheckImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_CheckImportantLog) == 0x000002, "Wrong size on WBP_PalLogWidget_C_CheckImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_CheckImportantLog, IsRemoved) == 0x000000, "Member 'WBP_PalLogWidget_C_CheckImportantLog::IsRemoved' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckImportantLog, CallFunc_CheckRemoveLog_Removed) == 0x000001, "Member 'WBP_PalLogWidget_C_CheckImportantLog::CallFunc_CheckRemoveLog_Removed' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckRemoveLog
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalLogWidget_C_CheckRemoveLog final
{
public:
	TArray<class UPalLogWidgetBase*>              TargetArray;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          Removed;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRemoved;                                         // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_CheckRemoveLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_CheckRemoveLog");
static_assert(sizeof(WBP_PalLogWidget_C_CheckRemoveLog) == 0x000040, "Wrong size on WBP_PalLogWidget_C_CheckRemoveLog");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, TargetArray) == 0x000000, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::TargetArray' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, Removed) == 0x000010, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::Removed' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, IsRemoved) == 0x000011, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::IsRemoved' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_Array_RemoveItem_ReturnValue) == 0x00002A, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckRemoveLog, CallFunc_BooleanOR_ReturnValue) == 0x000038, "Member 'WBP_PalLogWidget_C_CheckRemoveLog::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CheckVeryImportantLog
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalLogWidget_C_CheckVeryImportantLog final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  NextLogId;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFinded;                                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_Guid_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_CheckVeryImportantLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_CheckVeryImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_CheckVeryImportantLog) == 0x000030, "Wrong size on WBP_PalLogWidget_C_CheckVeryImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, DeltaTime) == 0x000000, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, NextLogId) == 0x000008, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::NextLogId' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, IsFinded) == 0x000018, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::IsFinded' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000019, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, CallFunc_IsValid_Guid_ReturnValue) == 0x000021, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::CallFunc_IsValid_Guid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CheckVeryImportantLog, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PalLogWidget_C_CheckVeryImportantLog::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	struct FPalKillLogDisplayData                 DeathLogDisplayData;                               // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000038, "Wrong size on WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0, DeathLogDisplayData) == 0x000000, "Member 'WBP_PalLogWidget_C_CREATEDELEGATE_PROXYFUNCTION_0::DeathLogDisplayData' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.CreateLogWidget
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalLogWidget_C_CreateLogWidget final
{
public:
	class UClass*                                 LogWidgeClass;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPalLogAdditionalData                  AdditionalData;                                    // 0x0020(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalLogWidgetBase*                      CreatedWidget;                                     // 0x0058(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLogWidgetBase*                      CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_CreateLogWidget) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_CreateLogWidget");
static_assert(sizeof(WBP_PalLogWidget_C_CreateLogWidget) == 0x000070, "Wrong size on WBP_PalLogWidget_C_CreateLogWidget");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, LogWidgeClass) == 0x000000, "Member 'WBP_PalLogWidget_C_CreateLogWidget::LogWidgeClass' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, Text) == 0x000008, "Member 'WBP_PalLogWidget_C_CreateLogWidget::Text' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, AdditionalData) == 0x000020, "Member 'WBP_PalLogWidget_C_CreateLogWidget::AdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, CreatedWidget) == 0x000058, "Member 'WBP_PalLogWidget_C_CreateLogWidget::CreatedWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000060, "Member 'WBP_PalLogWidget_C_CreateLogWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_CreateLogWidget, CallFunc_Create_ReturnValue) == 0x000068, "Member 'WBP_PalLogWidget_C_CreateLogWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.DisplayNextVeryImportantLog
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalLogWidget_C_DisplayNextVeryImportantLog final
{
public:
	class UPalLogWidgetBase*                      CallFunc_Map_Find_Value;                           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Map_Find_Value_1;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_DisplayNextVeryImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog) == 0x000048, "Wrong size on WBP_PalLogWidget_C_DisplayNextVeryImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Map_Find_Value) == 0x000000, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Map_Find_ReturnValue) == 0x000008, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Map_Find_Value_1) == 0x000010, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Map_Find_ReturnValue_1) == 0x000018, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Array_Find_ReturnValue) == 0x000020, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_SelectInt_ReturnValue) == 0x000030, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_DisplayNextVeryImportantLog, CallFunc_Array_Get_Item) == 0x000034, "Member 'WBP_PalLogWidget_C_DisplayNextVeryImportantLog::CallFunc_Array_Get_Item' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.ExecuteUbergraph_WBP_PalLogWidget
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalKillLogDisplayData& KillLogData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckImportantLog_isRemoved;              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckRemoveLog_Removed;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& LogId, class FText& LogText, struct FPalLogAdditionalData& LogAdditionalData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& LogId)>          K2Node_CreateDelegate_OutputDelegate_4;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalKillLogDisplayData& DeathLogDisplayData)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_veryImportantLogDisplayTime_ImplicitCast; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CheckVeryImportantLog_deltaTime_ImplicitCast; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget");
static_assert(sizeof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget) == 0x0000F0, "Wrong size on WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, EntryPoint) == 0x000000, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_GetLogManager_ReturnValue) == 0x000018, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_GetLogManager_ReturnValue_1) == 0x000028, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_GetLogManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_CheckImportantLog_isRemoved) == 0x000045, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_CheckImportantLog_isRemoved' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_CheckRemoveLog_Removed) == 0x000046, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_CheckRemoveLog_Removed' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x000068, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate_4) == 0x000078, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_Event_MyGeometry) == 0x000088, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_Event_InDeltaTime) == 0x0000C8, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000CC, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, K2Node_VariableSet_veryImportantLogDisplayTime_ImplicitCast) == 0x0000E0, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::K2Node_VariableSet_veryImportantLogDisplayTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget, CallFunc_CheckVeryImportantLog_deltaTime_ImplicitCast) == 0x0000E8, "Member 'WBP_PalLogWidget_C_ExecuteUbergraph_WBP_PalLogWidget::CallFunc_CheckVeryImportantLog_deltaTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.On Added Normal Log
// 0x0108 (0x0108 - 0x0000)
struct WBP_PalLogWidget_C_On_Added_Normal_Log final
{
public:
	class FText                                   LogText;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalLogAdditionalData                  LogAdditionalData;                                 // 0x0018(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UPalLogWidgetBase*                      CreatedWidget;                                     // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_CreateLogWidget_createdWidget;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_CreateLogWidget_createdWidget_1;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_CreateItemGetLogText_ReturnValue;         // 0x00A8(0x0018)()
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalStaticItemIdAndNum                 K2Node_MakeStruct_PalStaticItemIdAndNum;           // 0x00CC(0x000C)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F6[0x2];                                       // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_On_Added_Normal_Log) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_On_Added_Normal_Log");
static_assert(sizeof(WBP_PalLogWidget_C_On_Added_Normal_Log) == 0x000108, "Wrong size on WBP_PalLogWidget_C_On_Added_Normal_Log");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, LogText) == 0x000000, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::LogText' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, LogAdditionalData) == 0x000018, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::LogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CreatedWidget) == 0x000050, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CreatedWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, Temp_int_Array_Index_Variable) == 0x000058, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, Temp_int_Loop_Counter_Variable_1) == 0x000068, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_CreateLogWidget_createdWidget) == 0x000078, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_CreateLogWidget_createdWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_IsValidClass_ReturnValue) == 0x000080, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_CreateLogWidget_createdWidget_1) == 0x000088, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_CreateLogWidget_createdWidget_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_AddChild_ReturnValue) == 0x000090, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, Temp_int_Array_Index_Variable_1) == 0x000098, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_CreateItemGetLogText_ReturnValue) == 0x0000A8, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_CreateItemGetLogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x0000C0, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C4, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000C8, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, K2Node_MakeStruct_PalStaticItemIdAndNum) == 0x0000CC, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::K2Node_MakeStruct_PalStaticItemIdAndNum' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Length_ReturnValue_1) == 0x0000F0, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, K2Node_SwitchEnum_CmpSuccess) == 0x0000F4, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F5, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Length_ReturnValue_2) == 0x0000F8, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000FC, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_On_Added_Normal_Log, CallFunc_Array_Add_ReturnValue) == 0x000100, "Member 'WBP_PalLogWidget_C_On_Added_Normal_Log::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedDeathLog
// 0x0078 (0x0078 - 0x0000)
struct WBP_PalLogWidget_C_OnAddedDeathLog final
{
public:
	struct FPalKillLogDisplayData                 DeathLogDisplayData;                               // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	TDelegate<void(class UWBP_Notice_Deathlog_C* EndedLog)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Notice_Deathlog_C*                 CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnAddedDeathLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnAddedDeathLog");
static_assert(sizeof(WBP_PalLogWidget_C_OnAddedDeathLog) == 0x000078, "Wrong size on WBP_PalLogWidget_C_OnAddedDeathLog");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, DeathLogDisplayData) == 0x000000, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::DeathLogDisplayData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000058, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast) == 0x000068, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedDeathLog, CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast) == 0x000070, "Member 'WBP_PalLogWidget_C_OnAddedDeathLog::CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedImportantLog
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalLogWidget_C_OnAddedImportantLog final
{
public:
	class FText                                   LogText;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalLogAdditionalData                  LogAdditionalData;                                 // 0x0018(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UPalLogWidgetBase*                      CallFunc_CreateLogWidget_createdWidget;            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnAddedImportantLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnAddedImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_OnAddedImportantLog) == 0x000070, "Wrong size on WBP_PalLogWidget_C_OnAddedImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, LogText) == 0x000000, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::LogText' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, LogAdditionalData) == 0x000018, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::LogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, CallFunc_CreateLogWidget_createdWidget) == 0x000050, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::CallFunc_CreateLogWidget_createdWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedImportantLog, CallFunc_AddChildToCanvas_ReturnValue) == 0x000068, "Member 'WBP_PalLogWidget_C_OnAddedImportantLog::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedKillLog
// 0x0078 (0x0078 - 0x0000)
struct WBP_PalLogWidget_C_OnAddedKillLog final
{
public:
	struct FPalKillLogDisplayData                 KillLogData;                                       // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TDelegate<void(class UWBP_Notice_Deathlog_C* EndedLog)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Notice_Deathlog_C*                 CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnAddedKillLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnAddedKillLog");
static_assert(sizeof(WBP_PalLogWidget_C_OnAddedKillLog) == 0x000078, "Wrong size on WBP_PalLogWidget_C_OnAddedKillLog");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, KillLogData) == 0x000000, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::KillLogData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000058, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast) == 0x000068, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_SetDisplayTime_ShortDisplayTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedKillLog, CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast) == 0x000070, "Member 'WBP_PalLogWidget_C_OnAddedKillLog::CallFunc_SetDisplayTime_LongDisplayTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnAddedVeryImportantLog
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalLogWidget_C_OnAddedVeryImportantLog final
{
public:
	struct FGuid                                  LogId;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LogText;                                           // 0x0010(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalLogAdditionalData                  LogAdditionalData;                                 // 0x0028(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UPalLogWidgetBase*                      NewLocalVar_0;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalLogWidgetBase*                      CallFunc_CreateLogWidget_createdWidget;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalLogWidgetBase*                      CallFunc_CreateLogWidget_createdWidget_1;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnAddedVeryImportantLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnAddedVeryImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_OnAddedVeryImportantLog) == 0x000098, "Wrong size on WBP_PalLogWidget_C_OnAddedVeryImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, LogId) == 0x000000, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::LogId' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, LogText) == 0x000010, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::LogText' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, LogAdditionalData) == 0x000028, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::LogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, NewLocalVar_0) == 0x000060, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_CreateLogWidget_createdWidget) == 0x000068, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_CreateLogWidget_createdWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_CreateLogWidget_createdWidget_1) == 0x000070, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_CreateLogWidget_createdWidget_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_IsValidClass_ReturnValue) == 0x000078, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_Map_Length_ReturnValue) == 0x00007C, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_Greater_IntInt_ReturnValue) == 0x000084, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_AddChildToCanvas_ReturnValue) == 0x000088, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnAddedVeryImportantLog, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000090, "Member 'WBP_PalLogWidget_C_OnAddedVeryImportantLog::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnDeathLogEnd
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLogWidget_C_OnDeathLogEnd final
{
public:
	class UWBP_Notice_Deathlog_C*                 EndedLog;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnDeathLogEnd) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnDeathLogEnd");
static_assert(sizeof(WBP_PalLogWidget_C_OnDeathLogEnd) == 0x000010, "Wrong size on WBP_PalLogWidget_C_OnDeathLogEnd");
static_assert(offsetof(WBP_PalLogWidget_C_OnDeathLogEnd, EndedLog) == 0x000000, "Member 'WBP_PalLogWidget_C_OnDeathLogEnd::EndedLog' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnDeathLogEnd, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'WBP_PalLogWidget_C_OnDeathLogEnd::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnKillLogEnd
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLogWidget_C_OnKillLogEnd final
{
public:
	class UWBP_Notice_Deathlog_C*                 EndedLog;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnKillLogEnd) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnKillLogEnd");
static_assert(sizeof(WBP_PalLogWidget_C_OnKillLogEnd) == 0x000010, "Wrong size on WBP_PalLogWidget_C_OnKillLogEnd");
static_assert(offsetof(WBP_PalLogWidget_C_OnKillLogEnd, EndedLog) == 0x000000, "Member 'WBP_PalLogWidget_C_OnKillLogEnd::EndedLog' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnKillLogEnd, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'WBP_PalLogWidget_C_OnKillLogEnd::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.OnRemovedVeryImportantLog
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalLogWidget_C_OnRemovedVeryImportantLog final
{
public:
	struct FGuid                                  LogId;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogWidgetBase*                      CallFunc_Map_Find_Value;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_OnRemovedVeryImportantLog");
static_assert(sizeof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog) == 0x000028, "Wrong size on WBP_PalLogWidget_C_OnRemovedVeryImportantLog");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, LogId) == 0x000000, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::LogId' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x000010, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_Array_RemoveItem_ReturnValue) == 0x000011, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_Map_Remove_ReturnValue) == 0x000012, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_Map_Find_Value) == 0x000018, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_OnRemovedVeryImportantLog, CallFunc_Map_Contains_ReturnValue) == 0x000021, "Member 'WBP_PalLogWidget_C_OnRemovedVeryImportantLog::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.SetupWidgetTranslation
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalLogWidget_C_SetupWidgetTranslation final
{
public:
	class UPalLogWidgetBase*                      TargetWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       RelationSlot;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               CallFunc_GetAnchors_ReturnValue;                   // 0x0018(0x0020)(NoDestructor)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_SetupWidgetTranslation) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_SetupWidgetTranslation");
static_assert(sizeof(WBP_PalLogWidget_C_SetupWidgetTranslation) == 0x000048, "Wrong size on WBP_PalLogWidget_C_SetupWidgetTranslation");
static_assert(offsetof(WBP_PalLogWidget_C_SetupWidgetTranslation, TargetWidget) == 0x000000, "Member 'WBP_PalLogWidget_C_SetupWidgetTranslation::TargetWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_SetupWidgetTranslation, RelationSlot) == 0x000008, "Member 'WBP_PalLogWidget_C_SetupWidgetTranslation::RelationSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_SetupWidgetTranslation, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_PalLogWidget_C_SetupWidgetTranslation::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_SetupWidgetTranslation, CallFunc_GetAnchors_ReturnValue) == 0x000018, "Member 'WBP_PalLogWidget_C_SetupWidgetTranslation::CallFunc_GetAnchors_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_SetupWidgetTranslation, CallFunc_GetPosition_ReturnValue) == 0x000038, "Member 'WBP_PalLogWidget_C_SetupWidgetTranslation::CallFunc_GetPosition_ReturnValue' has a wrong offset!");

// Function WBP_PalLogWidget.WBP_PalLogWidget_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalLogWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLogWidget_C_Tick) == 0x000008, "Wrong alignment on WBP_PalLogWidget_C_Tick");
static_assert(sizeof(WBP_PalLogWidget_C_Tick) == 0x000048, "Wrong size on WBP_PalLogWidget_C_Tick");
static_assert(offsetof(WBP_PalLogWidget_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalLogWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalLogWidget_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalLogWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

