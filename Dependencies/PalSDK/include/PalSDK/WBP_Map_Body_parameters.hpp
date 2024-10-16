#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Slate_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Map_Body.WBP_Map_Body_C.Add Icon
// 0x0070 (0x0070 - 0x0000)
struct WBP_Map_Body_C_Add_Icon final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Added;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreMask_IsIgnore;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocationPosition_LocationPosition;     // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_By_Location_Added;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Add_Icon) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Add_Icon");
static_assert(sizeof(WBP_Map_Body_C_Add_Icon) == 0x000070, "Wrong size on WBP_Map_Body_C_Add_Icon");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_Add_Icon::IconWidget' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, Added) == 0x000008, "Member 'WBP_Map_Body_C_Add_Icon::Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_GetHUDService_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_IsIgnoreMask_IsIgnore) == 0x000018, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_IsIgnoreMask_IsIgnore' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_GetLocationPosition_LocationPosition) == 0x000020, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_GetLocationPosition_LocationPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WBP_Map_Body_C_Add_Icon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_BooleanOR_ReturnValue) == 0x000049, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'WBP_Map_Body_C_Add_Icon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, CallFunc_Add_Icon_By_Location_Added) == 0x00005C, "Member 'WBP_Map_Body_C_Add_Icon::CallFunc_Add_Icon_By_Location_Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000060, "Member 'WBP_Map_Body_C_Add_Icon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Add Icon By Location
// 0x0070 (0x0070 - 0x0000)
struct WBP_Map_Body_C_Add_Icon_By_Location final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreMask;                                        // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Added;                                             // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Icon_Visibility_Visible;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Add_Icon_By_Location) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Add_Icon_By_Location");
static_assert(sizeof(WBP_Map_Body_C_Add_Icon_By_Location) == 0x000070, "Wrong size on WBP_Map_Body_C_Add_Icon_By_Location");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, Widget) == 0x000000, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::Widget' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, WorldLocation) == 0x000008, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::WorldLocation' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, IgnoreMask) == 0x000020, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::IgnoreMask' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, Added) == 0x000021, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, K2Node_CreateDelegate_OutputDelegate_2) == 0x000050, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, Temp_bool_Variable) == 0x000060, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, CallFunc_Update_Icon_Visibility_Visible) == 0x000061, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::CallFunc_Update_Icon_Visibility_Visible' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Add_Icon_By_Location, K2Node_Select_Default) == 0x000068, "Member 'WBP_Map_Body_C_Add_Icon_By_Location::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Adjust Scroll Local Player Position
// 0x0170 (0x0170 - 0x0000)
struct WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPlayerInfoForMap                   CallFunc_GetPlayerInfoForMap_ReturnValue;          // 0x0030(0x0070)()
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_WorldLocationToWidgetOffset_offset;       // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue_1;                       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position) == 0x000010, "Wrong alignment on WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position");
static_assert(sizeof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position) == 0x000170, "Wrong size on WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_GetSize_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_GetPlayerInfoForMap_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_GetPlayerInfoForMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x0000A0, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_BreakTransform_Location) == 0x0000B0, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_BreakTransform_Rotation) == 0x0000C8, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_BreakTransform_Scale) == 0x0000E0, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_WorldLocationToWidgetOffset_offset) == 0x0000F8, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_WorldLocationToWidgetOffset_offset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_BreakVector2D_X) == 0x000108, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_BreakVector2D_Y) == 0x000110, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_FMin_ReturnValue) == 0x000118, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_FMin_ReturnValue_1) == 0x000120, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_FMax_ReturnValue) == 0x000128, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_FMax_ReturnValue_1) == 0x000130, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_MakeVector2D_ReturnValue) == 0x000138, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x000148, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000158, "Member 'WBP_Map_Body_C_Adjust_Scroll_Local_Player_Position::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.AdjustScrollForRespawn
// 0x0088 (0x0088 - 0x0000)
struct WBP_Map_Body_C_AdjustScrollForRespawn final
{
public:
	double                                        CallFunc_BreakVector2D_X;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue_1;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_AdjustScrollForRespawn) == 0x000008, "Wrong alignment on WBP_Map_Body_C_AdjustScrollForRespawn");
static_assert(sizeof(WBP_Map_Body_C_AdjustScrollForRespawn) == 0x000088, "Wrong size on WBP_Map_Body_C_AdjustScrollForRespawn");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_BreakVector2D_X) == 0x000000, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_FMin_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_GetSize_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_FMin_ReturnValue_1) == 0x000038, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_FMax_ReturnValue_1) == 0x000050, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_MakeVector2D_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x000068, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_AdjustScrollForRespawn, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000078, "Member 'WBP_Map_Body_C_AdjustScrollForRespawn::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.CalcMapImagePosition
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_Map_Body_C_CalcMapImagePosition final
{
public:
	struct FVector2D                              AddOffset;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue_1;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_CalcMapImagePosition) == 0x000008, "Wrong alignment on WBP_Map_Body_C_CalcMapImagePosition");
