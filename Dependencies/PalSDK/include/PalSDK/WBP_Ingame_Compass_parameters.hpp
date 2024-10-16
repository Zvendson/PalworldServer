#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.AddCustomMarker
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Ingame_Compass_C_AddCustomMarker final
{
public:
	struct FPalLocationUIData                     PalLocationUIData;                                 // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPalCustomMarkerSaveData               PalCustomMarkerSaveData;                           // 0x0040(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FGuid                                  LocationId;                                        // 0x0060(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0070(0x0020)(NoDestructor)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUICompassIconBase*                  CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameCompass_CustomMarker_C*      K2Node_DynamicCast_AsWBP_Ingame_Compass_Custom_Marker; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDisplayDistance_Length_ImplicitCast;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_AddCustomMarker) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_AddCustomMarker");
static_assert(sizeof(WBP_Ingame_Compass_C_AddCustomMarker) == 0x0000D0, "Wrong size on WBP_Ingame_Compass_C_AddCustomMarker");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, PalLocationUIData) == 0x000000, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::PalLocationUIData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, PalCustomMarkerSaveData) == 0x000040, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::PalCustomMarkerSaveData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, LocationId) == 0x000060, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, K2Node_MakeStruct_Anchors) == 0x000070, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000090, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, CallFunc_Create_ReturnValue) == 0x000098, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, K2Node_DynamicCast_AsWBP_Ingame_Compass_Custom_Marker) == 0x0000A0, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::K2Node_DynamicCast_AsWBP_Ingame_Compass_Custom_Marker' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, CallFunc_AddChild_ReturnValue) == 0x0000B0, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_AddCustomMarker, CallFunc_SetDisplayDistance_Length_ImplicitCast) == 0x0000C8, "Member 'WBP_Ingame_Compass_C_AddCustomMarker::CallFunc_SetDisplayDistance_Length_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	struct FGuid                                  MarkerId;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000004, "Wrong alignment on WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000010, "Wrong size on WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0, MarkerId) == 0x000000, "Member 'WBP_Ingame_Compass_C_CREATEDELEGATE_PROXYFUNCTION_0::MarkerId' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.ExecuteUbergraph_WBP_Ingame_Compass
// 0x0130 (0x0130 - 0x0000)
struct WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, class UPalLocationBase*>   CallFunc_GetLocationMap_ReturnValue;               // 0x0068(0x0050)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x00C0(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationBase*                       CallFunc_Map_Find_Value;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowInCompass_ReturnValue;              // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& LocationId, class UPalLocationBase* Location)> K2Node_CreateDelegate_OutputDelegate;              // 0x00F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& LocationId, class UPalLocationBase* Location)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0104(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0114(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass");
static_assert(sizeof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass) == 0x000130, "Wrong size on WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, EntryPoint) == 0x000000, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, K2Node_Event_MyGeometry) == 0x000010, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_GetLocationManager_ReturnValue) == 0x000058, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_GetLocationMap_ReturnValue) == 0x000068, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_GetLocationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Map_Keys_Keys) == 0x0000C0, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Map_Find_ReturnValue) == 0x0000F0, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_Less_IntInt_ReturnValue) == 0x0000F1, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_IsShowInCompass_ReturnValue) == 0x0000F2, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_IsShowInCompass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_IsValid_ReturnValue_1) == 0x0000F3, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, K2Node_CreateDelegate_OutputDelegate_1) == 0x000104, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, K2Node_CreateDelegate_OutputDelegate_2) == 0x000114, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000128, "Member 'WBP_Ingame_Compass_C_ExecuteUbergraph_WBP_Ingame_Compass::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.GetVisibleIcons
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_Ingame_Compass_C_GetVisibleIcons final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameCompass_CustomMarker_C*      CallFunc_Map_Find_Value;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateVisibility_InDistance;              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys_1;                          // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item_1;                         // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldDisplay_ReturnValue;                // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CompassIconBase_C*                 CallFunc_Map_Find_Value_1;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateVisibility_InDistance_1;            // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_GetVisibleIcons) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_GetVisibleIcons");
static_assert(sizeof(WBP_Ingame_Compass_C_GetVisibleIcons) == 0x0000D0, "Wrong size on WBP_Ingame_Compass_C_GetVisibleIcons");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Find_Value) == 0x000048, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_UpdateVisibility_InDistance) == 0x000051, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_UpdateVisibility_InDistance' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_GetLocationManager_ReturnValue) == 0x000058, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Keys_Keys_1) == 0x000068, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Get_Item_1) == 0x00007C, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_GetLocationPoint_ReturnValue) == 0x000090, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_GetLocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_ShouldDisplay_ReturnValue) == 0x000099, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_ShouldDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_GetLocation_ReturnValue) == 0x0000A0, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Array_Add_ReturnValue_1) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Find_Value_1) == 0x0000C0, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_Map_Find_ReturnValue_1) == 0x0000C8, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_GetVisibleIcons, CallFunc_UpdateVisibility_InDistance_1) == 0x0000C9, "Member 'WBP_Ingame_Compass_C_GetVisibleIcons::CallFunc_UpdateVisibility_InDistance_1' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.On Added Location
// 0x0600 (0x0600 - 0x0000)
struct WBP_Ingame_Compass_C_On_Added_Location final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       Location;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              SearchType;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLocationUIData                     LocationUIData;                                    // 0x0020(0x0040)(Edit, BlueprintVisible)
	struct FPalLocationUIData_TableRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x00A8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0140(0x0050)(HasGetValueTypeHash)
	struct FPalLocationUIData                     CallFunc_Map_Find_Value;                           // 0x0190(0x0040)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01E8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FPalLocationUIData                     K2Node_Copy_ReturnValue;                           // 0x0210(0x0040)()
	struct FPalLocationUIData                     K2Node_SetFieldsInStruct_StructOut;                // 0x0250(0x0040)()
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x029C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequestedPlayer_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class UPalLocationBase*>   CallFunc_GetLocationMap_ReturnValue;               // 0x02C0(0x0050)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue_1;         // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x0328(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0338(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_ReturnValue;             // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0358(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_LocationPoint_ReturnValue;                // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue_1;                    // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocation_ReturnValue_1;                // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AA[0x6];                                      // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x03F0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0440(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0490(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x04A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x04B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x04C8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0500(0x0018)()
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519[0x7];                                      // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0520(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0570(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0580(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x05A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x05AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AD[0x3];                                      // 0x05AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x05B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x05B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B5[0x3];                                      // 0x05B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x05B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUICompassIconBase*                  CallFunc_Create_ReturnValue;                       // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CompassIconBase_C*                 K2Node_DynamicCast_AsWBP_Compass_Icon_Base;        // 0x05C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x05D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D2[0x6];                                      // 0x05D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameCompass_BossTower_C*         K2Node_DynamicCast_AsWBP_Ingame_Compass_Boss_Tower; // 0x05D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameCompass_FastTravel_C*        K2Node_DynamicCast_AsWBP_Ingame_Compass_Fast_Travel; // 0x05E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_On_Added_Location) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_On_Added_Location");
static_assert(sizeof(WBP_Ingame_Compass_C_On_Added_Location) == 0x000600, "Wrong size on WBP_Ingame_Compass_C_On_Added_Location");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, LocationId) == 0x000000, "Member 'WBP_Ingame_Compass_C_On_Added_Location::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, Location) == 0x000010, "Member 'WBP_Ingame_Compass_C_On_Added_Location::Location' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, SearchType) == 0x000018, "Member 'WBP_Ingame_Compass_C_On_Added_Location::SearchType' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, LocationUIData) == 0x000020, "Member 'WBP_Ingame_Compass_C_On_Added_Location::LocationUIData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000108, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_IsValid_ReturnValue) == 0x000109, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetType_ReturnValue) == 0x00010A, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00010B, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00010C, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000110, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_BooleanOR_ReturnValue) == 0x000120, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeStruct_FormatArgumentData) == 0x000140, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Map_Find_Value) == 0x000190, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Map_Find_ReturnValue) == 0x0001D0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeArray_Array) == 0x0001D8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Format_ReturnValue) == 0x0001E8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_TextToString_ReturnValue) == 0x000200, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_Copy_ReturnValue) == 0x000210, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_Copy_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_SetFieldsInStruct_StructOut) == 0x000250, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, Temp_bool_True_if_break_was_hit_Variable) == 0x000290, "Member 'WBP_Ingame_Compass_C_On_Added_Location::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, Temp_int_Array_Index_Variable) == 0x000294, "Member 'WBP_Ingame_Compass_C_On_Added_Location::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Not_PreBool_ReturnValue) == 0x000298, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x00029C, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocationManager_ReturnValue) == 0x0002B0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_IsRequestedPlayer_ReturnValue) == 0x0002B8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_IsRequestedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocationMap_ReturnValue) == 0x0002C0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000310, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocationManager_ReturnValue_1) == 0x000318, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocationManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetGameSetting_ReturnValue) == 0x000320, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Map_Keys_Keys) == 0x000328, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Array_Get_Item) == 0x000338, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Array_Length_ReturnValue) == 0x000348, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocationPoint_ReturnValue) == 0x000350, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocation_ReturnValue) == 0x000358, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_LocationPoint_ReturnValue) == 0x000370, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_LocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetType_ReturnValue_1) == 0x000378, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocation_ReturnValue_1) == 0x000380, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000398, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Vector_Distance2D_ReturnValue) == 0x0003A0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0003A8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_BooleanAND_ReturnValue) == 0x0003A9, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetClassDisplayName_ReturnValue) == 0x0003B0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003C0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003D8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeStruct_FormatArgumentData_1) == 0x0003F0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeStruct_FormatArgumentData_2) == 0x000440, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeArray_Array_1) == 0x000490, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeArray_Array_2) == 0x0004A0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Format_ReturnValue_1) == 0x0004B0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Format_ReturnValue_2) == 0x0004C8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0004E0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0004F0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000500, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_IsValidClass_ReturnValue) == 0x000518, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeStruct_FormatArgumentData_3) == 0x000520, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_MakeArray_Array_3) == 0x000570, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Format_ReturnValue_3) == 0x000580, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Conv_TextToString_ReturnValue_3) == 0x000598, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, Temp_int_Loop_Counter_Variable) == 0x0005A8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Less_IntInt_ReturnValue) == 0x0005AC, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Add_IntInt_ReturnValue) == 0x0005B0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_BooleanAND_ReturnValue_1) == 0x0005B4, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0005B8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_Create_ReturnValue) == 0x0005C0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_AsWBP_Compass_Icon_Base) == 0x0005C8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_AsWBP_Compass_Icon_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_bSuccess) == 0x0005D0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_IsValid_ReturnValue_1) == 0x0005D1, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_AsWBP_Ingame_Compass_Boss_Tower) == 0x0005D8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_AsWBP_Ingame_Compass_Boss_Tower' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_bSuccess_1) == 0x0005E0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_AsWBP_Ingame_Compass_Fast_Travel) == 0x0005E8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_AsWBP_Ingame_Compass_Fast_Travel' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, K2Node_DynamicCast_bSuccess_2) == 0x0005F0, "Member 'WBP_Ingame_Compass_C_On_Added_Location::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_On_Added_Location, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x0005F8, "Member 'WBP_Ingame_Compass_C_On_Added_Location::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.OnCustomMarkerChanged
// 0x01A0 (0x01A0 - 0x0000)
struct WBP_Ingame_Compass_C_OnCustomMarkerChanged final
{
public:
	struct FGuid                                  MarkerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable;                                // 0x0010(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLocationUIData_TableRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0018(0x00A8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLocationUIData                     CallFunc_Map_Find_Value;                           // 0x00C8(0x0040)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x6];                                      // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameCompass_CustomMarker_C*      CallFunc_Map_Find_Value_1;                         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x0128(0x0050)()
	struct FPalCustomMarkerSaveData               CallFunc_Map_Find_Value_2;                         // 0x0178(0x0020)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_OnCustomMarkerChanged) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_OnCustomMarkerChanged");
static_assert(sizeof(WBP_Ingame_Compass_C_OnCustomMarkerChanged) == 0x0001A0, "Wrong size on WBP_Ingame_Compass_C_OnCustomMarkerChanged");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, MarkerId) == 0x000000, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::MarkerId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, Temp_byte_Variable) == 0x000010, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_GetDataTableRowFromName_OutRow) == 0x000018, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_Value) == 0x0000C8, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_ReturnValue) == 0x000108, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Remove_ReturnValue) == 0x000109, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_Value_1) == 0x000110, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_ReturnValue_1) == 0x000118, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_GetLocationManager_ReturnValue) == 0x000120, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_GetCustomMarkers_ReturnValue) == 0x000128, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_Value_2) == 0x000178, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnCustomMarkerChanged, CallFunc_Map_Find_ReturnValue_2) == 0x000198, "Member 'WBP_Ingame_Compass_C_OnCustomMarkerChanged::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.OnRemovedLocation
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Ingame_Compass_C_OnRemovedLocation final
{
public:
	struct FGuid                                  LocationId;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       Location;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_GetType_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequestedPlayer_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGuid, class UPalLocationBase*>   CallFunc_GetLocationMap_ReturnValue;               // 0x0040(0x0050)()
	class UWBP_CompassIconBase_C*                 CallFunc_Map_Find_Value;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_OnRemovedLocation) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_OnRemovedLocation");
