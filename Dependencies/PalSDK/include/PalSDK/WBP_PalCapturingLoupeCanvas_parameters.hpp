#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CheckWidgetEnded
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterHandle*>  CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CapturingPalLoupe_C*               CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded) == 0x000048, "Wrong size on WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Map_Remove_ReturnValue) == 0x000031, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'WBP_PalCapturingLoupeCanvas_C_CheckWidgetEnded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.CreateLoupeWidget
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureBodyBase_C*               TargetCaptureBody;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CapturingPalLoupe_C*               CreatedWidget;                                     // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CapturingPalLoupe_C*               CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget) == 0x000030, "Wrong size on WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, TargetHandle) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, TargetCaptureBody) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::TargetCaptureBody' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, CreatedWidget) == 0x000010, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::CreatedWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget, CallFunc_AddChildToCanvas_ReturnValue) == 0x000028, "Member 'WBP_PalCapturingLoupeCanvas_C_CreateLoupeWidget::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.ExecuteUbergraph_WBP_PalCapturingLoupeCanvas
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas) == 0x000070, "Wrong size on WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, EntryPoint) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, K2Node_Event_InDeltaTime) == 0x000058, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, CallFunc_GetPalmi_ReturnValue) == 0x000060, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'WBP_PalCapturingLoupeCanvas_C_ExecuteUbergraph_WBP_PalCapturingLoupeCanvas::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnChangedWeaponEvent
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_CapturePrism_C>      CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent) == 0x000050, "Wrong size on WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent, Weapon) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent::Weapon' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000010, "Member 'WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_OnChangedWeaponEvent::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnStartedCapture
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_OnStartedCapture final
{
public:
	class AActor*                                 CreatedBodyActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBonus;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CapturingPalLoupe_C*               CallFunc_CreateLoupeWidget_createdWidget;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_OnStartedCapture");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture) == 0x000030, "Wrong size on WBP_PalCapturingLoupeCanvas_C_OnStartedCapture");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, CreatedBodyActor) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::CreatedBodyActor' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, TargetHandle) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, IsBonus) == 0x000010, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::IsBonus' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnStartedCapture, CallFunc_CreateLoupeWidget_createdWidget) == 0x000028, "Member 'WBP_PalCapturingLoupeCanvas_C_OnStartedCapture::CallFunc_CreateLoupeWidget_createdWidget' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.OnThrowCaptureWeapon
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TagretHandle, bool IsBonus)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ThrowCaptureObjectBase_C*           K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon) == 0x000028, "Wrong size on WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon, Bullet) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon::Bullet' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon, K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon::K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_OnThrowCaptureWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.RegisterWeaponEvent
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent final
{
public:
	class ABP_CapturePrism_C*                     CaptureWeapon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent) == 0x000018, "Wrong size on WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent, CaptureWeapon) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent::CaptureWeapon' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCapturingLoupeCanvas_C_RegisterWeaponEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_Tick) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_Tick");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_Tick) == 0x000048, "Wrong size on WBP_PalCapturingLoupeCanvas_C_Tick");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalCapturingLoupeCanvas_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PalCapturingLoupeCanvas.WBP_PalCapturingLoupeCanvas_C.UnregisterWeaponEvent
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent final
{
public:
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent) == 0x000008, "Wrong alignment on WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent");
static_assert(sizeof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent) == 0x000030, "Wrong size on WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000010, "Member 'WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000020, "Member 'WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PalCapturingLoupeCanvas_C_UnregisterWeaponEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