static_assert(sizeof(WBP_Map_Body_C_CalcMapImagePosition) == 0x0000C8, "Wrong size on WBP_Map_Body_C_CalcMapImagePosition");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, AddOffset) == 0x000000, "Member 'WBP_Map_Body_C_CalcMapImagePosition::AddOffset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, Position) == 0x000010, "Member 'WBP_Map_Body_C_CalcMapImagePosition::Position' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_GetPosition_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_GetSize_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000048, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_BreakVector2D_X) == 0x000068, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_BreakVector2D_Y) == 0x000070, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_BreakVector2D_X_1) == 0x000078, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_BreakVector2D_Y_1) == 0x000080, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_FMin_ReturnValue) == 0x000088, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000090, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_FMin_ReturnValue_1) == 0x000098, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_FMax_ReturnValue) == 0x0000A8, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_FMax_ReturnValue_1) == 0x0000B0, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_CalcMapImagePosition, CallFunc_MakeVector2D_ReturnValue) == 0x0000B8, "Member 'WBP_Map_Body_C_CalcMapImagePosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.ExecuteUbergraph_WBP_Map_Body
// 0x04D0 (0x04D0 - 0x0000)
struct WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalWorldMapUIDataTableRow             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x00D8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry_1;                         // 0x0108(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0168(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalWorldMapUIDataTableRow             CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x01C8(0x00D8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x02B0(0x0098)(ConstParm)
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x0348(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0360(0x0040)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x03A0(0x0098)(ConstParm)
	struct FPalWorldMapUIRegionData               CallFunc_Map_Find_Value;                           // 0x0438(0x0058)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x04A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B1[0x3];                                      // 0x04B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x04B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4[0x4];                                      // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateMapTransform_DeltaTime_ImplicitCast; // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body) == 0x000008, "Wrong alignment on WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body");
static_assert(sizeof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body) == 0x0004D0, "Wrong size on WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, EntryPoint) == 0x000000, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_IsValid_ReturnValue) == 0x0000E1, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_CustomEvent_Loaded) == 0x0000E8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, Temp_object_Variable) == 0x0000F0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_DynamicCast_AsTexture_2D) == 0x0000F8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_Event_MyGeometry_1) == 0x000108, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_Event_MyGeometry_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_Event_InDeltaTime) == 0x000148, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000150, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetPosition_ReturnValue) == 0x000158, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_CreateDelegate_OutputDelegate) == 0x000168, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_CreateDelegate_OutputDelegate_1) == 0x000178, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000188, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000190, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000198, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetSize_ReturnValue) == 0x0001A0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_BreakVector2D_X) == 0x0001B0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_BreakVector2D_Y) == 0x0001B8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0001C0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0001C8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x0002A0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0002A8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_Event_MouseEvent_1) == 0x0002B0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Map_Keys_Keys) == 0x000348, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Array_Get_Item) == 0x000358, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_Event_MyGeometry) == 0x000360, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_Event_MouseEvent) == 0x0003A0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Map_Find_Value) == 0x000438, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_Map_Find_ReturnValue) == 0x000490, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_BreakVector2D_X_1) == 0x000498, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_BreakVector2D_Y_1) == 0x0004A0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0004A8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_GetCurrentInputType_ReturnValue) == 0x0004B0, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004B4, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body, CallFunc_UpdateMapTransform_DeltaTime_ImplicitCast) == 0x0004C8, "Member 'WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body::CallFunc_UpdateMapTransform_DeltaTime_ImplicitCast' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.GetCursorScrollOffset
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Map_Body_C_GetCursorScrollOffset final
{
public:
	struct FVector2D                              Offset;                                            // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition; // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_WorldLocationToWidgetOffset_offset;       // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_GetCursorScrollOffset) == 0x000008, "Wrong alignment on WBP_Map_Body_C_GetCursorScrollOffset");
static_assert(sizeof(WBP_Map_Body_C_GetCursorScrollOffset) == 0x0000A0, "Wrong size on WBP_Map_Body_C_GetCursorScrollOffset");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, Offset) == 0x000000, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::Offset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_GetPosition_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_GetSize_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000048, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition) == 0x000068, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_Project_Icon_Position_to_World_Postion_WorldPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_WorldLocationToWidgetOffset_offset) == 0x000080, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_WorldLocationToWidgetOffset_offset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_GetCursorScrollOffset, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000090, "Member 'WBP_Map_Body_C_GetCursorScrollOffset::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.On Hovered Any Icon Internal
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Map_Body_C_On_Hovered_Any_Icon_Internal final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0010(0x0040)(ConstParm, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconFTTower_C*                 K2Node_DynamicCast_AsWBP_Map_Icon_FTTower;         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_Icon_Respawn_C*           K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn;   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCamp_C*                    K2Node_DynamicCast_AsWBP_Map_Icon_Camp;            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconTower_C*                   K2Node_DynamicCast_AsWBP_Map_Icon_Tower;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconBoss_C*                    K2Node_DynamicCast_AsWBP_Map_Icon_Boss;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal) == 0x000008, "Wrong alignment on WBP_Map_Body_C_On_Hovered_Any_Icon_Internal");
static_assert(sizeof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal) == 0x0000C0, "Wrong size on WBP_Map_Body_C_On_Hovered_Any_Icon_Internal");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::IconWidget' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_GetCachedGeometry_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000050, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_GetPosition_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_FTTower) == 0x000068, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_FTTower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn) == 0x000078, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000081, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Camp) == 0x000088, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Tower) == 0x000098, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Tower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A1, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_BooleanAND_ReturnValue_2) == 0x0000A2, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Boss) == 0x0000A8, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Boss' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, K2Node_DynamicCast_bSuccess_4) == 0x0000B0, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_On_Hovered_Any_Icon_Internal, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x0000B8, "Member 'WBP_Map_Body_C_On_Hovered_Any_Icon_Internal::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnAnalogValueChanged
// 0x02A8 (0x02A8 - 0x0000)
struct WBP_Map_Body_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0040(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0088(0x00B8)(Parm, OutParm, ReturnParm)
	double                                        AnalogZoomMultiplier;                              // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TmpAnalogValue;                                    // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyEvent                              CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue; // 0x0158(0x0040)()
	float                                         CallFunc_GetAnalogValue_ReturnValue;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01A0(0x0018)(HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C2[0x6];                                      // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D2[0x6];                                      // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01E0(0x00B8)()
	double                                        CallFunc_Abs_A_ImplicitCast;                       // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnAnalogValueChanged");
static_assert(sizeof(WBP_Map_Body_C_OnAnalogValueChanged) == 0x0002A8, "Wrong size on WBP_Map_Body_C_OnAnalogValueChanged");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, ReturnValue) == 0x000088, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, AnalogZoomMultiplier) == 0x000140, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::AnalogZoomMultiplier' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, TmpAnalogValue) == 0x000148, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::TmpAnalogValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, NewLocalVar_0) == 0x000150, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue) == 0x000158, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_GetAnalogValue_ReturnValue) == 0x000198, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_GetAnalogValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_GetKey_ReturnValue) == 0x0001A0, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_Abs_ReturnValue) == 0x0001B8, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001C0, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001C1, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_SelectFloat_ReturnValue) == 0x0001C8, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x0001D0, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x0001D1, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001D8, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x0001E0, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_Abs_A_ImplicitCast) == 0x000298, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnAnalogValueChanged, CallFunc_SelectFloat_A_ImplicitCast) == 0x0002A0, "Member 'WBP_Map_Body_C_OnAnalogValueChanged::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnClickedAnyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature");
static_assert(sizeof(WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature) == 0x000008, "Wrong size on WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature");
static_assert(offsetof(WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnClickedAnyIcon_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Body_C_OnClickedAnyIcon_Internal final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnClickedAnyIcon_Internal) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnClickedAnyIcon_Internal");
static_assert(sizeof(WBP_Map_Body_C_OnClickedAnyIcon_Internal) == 0x000008, "Wrong size on WBP_Map_Body_C_OnClickedAnyIcon_Internal");
static_assert(offsetof(WBP_Map_Body_C_OnClickedAnyIcon_Internal, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_OnClickedAnyIcon_Internal::IconWidget' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnHoveredAnyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature");
static_assert(sizeof(WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature) == 0x000008, "Wrong size on WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature");
static_assert(offsetof(WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnInputMethodChanged
// 0x0058 (0x0058 - 0x0000)
struct WBP_Map_Body_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0008(0x0020)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors_1;                       // 0x0030(0x0020)(NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnInputMethodChanged) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnInputMethodChanged");
static_assert(sizeof(WBP_Map_Body_C_OnInputMethodChanged) == 0x000058, "Wrong size on WBP_Map_Body_C_OnInputMethodChanged");
static_assert(offsetof(WBP_Map_Body_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_Map_Body_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnInputMethodChanged, K2Node_MakeStruct_Anchors) == 0x000008, "Member 'WBP_Map_Body_C_OnInputMethodChanged::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnInputMethodChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'WBP_Map_Body_C_OnInputMethodChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnInputMethodChanged, K2Node_MakeStruct_Anchors_1) == 0x000030, "Member 'WBP_Map_Body_C_OnInputMethodChanged::K2Node_MakeStruct_Anchors_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnInputMethodChanged, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'WBP_Map_Body_C_OnInputMethodChanged::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnKeyUp
// 0x0210 (0x0210 - 0x0000)
struct WBP_Map_Body_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0138(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x0157(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0158(0x00B8)()
};
static_assert(alignof(WBP_Map_Body_C_OnKeyUp) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnKeyUp");
static_assert(sizeof(WBP_Map_Body_C_OnKeyUp) == 0x000210, "Wrong size on WBP_Map_Body_C_OnKeyUp");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, InKeyEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x000138, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000150, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000151, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x000152, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_3) == 0x000153, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_4) == 0x000154, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_5) == 0x000155, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_6) == 0x000156, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_7) == 0x000157, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000158, "Member 'WBP_Map_Body_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnLoaded_D35D903A4572C11561B776A766C7733D
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D");
static_assert(sizeof(WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D) == 0x000008, "Wrong size on WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D");
static_assert(offsetof(WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D, Loaded) == 0x000000, "Member 'WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D::Loaded' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseButtonDown
// 0x0268 (0x0268 - 0x0000)
struct WBP_Map_Body_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0190(0x0018)(HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01A8(0x00B8)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseButtonDown");
static_assert(sizeof(WBP_Map_Body_C_OnMouseButtonDown) == 0x000268, "Wrong size on WBP_Map_Body_C_OnMouseButtonDown");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_Map_Body_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000190, "Member 'WBP_Map_Body_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x0001A8, "Member 'WBP_Map_Body_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'WBP_Map_Body_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000261, "Member 'WBP_Map_Body_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonDown, CallFunc_BooleanOR_ReturnValue) == 0x000262, "Member 'WBP_Map_Body_C_OnMouseButtonDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseButtonUp
// 0x0248 (0x0248 - 0x0000)
struct WBP_Map_Body_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0190(0x00B8)()
};
static_assert(alignof(WBP_Map_Body_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseButtonUp");
static_assert(sizeof(WBP_Map_Body_C_OnMouseButtonUp) == 0x000248, "Wrong size on WBP_Map_Body_C_OnMouseButtonUp");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'WBP_Map_Body_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'WBP_Map_Body_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseEnter
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_Map_Body_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Map_Body_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseEnter");
static_assert(sizeof(WBP_Map_Body_C_OnMouseEnter) == 0x0000D8, "Wrong size on WBP_Map_Body_C_OnMouseEnter");
static_assert(offsetof(WBP_Map_Body_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseLeave
// 0x0098 (0x0098 - 0x0000)
struct WBP_Map_Body_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Map_Body_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseLeave");
static_assert(sizeof(WBP_Map_Body_C_OnMouseLeave) == 0x000098, "Wrong size on WBP_Map_Body_C_OnMouseLeave");
static_assert(offsetof(WBP_Map_Body_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseMove
// 0x0280 (0x0280 - 0x0000)
struct WBP_Map_Body_C_OnMouseMove final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FVector2D                              CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x01A0(0x00B8)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0260(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0270(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnMouseMove) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseMove");
static_assert(sizeof(WBP_Map_Body_C_OnMouseMove) == 0x000280, "Wrong size on WBP_Map_Body_C_OnMouseMove");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseMove::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, MouseEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnMouseMove::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, ReturnValue) == 0x0000D8, "Member 'WBP_Map_Body_C_OnMouseMove::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, CallFunc_PointerEvent_GetCursorDelta_ReturnValue) == 0x000190, "Member 'WBP_Map_Body_C_OnMouseMove::CallFunc_PointerEvent_GetCursorDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, CallFunc_Unhandled_ReturnValue) == 0x0001A0, "Member 'WBP_Map_Body_C_OnMouseMove::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000258, "Member 'WBP_Map_Body_C_OnMouseMove::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, CallFunc_MakeVector2D_ReturnValue) == 0x000260, "Member 'WBP_Map_Body_C_OnMouseMove::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseMove, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000270, "Member 'WBP_Map_Body_C_OnMouseMove::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseWheel
// 0x0260 (0x0260 - 0x0000)
struct WBP_Map_Body_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0198(0x00B8)()
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnMouseWheel) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnMouseWheel");
static_assert(sizeof(WBP_Map_Body_C_OnMouseWheel) == 0x000260, "Wrong size on WBP_Map_Body_C_OnMouseWheel");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, MouseEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, ReturnValue) == 0x0000D8, "Member 'WBP_Map_Body_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000190, "Member 'WBP_Map_Body_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, CallFunc_Unhandled_ReturnValue) == 0x000198, "Member 'WBP_Map_Body_C_OnMouseWheel::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000250, "Member 'WBP_Map_Body_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnMouseWheel, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'WBP_Map_Body_C_OnMouseWheel::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnPreviewKeyDown
// 0x0210 (0x0210 - 0x0000)
struct WBP_Map_Body_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0080(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0138(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x0157(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0158(0x00B8)()
};
static_assert(alignof(WBP_Map_Body_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnPreviewKeyDown");
static_assert(sizeof(WBP_Map_Body_C_OnPreviewKeyDown) == 0x000210, "Wrong size on WBP_Map_Body_C_OnPreviewKeyDown");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, InKeyEvent) == 0x000040, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x000138, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000150, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000151, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x000152, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_3) == 0x000153, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_4) == 0x000154, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_5) == 0x000155, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_6) == 0x000156, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_7) == 0x000157, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnPreviewKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000158, "Member 'WBP_Map_Body_C_OnPreviewKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnUnhoveredAnyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature");
static_assert(sizeof(WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature) == 0x000008, "Wrong size on WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature::IconWidget' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.OnUnhoveredAnyIcon_Internal
// 0x0058 (0x0058 - 0x0000)
struct WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      IconWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconFTTower_C*                 K2Node_DynamicCast_AsWBP_Map_Icon_FTTower;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_WorldMap_Icon_Respawn_C*           K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn;   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconCamp_C*                    K2Node_DynamicCast_AsWBP_Map_Icon_Camp;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconTower_C*                   K2Node_DynamicCast_AsWBP_Map_Icon_Tower;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconBoss_C*                    K2Node_DynamicCast_AsWBP_Map_Icon_Boss;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal) == 0x000008, "Wrong alignment on WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal");
static_assert(sizeof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal) == 0x000058, "Wrong size on WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, IconWidget) == 0x000000, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::IconWidget' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_FTTower) == 0x000008, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_FTTower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000011, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn) == 0x000018, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_AsWBP_World_Map_Icon_Respawn' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Camp) == 0x000028, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_bSuccess_2) == 0x000030, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Tower) == 0x000038, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Tower' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_bSuccess_3) == 0x000040, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_AsWBP_Map_Icon_Boss) == 0x000048, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_AsWBP_Map_Icon_Boss' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal, K2Node_DynamicCast_bSuccess_4) == 0x000050, "Member 'WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.RequestDismantal
// 0x0038 (0x0038 - 0x0000)
struct WBP_Map_Body_C_RequestDismantal final
{
public:
	class UPalBaseCampManager*                    CallFunc_GetBaseCampManager_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconCamp_C*                    K2Node_DynamicCast_AsWBP_Map_Icon_Camp;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampModel*                      CallFunc_TryGetModel_OutModel;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetModel_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetOwnerMapObjectInstanceId_ReturnValue;  // 0x0024(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_RequestDismantal) == 0x000008, "Wrong alignment on WBP_Map_Body_C_RequestDismantal");
static_assert(sizeof(WBP_Map_Body_C_RequestDismantal) == 0x000038, "Wrong size on WBP_Map_Body_C_RequestDismantal");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, CallFunc_GetBaseCampManager_ReturnValue) == 0x000000, "Member 'WBP_Map_Body_C_RequestDismantal::CallFunc_GetBaseCampManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, K2Node_DynamicCast_AsWBP_Map_Icon_Camp) == 0x000008, "Member 'WBP_Map_Body_C_RequestDismantal::K2Node_DynamicCast_AsWBP_Map_Icon_Camp' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_Map_Body_C_RequestDismantal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_Map_Body_C_RequestDismantal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, CallFunc_TryGetModel_OutModel) == 0x000018, "Member 'WBP_Map_Body_C_RequestDismantal::CallFunc_TryGetModel_OutModel' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, CallFunc_TryGetModel_ReturnValue) == 0x000020, "Member 'WBP_Map_Body_C_RequestDismantal::CallFunc_TryGetModel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_RequestDismantal, CallFunc_GetOwnerMapObjectInstanceId_ReturnValue) == 0x000024, "Member 'WBP_Map_Body_C_RequestDismantal::CallFunc_GetOwnerMapObjectInstanceId_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.ScrollMapImage_Internal
// 0x0070 (0x0070 - 0x0000)
struct WBP_Map_Body_C_ScrollMapImage_Internal final
{
public:
	struct FVector2D                              ScrollOffset;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalcMapImagePosition_Position;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcMapImagePosition_Position_1;          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_ScrollMapImage_Internal) == 0x000008, "Wrong alignment on WBP_Map_Body_C_ScrollMapImage_Internal");
static_assert(sizeof(WBP_Map_Body_C_ScrollMapImage_Internal) == 0x000070, "Wrong size on WBP_Map_Body_C_ScrollMapImage_Internal");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, ScrollOffset) == 0x000000, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::ScrollOffset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_CalcMapImagePosition_Position) == 0x000018, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_CalcMapImagePosition_Position' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000050, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_ScrollMapImage_Internal, CallFunc_CalcMapImagePosition_Position_1) == 0x000060, "Member 'WBP_Map_Body_C_ScrollMapImage_Internal::CallFunc_CalcMapImagePosition_Position_1' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Setup
// 0x0060 (0x0060 - 0x0000)
struct WBP_Map_Body_C_Setup final
{
public:
	struct FVector                                MinLandScapePosition_0;                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MaxLandScapePosition_0;                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Setup) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Setup");
