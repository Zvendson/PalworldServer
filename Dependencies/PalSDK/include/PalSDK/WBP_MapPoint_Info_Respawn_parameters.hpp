#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.AdjustSide
// 0x0040 (0x0040 - 0x0000)
struct WBP_MapPoint_Info_Respawn_C_AdjustSide final
{
public:
	struct FGeometry                              TargetGeometry;                                    // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MapPoint_Info_Respawn_C_AdjustSide) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_Respawn_C_AdjustSide");
static_assert(sizeof(WBP_MapPoint_Info_Respawn_C_AdjustSide) == 0x000040, "Wrong size on WBP_MapPoint_Info_Respawn_C_AdjustSide");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_AdjustSide, TargetGeometry) == 0x000000, "Member 'WBP_MapPoint_Info_Respawn_C_AdjustSide::TargetGeometry' has a wrong offset!");

// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.ExecuteUbergraph_WBP_MapPoint_Info_Respawn
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldDisplay;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_PointId;                        // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsInitSelect;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalRespawnPointData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0080(0x0018)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x00A0(0x0018)()
	struct FGeometry                              K2Node_CustomEvent_TargetGeometry;                 // 0x00B8(0x0040)(IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x00F8(0x0010)(NoDestructor)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0128(0x0018)()
	double                                        CallFunc_BreakVector2D_X;                          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16D[0x3];                                      // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn");
static_assert(sizeof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn) == 0x0001D8, "Wrong size on WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, EntryPoint) == 0x000000, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_bool_Variable) == 0x000004, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_byte_Variable) == 0x000005, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_bool_Variable_1) == 0x000006, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_bool_Variable_2) == 0x000007, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_struct_Variable) == 0x000008, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_CustomEvent_ShouldDisplay) == 0x000028, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_CustomEvent_ShouldDisplay' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_CustomEvent_PointId) == 0x00002C, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_CustomEvent_PointId' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_CustomEvent_IsInitSelect) == 0x000034, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_CustomEvent_IsInitSelect' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000058, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Conv_NameToString_ReturnValue) == 0x000060, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetLocalizedText_ReturnValue) == 0x000080, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Conv_StringToName_ReturnValue) == 0x000098, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetLocalizedText_ReturnValue_1) == 0x0000A0, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_CustomEvent_TargetGeometry) == 0x0000B8, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_CustomEvent_TargetGeometry' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_Select_Default) == 0x0000F8, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_LocalToViewport_PixelPosition) == 0x000108, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_LocalToViewport_ViewportPosition) == 0x000118, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000128, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_BreakVector2D_X) == 0x000140, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_BreakVector2D_Y) == 0x000148, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetViewportSize_ReturnValue) == 0x000150, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000160, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_GetViewportScale_ReturnValue) == 0x000168, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, Temp_byte_Variable_1) == 0x00016C, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000170, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_MakeVector2D_ReturnValue) == 0x000178, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_Select_Default_1) == 0x000188, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000190, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_BreakVector2D_X_1) == 0x0001A0, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_BreakVector2D_Y_1) == 0x0001A8, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001B0, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, K2Node_Select_Default_2) == 0x0001C0, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0001D0, "Member 'WBP_MapPoint_Info_Respawn_C_ExecuteUbergraph_WBP_MapPoint_Info_Respawn::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.SetPointInfo
// 0x000C (0x000C - 0x0000)
struct WBP_MapPoint_Info_Respawn_C_SetPointInfo final
{
public:
	class FName                                   PointId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitSelect;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_Respawn_C_SetPointInfo) == 0x000004, "Wrong alignment on WBP_MapPoint_Info_Respawn_C_SetPointInfo");
static_assert(sizeof(WBP_MapPoint_Info_Respawn_C_SetPointInfo) == 0x00000C, "Wrong size on WBP_MapPoint_Info_Respawn_C_SetPointInfo");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_SetPointInfo, PointId) == 0x000000, "Member 'WBP_MapPoint_Info_Respawn_C_SetPointInfo::PointId' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_SetPointInfo, IsInitSelect) == 0x000008, "Member 'WBP_MapPoint_Info_Respawn_C_SetPointInfo::IsInitSelect' has a wrong offset!");

// Function WBP_MapPoint_Info_Respawn.WBP_MapPoint_Info_Respawn_C.ToggleDisplay
// 0x0001 (0x0001 - 0x0000)
struct WBP_MapPoint_Info_Respawn_C_ToggleDisplay final
{
public:
	bool                                          ShouldDisplay;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_Respawn_C_ToggleDisplay) == 0x000001, "Wrong alignment on WBP_MapPoint_Info_Respawn_C_ToggleDisplay");
static_assert(sizeof(WBP_MapPoint_Info_Respawn_C_ToggleDisplay) == 0x000001, "Wrong size on WBP_MapPoint_Info_Respawn_C_ToggleDisplay");
static_assert(offsetof(WBP_MapPoint_Info_Respawn_C_ToggleDisplay, ShouldDisplay) == 0x000000, "Member 'WBP_MapPoint_Info_Respawn_C_ToggleDisplay::ShouldDisplay' has a wrong offset!");

}

