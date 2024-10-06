#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ChangeCustomIcon__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature final
{
public:
	class UWBP_Map_IconCustom_C*                  Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature");
static_assert(sizeof(WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature) == 0x000010, "Wrong size on WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature");
static_assert(offsetof(WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature, Icon) == 0x000000, "Member 'WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature::Icon' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature, Index_0) == 0x000008, "Member 'WBP_MapMarker_Win_C_ChangeCustomIcon__DelegateSignature::Index_0' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ChangeIconType
// 0x0004 (0x0004 - 0x0000)
struct WBP_MapMarker_Win_C_ChangeIconType final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapMarker_Win_C_ChangeIconType) == 0x000004, "Wrong alignment on WBP_MapMarker_Win_C_ChangeIconType");
static_assert(sizeof(WBP_MapMarker_Win_C_ChangeIconType) == 0x000004, "Wrong size on WBP_MapMarker_Win_C_ChangeIconType");
static_assert(offsetof(WBP_MapMarker_Win_C_ChangeIconType, Index_0) == 0x000000, "Member 'WBP_MapMarker_Win_C_ChangeIconType::Index_0' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.DoCustomNavigation
// 0x0040 (0x0040 - 0x0000)
struct WBP_MapMarker_Win_C_DoCustomNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               K2Node_DynamicCast_AsWBP_Map_Marker_Content;       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapMarker_Win_C_DoCustomNavigation) == 0x000008, "Wrong alignment on WBP_MapMarker_Win_C_DoCustomNavigation");
static_assert(sizeof(WBP_MapMarker_Win_C_DoCustomNavigation) == 0x000040, "Wrong size on WBP_MapMarker_Win_C_DoCustomNavigation");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, Navigation_0) == 0x000000, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, ReturnValue) == 0x000008, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, CallFunc_Array_LastIndex_ReturnValue) == 0x000020, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, K2Node_DynamicCast_AsWBP_Map_Marker_Content) == 0x000030, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::K2Node_DynamicCast_AsWBP_Map_Marker_Content' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_DoCustomNavigation, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_MapMarker_Win_C_DoCustomNavigation::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.ExecuteUbergraph_WBP_MapMarker_Win
// 0x0400 (0x0400 - 0x0000)
struct WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x0018(0x0050)()
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_index;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCustom_C*                  K2Node_CustomEvent_CustomIcon;                     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_2;                         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_3;                         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0100(0x0008)(NoDestructor)
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_4;                         // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_5;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0138(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue_1;         // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0198(0x0050)(HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue_1;           // 0x01E8(0x0050)()
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0248(0x0050)(HasGetValueTypeHash)
	struct FPalCustomMarkerSaveData               CallFunc_Map_Find_Value;                           // 0x0298(0x0020)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02D0(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarker_Content_C*               CallFunc_Array_Get_Item_6;                         // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue_2;         // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_MapMarker_Content_C*>       K2Node_MakeArray_Array_1;                          // 0x0310(0x0010)(ReferenceParm, ContainsInstancedReference)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue_2;           // 0x0320(0x0050)()
	int32                                         CallFunc_Map_Length_ReturnValue_1;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_375[0x3];                                      // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0380(0x0050)(HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x03D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x03E8(0x0018)()
};
static_assert(alignof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win) == 0x000008, "Wrong alignment on WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win");
static_assert(sizeof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win) == 0x000400, "Wrong size on WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, EntryPoint) == 0x000000, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetLocationManager_ReturnValue) == 0x000008, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_bool_Variable) == 0x000010, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetCustomMarkers_ReturnValue) == 0x000018, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_object_Variable) == 0x000068, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_object_Variable_1) == 0x000070, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_bool_Variable_1) == 0x000078, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_object_Variable_2) == 0x000080, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_object_Variable_3) == 0x000088, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_int_Array_Index_Variable) == 0x000090, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_int_Loop_Counter_Variable) == 0x000094, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_int_Array_Index_Variable_1) == 0x00009C, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, Temp_int_Loop_Counter_Variable_1) == 0x0000B0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C4, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_CustomEvent_index) == 0x0000C8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_CustomEvent_index' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_CustomEvent_CustomIcon) == 0x0000D0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_CustomEvent_CustomIcon' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_2) == 0x0000F0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_3) == 0x0000F8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_Event_InFocusEvent) == 0x000100, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_4) == 0x000108, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_5) == 0x000110, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Less_IntInt_ReturnValue) == 0x00011C, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetGameSetting_ReturnValue) == 0x000120, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetGameSetting_ReturnValue_1) == 0x000128, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000130, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeStruct_FormatArgumentData) == 0x000138, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000188, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetLocationManager_ReturnValue_1) == 0x000190, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetLocationManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeStruct_FormatArgumentData_1) == 0x000198, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetCustomMarkers_ReturnValue_1) == 0x0001E8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetCustomMarkers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Map_Length_ReturnValue) == 0x000238, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000240, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeStruct_FormatArgumentData_2) == 0x000248, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Map_Find_Value) == 0x000298, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Map_Find_ReturnValue) == 0x0002B8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeArray_Array) == 0x0002C0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Format_ReturnValue) == 0x0002D0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002E8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_Select_Default) == 0x0002F0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Get_Item_6) == 0x0002F8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Array_Length_ReturnValue_1) == 0x000300, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Less_IntInt_ReturnValue_1) == 0x000304, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetLocationManager_ReturnValue_2) == 0x000308, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetLocationManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeArray_Array_1) == 0x000310, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GetCustomMarkers_ReturnValue_2) == 0x000320, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GetCustomMarkers_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Map_Length_ReturnValue_1) == 0x000370, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Map_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000374, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000378, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeStruct_FormatArgumentData_3) == 0x000380, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_Select_Default_1) == 0x0003D0, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, K2Node_MakeArray_Array_2) == 0x0003D8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win, CallFunc_Format_ReturnValue_1) == 0x0003E8, "Member 'WBP_MapMarker_Win_C_ExecuteUbergraph_WBP_MapMarker_Win::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_MapMarker_Win_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_MapMarker_Win_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_MapMarker_Win_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_MapMarker_Win_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_MapMarker_Win_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_MapMarker_Win_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_MapMarker_Win_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.RemoveCustomIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature final
{
public:
	class UWBP_Map_IconCustom_C*                  Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature");
static_assert(sizeof(WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature) == 0x000008, "Wrong size on WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature");
static_assert(offsetof(WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature, Icon) == 0x000000, "Member 'WBP_MapMarker_Win_C_RemoveCustomIcon__DelegateSignature::Icon' has a wrong offset!");

// Function WBP_MapMarker_Win.WBP_MapMarker_Win_C.SetEdittingIcon
// 0x0008 (0x0008 - 0x0000)
struct WBP_MapMarker_Win_C_SetEdittingIcon final
{
public:
	class UWBP_Map_IconCustom_C*                  CustomIcon;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapMarker_Win_C_SetEdittingIcon) == 0x000008, "Wrong alignment on WBP_MapMarker_Win_C_SetEdittingIcon");
static_assert(sizeof(WBP_MapMarker_Win_C_SetEdittingIcon) == 0x000008, "Wrong size on WBP_MapMarker_Win_C_SetEdittingIcon");
static_assert(offsetof(WBP_MapMarker_Win_C_SetEdittingIcon, CustomIcon) == 0x000000, "Member 'WBP_MapMarker_Win_C_SetEdittingIcon::CustomIcon' has a wrong offset!");

}