static_assert(sizeof(WBP_Map_Body_C_Setup) == 0x000060, "Wrong size on WBP_Map_Body_C_Setup");
static_assert(offsetof(WBP_Map_Body_C_Setup, MinLandScapePosition_0) == 0x000000, "Member 'WBP_Map_Body_C_Setup::MinLandScapePosition_0' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup, MaxLandScapePosition_0) == 0x000018, "Member 'WBP_Map_Body_C_Setup::MaxLandScapePosition_0' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_Setup::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_Setup::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000048, "Member 'WBP_Map_Body_C_Setup::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_Setup::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Setup Player Icon
// 0x0120 (0x0120 - 0x0000)
struct WBP_Map_Body_C_Setup_Player_Icon final
{
public:
	TArray<class UWBP_Map_IconPlayer_C*>          PlayerIcons;                                       // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetPlayerState_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        K2Node_DynamicCast_AsPal_Player_State;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAliveOrDyingFriendPlayers_ByUId_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0xF];                                       // 0x0031(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPlayerInfoForMap                   CallFunc_GetPlayerInfoForMap_ReturnValue;          // 0x0040(0x0070)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayerStates_ReturnValue;           // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconPlayer_C*>          CallFunc_Map_Keys_Keys;                            // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconPlayer_C*>          CallFunc_Map_Keys_Keys_1;                          // 0x00E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_Map_IconPlayer_C*                  CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_IconPlayer_C*                  CallFunc_Create_ReturnValue;                       // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Add_Icon_Added;                           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Setup_Player_Icon) == 0x000010, "Wrong alignment on WBP_Map_Body_C_Setup_Player_Icon");
static_assert(sizeof(WBP_Map_Body_C_Setup_Player_Icon) == 0x000120, "Wrong size on WBP_Map_Body_C_Setup_Player_Icon");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, PlayerIcons) == 0x000000, "Member 'WBP_Map_Body_C_Setup_Player_Icon::PlayerIcons' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, Temp_int_Variable) == 0x000010, "Member 'WBP_Map_Body_C_Setup_Player_Icon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_GetPlayerState_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, K2Node_DynamicCast_AsPal_Player_State) == 0x000020, "Member 'WBP_Map_Body_C_Setup_Player_Icon::K2Node_DynamicCast_AsPal_Player_State' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Map_Body_C_Setup_Player_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_IsAliveOrDyingFriendPlayers_ByUId_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_IsAliveOrDyingFriendPlayers_ByUId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_GetPlayerInfoForMap_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_GetPlayerInfoForMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, Temp_int_Loop_Counter_Variable) == 0x0000B0, "Member 'WBP_Map_Body_C_Setup_Player_Icon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, Temp_int_Array_Index_Variable) == 0x0000B4, "Member 'WBP_Map_Body_C_Setup_Player_Icon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_GetNumPlayerStates_ReturnValue) == 0x0000BC, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_GetNumPlayerStates_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000C0, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Map_Keys_Keys) == 0x0000C8, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D8, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Map_Keys_Keys_1) == 0x0000E0, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000100, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000108, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Create_ReturnValue) == 0x000110, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000118, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_Add_Icon_Added) == 0x000119, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_Add_Icon_Added' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Setup_Player_Icon, CallFunc_BooleanOR_ReturnValue) == 0x00011A, "Member 'WBP_Map_Body_C_Setup_Player_Icon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Map_Body_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Tick) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Tick");
static_assert(sizeof(WBP_Map_Body_C_Tick) == 0x000048, "Wrong size on WBP_Map_Body_C_Tick");
static_assert(offsetof(WBP_Map_Body_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Map_Body_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Map_Body_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Update Icon Visibility
// 0x0078 (0x0078 - 0x0000)
struct WBP_Map_Body_C_Update_Icon_Visibility final
{
public:
	class UWBP_WorldMap_IconBase_NoDesign_C*      Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsHiding_Hiding;                       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreMask_IsIgnore;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_ReadRenderTargetPixel_ReturnValue;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Update_Icon_Visibility) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Update_Icon_Visibility");
static_assert(sizeof(WBP_Map_Body_C_Update_Icon_Visibility) == 0x000078, "Wrong size on WBP_Map_Body_C_Update_Icon_Visibility");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, Icon) == 0x000000, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, Visible) == 0x000008, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::Visible' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GetIsHiding_Hiding) == 0x000009, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GetIsHiding_Hiding' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_IsIgnoreMask_IsIgnore) == 0x00000A, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_IsIgnoreMask_IsIgnore' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GetPosition_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GetParent_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_BreakVector2D_X) == 0x000030, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000050, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000060, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_FTrunc_ReturnValue) == 0x000068, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_FTrunc_ReturnValue_1) == 0x00006C, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_ReadRenderTargetPixel_ReturnValue) == 0x000070, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_ReadRenderTargetPixel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Icon_Visibility, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x000074, "Member 'WBP_Map_Body_C_Update_Icon_Visibility::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Update Map Icon
// 0x0020 (0x0020 - 0x0000)
struct WBP_Map_Body_C_Update_Map_Icon final
{
public:
	class UWidget*                                Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Update_Map_Icon) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Update_Map_Icon");
