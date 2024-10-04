#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.ExecuteUbergraph_WBP_IngameMenu_Mission
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_BaseCampTask*  K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Base_Camp_Task; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampModel*                      CallFunc_GetBaseCampModel_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0068(0x0004)(NoDestructor)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalBaseCampModel* Model)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_IngameMenu_MissionList_C*>  K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_TryBaseCampLevelUp_ReturnValue;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCampLevelMax_ReturnValue;               // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission");
static_assert(sizeof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission) == 0x0000D0, "Wrong size on WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_GetParam_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Base_Camp_Task) == 0x000010, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Base_Camp_Task' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000048, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000059, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_GetBaseCampModel_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_GetBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_RegisterActionBinding_ReturnValue) == 0x000068, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_GetLevel_ReturnValue) == 0x00006C, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_CreateDelegate_OutputDelegate_2) == 0x000074, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_MakeArray_Array) == 0x000088, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_TryBaseCampLevelUp_ReturnValue) == 0x000098, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_TryBaseCampLevelUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_IsCampLevelMax_ReturnValue) == 0x000099, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_IsCampLevelMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, K2Node_CreateDelegate_OutputDelegate_3) == 0x00009C, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B0, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_GetHUDService_ReturnValue) == 0x0000B8, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_GetHUDService_ReturnValue_1) == 0x0000C0, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'WBP_IngameMenu_Mission_C_ExecuteUbergraph_WBP_IngameMenu_Mission::CallFunc_Array_Get_Item' has a wrong offset!");

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.OnUpdateCampStatus
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameMenu_Mission_C_OnUpdateCampStatus final
{
public:
	class UPalBaseCampModel*                      Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_GetBaseCampModel_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	bool                                          CallFunc_IsCampLevelMax_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_OnUpdateCampStatus");
static_assert(sizeof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus) == 0x000040, "Wrong size on WBP_IngameMenu_Mission_C_OnUpdateCampStatus");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, Model) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::Model' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_GetBaseCampModel_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_GetBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_GetLevel_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_OnUpdateCampStatus, CallFunc_IsCampLevelMax_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Mission_C_OnUpdateCampStatus::CallFunc_IsCampLevelMax_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.UpdateCampInfo
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_IngameMenu_Mission_C_UpdateCampInfo final
{
public:
	int32                                         ActiveTaskCount;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0050(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0068(0x0018)()
	struct FPalBaseCampTaskDataSet                CallFunc_GetNowLevelTaskData_outTaskData;          // 0x0080(0x0028)()
	bool                                          CallFunc_GetNowLevelTaskData_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x2];                                       // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalBaseCampTaskData_BuildObject       CallFunc_Array_Get_Item_2;                         // 0x00AC(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x00D8(0x0018)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0158(0x0018)()
	struct FPalBaseCampTaskCheckedData            CallFunc_CheckTask_outChedckedData;                // 0x0170(0x0060)()
	bool                                          CallFunc_CheckTask_ReturnValue;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item_3;                         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_GetBaseCampModel_ReturnValue;             // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_UpdateCampInfo) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_UpdateCampInfo");
static_assert(sizeof(WBP_IngameMenu_Mission_C_UpdateCampInfo) == 0x0001F0, "Wrong size on WBP_IngameMenu_Mission_C_UpdateCampInfo");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, ActiveTaskCount) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::ActiveTaskCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, Temp_int_Variable) == 0x000004, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00001C, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, Temp_int_Variable_2) == 0x000020, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x000028, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetLocalizedText_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000068, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetNowLevelTaskData_outTaskData) == 0x000080, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetNowLevelTaskData_outTaskData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetNowLevelTaskData_ReturnValue) == 0x0000A8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetNowLevelTaskData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A9, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Get_Item_2) == 0x0000AC, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Map_Find_ReturnValue) == 0x0000D4, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetMapObjectName_outName) == 0x0000D8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetMapObjectName_outName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_SelectInt_ReturnValue) == 0x0000F0, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, K2Node_MakeStruct_FormatArgumentData) == 0x0000F8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, K2Node_MakeArray_Array) == 0x000148, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Format_ReturnValue) == 0x000158, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_CheckTask_outChedckedData) == 0x000170, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_CheckTask_outChedckedData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_CheckTask_ReturnValue) == 0x0001D0, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_CheckTask_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_Array_Get_Item_3) == 0x0001D8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetBaseCampModel_ReturnValue) == 0x0001E0, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfo, CallFunc_GetLevel_ReturnValue) == 0x0001E8, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfo::CallFunc_GetLevel_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.UpdateCampInfoMax
// 0x0038 (0x0038 - 0x0000)
struct WBP_IngameMenu_Mission_C_UpdateCampInfoMax final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*          CallFunc_Array_Get_Item_1;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampModel*                      CallFunc_GetBaseCampModel_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_UpdateCampInfoMax");
static_assert(sizeof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax) == 0x000038, "Wrong size on WBP_IngameMenu_Mission_C_UpdateCampInfoMax");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, Temp_int_Variable) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_GetBaseCampModel_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_GetBaseCampModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateCampInfoMax, CallFunc_GetLevel_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_Mission_C_UpdateCampInfoMax::CallFunc_GetLevel_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.UpdateLevelEffectInfo
// 0x0228 (0x0228 - 0x0000)
struct WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBaseCampMaxNumInGuild_ReturnValue;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWorkerMaxNum_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalOptionWorldSettings                CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x0018(0x0160)(ConstParm)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0178(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0198(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	bool                                          CallFunc_IsCampLevelMax_ReturnValue;               // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWorkerCapacityLimited_ReturnValue;      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x3];                                      // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBaseCampMaxNumInGuild_ReturnValue_1;   // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x3];                                      // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetWorkerMaxNum_ReturnValue_1;            // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo");
static_assert(sizeof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo) == 0x000228, "Wrong size on WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, Level) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::Level' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetBaseCampMaxNumInGuild_ReturnValue) == 0x00000C, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetBaseCampMaxNumInGuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetWorkerMaxNum_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetWorkerMaxNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, Temp_byte_Variable) == 0x000014, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, Temp_byte_Variable_1) == 0x000015, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetOptionWorldSettings_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetOptionWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000178, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000190, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000198, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, K2Node_MakeArray_Array) == 0x0001E8, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_IsCampLevelMax_ReturnValue) == 0x000210, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_IsCampLevelMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_SelectInt_ReturnValue) == 0x000214, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_IsWorkerCapacityLimited_ReturnValue) == 0x000218, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_IsWorkerCapacityLimited_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetBaseCampMaxNumInGuild_ReturnValue_1) == 0x00021C, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetBaseCampMaxNumInGuild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, K2Node_Select_Default) == 0x000220, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo, CallFunc_GetWorkerMaxNum_ReturnValue_1) == 0x000224, "Member 'WBP_IngameMenu_Mission_C_UpdateLevelEffectInfo::CallFunc_GetWorkerMaxNum_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_IngameMenu_Mission_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