static_assert(sizeof(WBP_Ingame_Compass_C_OnRemovedLocation) == 0x0000A0, "Wrong size on WBP_Ingame_Compass_C_OnRemovedLocation");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, LocationId) == 0x000000, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, Location) == 0x000010, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::Location' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x000018, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_GetType_ReturnValue) == 0x000028, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_IsRequestedPlayer_ReturnValue) == 0x000029, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_IsRequestedPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002B, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_GetLocationManager_ReturnValue) == 0x000030, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_BooleanOR_ReturnValue) == 0x000038, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_GetLocationMap_ReturnValue) == 0x000040, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_GetLocationMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_Map_Find_Value) == 0x000090, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_OnRemovedLocation, CallFunc_Map_Remove_ReturnValue) == 0x000099, "Member 'WBP_Ingame_Compass_C_OnRemovedLocation::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Refresh Death Mark
// 0x0240 (0x0240 - 0x0000)
struct WBP_Ingame_Compass_C_Refresh_Death_Mark final
{
public:
	TMap<struct FGuid, class UPalLocationBase*>   LocationMap;                                       // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuid                                  LocationId;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      LocationPoint;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          AddNew;                                            // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  PlayerUId;                                         // 0x006C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x00B8(0x0020)(NoDestructor)
	struct FGuid                                  CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint_DroppedChest*         K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint_DroppedCharacter*     K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetOwnerPlayerUId_ReturnValue;            // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetOwnerPlayerUId_ReturnValue_1;          // 0x0114(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x0128(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D[0x3];                                      // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationBase*                       CallFunc_Map_Find_Value;                           // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameCompass_DeathMark_C*         CallFunc_Array_Get_Item_1;                         // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowInCompass_ReturnValue;              // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationPoint*                      CallFunc_LocationPoint_ReturnValue;                // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameCompass_DeathMark_C*         CallFunc_Create_ReturnValue;                       // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue_1;                // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x3];                                      // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalLocationPoint*>              CallFunc_Map_Keys_Keys_1;                          // 0x01D0(0x0010)(ReferenceParm)
	TArray<struct FGuid>                          CallFunc_Map_Values_Values;                        // 0x01E0(0x0010)(ReferenceParm)
	class UPalLocationPoint*                      CallFunc_Array_Get_Item_2;                         // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item_3;                         // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue_2;                // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GuidGuid_ReturnValue_1;        // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0236(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0237(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_Refresh_Death_Mark) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_Refresh_Death_Mark");
static_assert(sizeof(WBP_Ingame_Compass_C_Refresh_Death_Mark) == 0x000240, "Wrong size on WBP_Ingame_Compass_C_Refresh_Death_Mark");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, LocationMap) == 0x000000, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::LocationMap' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, LocationId) == 0x000050, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, LocationPoint) == 0x000060, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::LocationPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, AddNew) == 0x000068, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::AddNew' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, PlayerUId) == 0x00006C, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::PlayerUId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_bool_True_if_break_was_hit_Variable) == 0x000080, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Not_PreBool_ReturnValue) == 0x000081, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Array_Index_Variable_1) == 0x00008C, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Add_IntInt_ReturnValue_1) == 0x000094, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Array_Index_Variable_2) == 0x000098, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetLocation_ReturnValue) == 0x0000A0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_MakeStruct_Anchors) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetLocalPlayerUID_ReturnValue) == 0x0000D8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetLocalPlayerUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest) == 0x0000E8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_AsPal_Location_Point_Dropped_Chest' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character) == 0x0000F8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_AsPal_Location_Point_Dropped_Character' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetOwnerPlayerUId_ReturnValue) == 0x000104, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetOwnerPlayerUId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetOwnerPlayerUId_ReturnValue_1) == 0x000114, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetOwnerPlayerUId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_EqualEqual_GuidGuid_ReturnValue) == 0x000124, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_EqualEqual_GuidGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Keys_Keys) == 0x000128, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Get_Item) == 0x000138, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, Temp_int_Loop_Counter_Variable_2) == 0x000150, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Add_IntInt_ReturnValue_2) == 0x000154, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Find_Value) == 0x000158, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Find_ReturnValue) == 0x000160, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Get_Item_1) == 0x000168, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_IsShowInCompass_ReturnValue) == 0x000171, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_IsShowInCompass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_LocationPoint_ReturnValue) == 0x000178, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_LocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_BooleanAND_ReturnValue) == 0x000180, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Length_ReturnValue_1) == 0x000184, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Less_IntInt_ReturnValue_1) == 0x000188, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetOwningPlayer_ReturnValue) == 0x000190, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Create_ReturnValue) == 0x000198, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetLocation_ReturnValue_1) == 0x0001A0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_AddChild_ReturnValue) == 0x0001B8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x0001C0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, K2Node_DynamicCast_bSuccess_2) == 0x0001C8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Add_ReturnValue) == 0x0001CC, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Keys_Keys_1) == 0x0001D0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Values_Values) == 0x0001E0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Get_Item_2) == 0x0001F0, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Get_Item_3) == 0x0001F8, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_GetLocation_ReturnValue_2) == 0x000208, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_GetLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_EqualEqual_GuidGuid_ReturnValue_1) == 0x000220, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_EqualEqual_GuidGuid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Vector_Distance_ReturnValue) == 0x000228, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Array_Length_ReturnValue_2) == 0x000230, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000234, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Less_IntInt_ReturnValue_2) == 0x000235, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_BooleanAND_ReturnValue_1) == 0x000236, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_BooleanAND_ReturnValue_2) == 0x000237, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Map_Contains_ReturnValue) == 0x000238, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_Not_PreBool_ReturnValue_1) == 0x000239, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Refresh_Death_Mark, CallFunc_BooleanAND_ReturnValue_3) == 0x00023A, "Member 'WBP_Ingame_Compass_C_Refresh_Death_Mark::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Setup Created Icon Widget
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Ingame_Compass_C_Setup_Created_Icon_Widget final
{
public:
	class UWBP_CompassIconBase_C*                 CreatedWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  LocationId;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalLocationUIData                     LocationUIData;                                    // 0x0018(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0078(0x0020)(NoDestructor)
	double                                        CallFunc_SetDisplayDistance_Length_ImplicitCast;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_Setup_Created_Icon_Widget");
static_assert(sizeof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget) == 0x0000A0, "Wrong size on WBP_Ingame_Compass_C_Setup_Created_Icon_Widget");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, CreatedWidget) == 0x000000, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::CreatedWidget' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, LocationId) == 0x000008, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::LocationId' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, LocationUIData) == 0x000018, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::LocationUIData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, CallFunc_Map_Contains_ReturnValue) == 0x000058, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, CallFunc_AddChild_ReturnValue) == 0x000060, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000068, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, K2Node_MakeStruct_Anchors) == 0x000078, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Setup_Created_Icon_Widget, CallFunc_SetDisplayDistance_Length_ImplicitCast) == 0x000098, "Member 'WBP_Ingame_Compass_C_Setup_Created_Icon_Widget::CallFunc_SetDisplayDistance_Length_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.SetupCustomMarker
// 0x01C0 (0x01C0 - 0x0000)
struct WBP_Ingame_Compass_C_SetupCustomMarker final
{
public:
	struct FPalLocationUIData_TableRow            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0000(0x00A8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& MarkerId)>       K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              Temp_byte_Variable;                                // 0x00C8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalCustomMarkerSaveData> CallFunc_GetCustomMarkers_ReturnValue;             // 0x00D8(0x0050)()
	struct FPalLocationUIData                     CallFunc_Map_Find_Value;                           // 0x0128(0x0040)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          CallFunc_Map_Keys_Keys;                            // 0x0170(0x0010)(ReferenceParm)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalCustomMarkerSaveData               CallFunc_Map_Find_Value_1;                         // 0x0198(0x0020)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_SetupCustomMarker) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_SetupCustomMarker");
static_assert(sizeof(WBP_Ingame_Compass_C_SetupCustomMarker) == 0x0001C0, "Wrong size on WBP_Ingame_Compass_C_SetupCustomMarker");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, Temp_int_Array_Index_Variable) == 0x0000AC, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, Temp_byte_Variable) == 0x0000C8, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_GetLocationManager_ReturnValue) == 0x0000D0, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_GetCustomMarkers_ReturnValue) == 0x0000D8, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_GetCustomMarkers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Map_Find_Value) == 0x000128, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Map_Find_ReturnValue) == 0x000168, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Map_Keys_Keys) == 0x000170, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Array_Get_Item) == 0x000180, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Map_Find_Value_1) == 0x000198, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Map_Find_ReturnValue_1) == 0x0001B8, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_SetupCustomMarker, CallFunc_Less_IntInt_ReturnValue) == 0x0001B9, "Member 'WBP_Ingame_Compass_C_SetupCustomMarker::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_Compass_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_Tick) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_Tick");
static_assert(sizeof(WBP_Ingame_Compass_C_Tick) == 0x000048, "Wrong size on WBP_Ingame_Compass_C_Tick");
static_assert(offsetof(WBP_Ingame_Compass_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Ingame_Compass_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Ingame_Compass_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Update Icon
// 0x0280 (0x0280 - 0x0000)
struct WBP_Ingame_Compass_C_Update_Icon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item;                           // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameCompass_CustomMarker_C*      CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Offset_Value_offSetValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Array_Get_Item_1;                         // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_GuidToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0108(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0198(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_CompassIconBase_C*                 CallFunc_Map_Find_Value_1;                         // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Offset_Value_offSetValue_1;           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0208(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameCompass_DeathMark_C*         CallFunc_Array_Get_Item_2;                         // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_225[0x3];                                      // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Offset_Value_offSetValue_2;           // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateVisibility_InDistance;              // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0240(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalLocationManager*                    CallFunc_GetLocationManager_ReturnValue;           // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLocationPoint*                      CallFunc_GetLocationPoint_ReturnValue;             // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocation_ReturnValue;                  // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldDisplay_ReturnValue;                // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_Update_Icon) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_Update_Icon");
static_assert(sizeof(WBP_Ingame_Compass_C_Update_Icon) == 0x000280, "Wrong size on WBP_Ingame_Compass_C_Update_Icon");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Array_Index_Variable_1) == 0x000004, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Array_Index_Variable_2) == 0x000010, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Get_Item) == 0x00001C, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Get_Offset_Value_offSetValue) == 0x000040, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Get_Offset_Value_offSetValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, Temp_int_Loop_Counter_Variable_2) == 0x000048, "Member 'WBP_Ingame_Compass_C_Update_Icon::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_MakeVector2D_ReturnValue) == 0x000058, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Add_IntInt_ReturnValue_2) == 0x00006C, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Conv_GuidToString_ReturnValue) == 0x000088, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Conv_GuidToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'WBP_Ingame_Compass_C_Update_Icon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000108, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, K2Node_MakeArray_Array) == 0x000120, "Member 'WBP_Ingame_Compass_C_Update_Icon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'WBP_Ingame_Compass_C_Update_Icon::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Format_ReturnValue) == 0x000180, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, K2Node_MakeArray_Array_1) == 0x000198, "Member 'WBP_Ingame_Compass_C_Update_Icon::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A8, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Format_ReturnValue_1) == 0x0001B8, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0001D0, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Map_Find_Value_1) == 0x0001E0, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Map_Find_ReturnValue_1) == 0x0001E8, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Get_Offset_Value_offSetValue_1) == 0x0001F0, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Get_Offset_Value_offSetValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_IsVisible_ReturnValue) == 0x0001F8, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000200, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_MakeVector2D_ReturnValue_1) == 0x000208, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Get_Item_2) == 0x000218, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Array_Length_ReturnValue_2) == 0x000220, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000224, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Get_Offset_Value_offSetValue_2) == 0x000228, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Get_Offset_Value_offSetValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000230, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_UpdateVisibility_InDistance) == 0x000238, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_UpdateVisibility_InDistance' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_MakeVector2D_ReturnValue_2) == 0x000240, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_GetLocationManager_ReturnValue) == 0x000250, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_GetLocationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_GetLocationPoint_ReturnValue) == 0x000258, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_GetLocationPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_GetLocation_ReturnValue) == 0x000260, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_GetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_IsValid_ReturnValue) == 0x000278, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Icon, CallFunc_ShouldDisplay_ReturnValue) == 0x000279, "Member 'WBP_Ingame_Compass_C_Update_Icon::CallFunc_ShouldDisplay_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_Compass.WBP_Ingame_Compass_C.Update Rotation From Pawn
// 0x0078 (0x0078 - 0x0000)
struct WBP_Ingame_Compass_C_Update_Rotation_From_Pawn final
{
public:
	class APawn*                                  TargetPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_Value_ImplicitCast;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_Value_ImplicitCast_1;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn) == 0x000008, "Wrong alignment on WBP_Ingame_Compass_C_Update_Rotation_From_Pawn");
static_assert(sizeof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn) == 0x000078, "Wrong size on WBP_Ingame_Compass_C_Update_Rotation_From_Pawn");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, TargetPawn) == 0x000000, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::TargetPawn' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_GetControlRotation_ReturnValue) == 0x000010, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_BreakRotator_Roll) == 0x000028, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_BreakRotator_Pitch) == 0x00002C, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_BreakRotator_Yaw) == 0x000030, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000034, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_IsValid_ReturnValue_1) == 0x000035, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_NormalizeToRange_ReturnValue) == 0x000038, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_NormalizeToRange_ReturnValue_1) == 0x000040, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_NormalizeToRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_SelectFloat_ReturnValue) == 0x000048, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_NormalizeToRange_Value_ImplicitCast) == 0x000058, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_NormalizeToRange_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_NormalizeToRange_Value_ImplicitCast_1) == 0x000060, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_NormalizeToRange_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Compass_C_Update_Rotation_From_Pawn, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000070, "Member 'WBP_Ingame_Compass_C_Update_Rotation_From_Pawn::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