static_assert(sizeof(WBP_Map_Body_C_Update_Map_Icon) == 0x000020, "Wrong size on WBP_Map_Body_C_Update_Map_Icon");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Icon, Icon) == 0x000000, "Member 'WBP_Map_Body_C_Update_Map_Icon::Icon' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Icon, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_Update_Map_Icon::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Icon, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_Update_Map_Icon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Update Map Zoom
// 0x0118 (0x0118 - 0x0000)
struct WBP_Map_Body_C_Update_Map_Zoom final
{
public:
	double                                        AddZoomValue;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaTime;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdated;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              NewLocalVar;                                       // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetCursorScrollOffset_Offset;             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetCursorScrollOffset_Offset_1;           // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Update_Map_Zoom) == 0x000008, "Wrong alignment on WBP_Map_Body_C_Update_Map_Zoom");
static_assert(sizeof(WBP_Map_Body_C_Update_Map_Zoom) == 0x000118, "Wrong size on WBP_Map_Body_C_Update_Map_Zoom");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, AddZoomValue) == 0x000000, "Member 'WBP_Map_Body_C_Update_Map_Zoom::AddZoomValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, DeltaTime) == 0x000008, "Member 'WBP_Map_Body_C_Update_Map_Zoom::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, IsUpdated) == 0x000010, "Member 'WBP_Map_Body_C_Update_Map_Zoom::IsUpdated' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, NewLocalVar) == 0x000018, "Member 'WBP_Map_Body_C_Update_Map_Zoom::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, Temp_struct_Variable) == 0x000028, "Member 'WBP_Map_Body_C_Update_Map_Zoom::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_GetCursorScrollOffset_Offset) == 0x000050, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_GetCursorScrollOffset_Offset' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, Temp_struct_Variable_1) == 0x000060, "Member 'WBP_Map_Body_C_Update_Map_Zoom::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, Temp_bool_Variable) == 0x000070, "Member 'WBP_Map_Body_C_Update_Map_Zoom::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_GetCursorScrollOffset_Offset_1) == 0x000078, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_GetCursorScrollOffset_Offset_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_X) == 0x000088, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_Y) == 0x000090, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000098, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_X_1) == 0x0000A8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_Y_1) == 0x0000B0, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_X_2) == 0x0000B8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_BreakVector2D_Y_2) == 0x0000C0, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_FMax_ReturnValue) == 0x0000C8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_FMin_ReturnValue) == 0x0000D0, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000D8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x0000F0, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000F1, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, K2Node_Select_Default) == 0x0000F8, "Member 'WBP_Map_Body_C_Update_Map_Zoom::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Map_Zoom, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000108, "Member 'WBP_Map_Body_C_Update_Map_Zoom::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.Update Player Icon
// 0x0110 (0x0110 - 0x0000)
struct WBP_Map_Body_C_Update_Player_Icon final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_Map_IconPlayer_C*>          CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Map_IconPlayer_C*                  CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0xF];                                       // 0x0041(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPlayerInfoForMap                   CallFunc_GetPlayerInfoForMap_ReturnValue;          // 0x0050(0x0070)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_Update_Player_Icon) == 0x000010, "Wrong alignment on WBP_Map_Body_C_Update_Player_Icon");
static_assert(sizeof(WBP_Map_Body_C_Update_Player_Icon) == 0x000110, "Wrong size on WBP_Map_Body_C_Update_Player_Icon");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_Map_Body_C_Update_Player_Icon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_Map_Body_C_Update_Player_Icon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_GetPlayerInfoForMap_ReturnValue) == 0x000050, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_GetPlayerInfoForMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_BreakTransform_Location) == 0x0000C8, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_BreakTransform_Rotation) == 0x0000E0, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_Update_Player_Icon, CallFunc_BreakTransform_Scale) == 0x0000F8, "Member 'WBP_Map_Body_C_Update_Player_Icon::CallFunc_BreakTransform_Scale' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.UpdateCursorTransform
// 0x0088 (0x0088 - 0x0000)
struct WBP_Map_Body_C_UpdateCursorTransform final
{
public:
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0000(0x0040)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_UpdateCursorTransform) == 0x000008, "Wrong alignment on WBP_Map_Body_C_UpdateCursorTransform");
static_assert(sizeof(WBP_Map_Body_C_UpdateCursorTransform) == 0x000088, "Wrong size on WBP_Map_Body_C_UpdateCursorTransform");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_GetCachedGeometry_ReturnValue) == 0x000000, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_GetMousePositionOnViewport_ReturnValue) == 0x000040, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_GetMousePositionOnViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_LocalToViewport_PixelPosition) == 0x000050, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_LocalToViewport_ViewportPosition) == 0x000060, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000070, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateCursorTransform, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_UpdateCursorTransform::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.UpdateMapIcons
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Map_Body_C_UpdateMapIcons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0038(0x0040)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_UpdateMapIcons) == 0x000008, "Wrong alignment on WBP_Map_Body_C_UpdateMapIcons");
static_assert(sizeof(WBP_Map_Body_C_UpdateMapIcons) == 0x0000C0, "Wrong size on WBP_Map_Body_C_UpdateMapIcons");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_Map_Body_C_UpdateMapIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_Map_Body_C_UpdateMapIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'WBP_Map_Body_C_UpdateMapIcons::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, Temp_int_Loop_Counter_Variable_1) == 0x00002C, "Member 'WBP_Map_Body_C_UpdateMapIcons::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_GetCachedGeometry_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_GetAllChildren_ReturnValue_1) == 0x000098, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapIcons, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B8, "Member 'WBP_Map_Body_C_UpdateMapIcons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.UpdateMapTransform
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_Map_Body_C_UpdateMapTransform final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue_1;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Update_Map_Zoom_IsUpdated;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateScrollOffset_IsUpdated;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Atan2_ReturnValue;                        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Cos_ReturnValue;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sin_ReturnValue;                          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_UpdateMapTransform) == 0x000008, "Wrong alignment on WBP_Map_Body_C_UpdateMapTransform");
static_assert(sizeof(WBP_Map_Body_C_UpdateMapTransform) == 0x0000B8, "Wrong size on WBP_Map_Body_C_UpdateMapTransform");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, DeltaTime) == 0x000000, "Member 'WBP_Map_Body_C_UpdateMapTransform::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Abs_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Abs_ReturnValue_1) == 0x000020, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_MakeVector2D_ReturnValue_1) == 0x000028, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000048, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_SelectFloat_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Update_Map_Zoom_IsUpdated) == 0x000060, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Update_Map_Zoom_IsUpdated' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_UpdateScrollOffset_IsUpdated) == 0x000061, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_UpdateScrollOffset_IsUpdated' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_BooleanOR_ReturnValue) == 0x000062, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000063, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_EqualEqual_DoubleDouble_ReturnValue_2) == 0x000064, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_EqualEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Atan2_ReturnValue) == 0x000068, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Atan2_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_BooleanAND_ReturnValue) == 0x000070, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Cos_ReturnValue) == 0x000078, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Cos_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Sin_ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Sin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_MakeVector2D_ReturnValue_2) == 0x000088, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000098, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateMapTransform, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x0000A8, "Member 'WBP_Map_Body_C_UpdateMapTransform::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");

// Function WBP_Map_Body.WBP_Map_Body_C.UpdateScrollOffset
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_Map_Body_C_UpdateScrollOffset final
{
public:
	bool                                          IsUpdated;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Map_Body_C_UpdateScrollOffset) == 0x000008, "Wrong alignment on WBP_Map_Body_C_UpdateScrollOffset");
static_assert(sizeof(WBP_Map_Body_C_UpdateScrollOffset) == 0x0000C8, "Wrong size on WBP_Map_Body_C_UpdateScrollOffset");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, IsUpdated) == 0x000000, "Member 'WBP_Map_Body_C_UpdateScrollOffset::IsUpdated' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_GetSize_ReturnValue) == 0x000018, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000028, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000039, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_IsValid_ReturnValue) == 0x00003A, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_BooleanAND_ReturnValue) == 0x00003B, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_BooleanAND_ReturnValue_1) == 0x00003C, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000040, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_GetPosition_ReturnValue) == 0x000048, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000058, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000068, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_GetPosition_ReturnValue_1) == 0x000070, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_MakeVector2D_ReturnValue) == 0x000080, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue) == 0x000090, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x000098, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x0000A8, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Map_Body_C_UpdateScrollOffset, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x0000B8, "Member 'WBP_Map_Body_C_UpdateScrollOffset::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

