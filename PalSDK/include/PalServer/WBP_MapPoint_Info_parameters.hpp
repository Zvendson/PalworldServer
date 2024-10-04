#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.AdjustSide
// 0x0040 (0x0040 - 0x0000)
struct WBP_MapPoint_Info_C_AdjustSide final
{
public:
	struct FGeometry                              TargetGeometry;                                    // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MapPoint_Info_C_AdjustSide) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_C_AdjustSide");
static_assert(sizeof(WBP_MapPoint_Info_C_AdjustSide) == 0x000040, "Wrong size on WBP_MapPoint_Info_C_AdjustSide");
static_assert(offsetof(WBP_MapPoint_Info_C_AdjustSide, TargetGeometry) == 0x000000, "Member 'WBP_MapPoint_Info_C_AdjustSide::TargetGeometry' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.ExecuteUbergraph_WBP_MapPoint_Info
// 0x0280 (0x0280 - 0x0000)
struct WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldDisplay;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsDefeated;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_characterId;                    // 0x006C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Level;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0078(0x0018)()
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedCharacterName_OutText;        // 0x0098(0x0018)()
	class APalBossTower*                          K2Node_CustomEvent_BossTower;                      // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanTeleport_2;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetBossBattleRowName_ReturnValue;         // 0x00C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00C8(0x0018)()
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x00E0(0x0010)(NoDestructor)
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00F8(0x0018)()
	bool                                          CallFunc_GetRecordData_Bool_ReturnValue;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanTeleport_1;                  // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_CustomEvent_TargetGeometry;                 // 0x0128(0x0040)(IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0168(0x0018)()
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x01E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_4;                           // 0x0228(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_5;                           // 0x0238(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_FTID;                           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanTeleport;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0258(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info");
static_assert(sizeof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info) == 0x000280, "Wrong size on WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, EntryPoint) == 0x000000, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable) == 0x000004, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable) == 0x000005, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_struct_Variable) == 0x000008, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_2) == 0x000028, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_struct_Variable_2) == 0x000030, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_struct_Variable_3) == 0x000040, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_3) == 0x000050, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_2) == 0x000051, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_3) == 0x000052, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_4) == 0x000053, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_4) == 0x000054, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_5) == 0x000055, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_5) == 0x000056, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_6) == 0x000057, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_7) == 0x000058, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_ShouldDisplay) == 0x000059, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_ShouldDisplay' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_IsDefeated) == 0x000068, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_IsDefeated' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_characterId) == 0x00006C, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_characterId' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_Level) == 0x000074, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000090, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLocalizedCharacterName_OutText) == 0x000098, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLocalizedCharacterName_OutText' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_BossTower) == 0x0000B0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_BossTower' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_CanTeleport_2) == 0x0000B8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_CanTeleport_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default) == 0x0000B9, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLevel_ReturnValue) == 0x0000BC, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetBossBattleRowName_ReturnValue) == 0x0000C0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetBossBattleRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000C8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_MakeStruct_DataTableRowHandle) == 0x0000E0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLocalRecordData_ReturnValue) == 0x0000F0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000F8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetRecordData_Bool_ReturnValue) == 0x000110, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetRecordData_Bool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_1) == 0x000111, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_8) == 0x000112, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_CanTeleport_1) == 0x000113, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_CanTeleport_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Map_Find_Value) == 0x000118, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Map_Find_ReturnValue) == 0x000120, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_2) == 0x000121, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_TargetGeometry) == 0x000128, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_TargetGeometry' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000168, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_LocalToViewport_PixelPosition) == 0x000180, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_LocalToViewport_ViewportPosition) == 0x000190, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_BreakVector2D_X) == 0x0001A0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_BreakVector2D_Y) == 0x0001A8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetViewportSize_ReturnValue) == 0x0001B0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetViewportScale_ReturnValue) == 0x0001C0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_byte_Variable_9) == 0x0001C4, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_MakeVector2D_ReturnValue) == 0x0001D0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, Temp_bool_Variable_6) == 0x0001E0, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x0001E8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_BreakVector2D_X_1) == 0x0001F8, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_BreakVector2D_Y_1) == 0x000200, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_3) == 0x000208, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000210, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000218, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000220, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_4) == 0x000228, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_5) == 0x000238, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_FTID) == 0x000248, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_FTID' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_CustomEvent_CanTeleport) == 0x000250, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_CustomEvent_CanTeleport' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_GetLocalizedText_ReturnValue) == 0x000258, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, K2Node_Select_Default_6) == 0x000270, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000278, "Member 'WBP_MapPoint_Info_C_ExecuteUbergraph_WBP_MapPoint_Info::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetBossInfo
// 0x0010 (0x0010 - 0x0000)
struct WBP_MapPoint_Info_C_SetBossInfo final
{
public:
	bool                                          IsDefeated;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CharacterID;                                       // 0x0004(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_SetBossInfo) == 0x000004, "Wrong alignment on WBP_MapPoint_Info_C_SetBossInfo");
static_assert(sizeof(WBP_MapPoint_Info_C_SetBossInfo) == 0x000010, "Wrong size on WBP_MapPoint_Info_C_SetBossInfo");
static_assert(offsetof(WBP_MapPoint_Info_C_SetBossInfo, IsDefeated) == 0x000000, "Member 'WBP_MapPoint_Info_C_SetBossInfo::IsDefeated' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_SetBossInfo, CharacterID) == 0x000004, "Member 'WBP_MapPoint_Info_C_SetBossInfo::CharacterID' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_SetBossInfo, Level) == 0x00000C, "Member 'WBP_MapPoint_Info_C_SetBossInfo::Level' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetCampInfo
// 0x0001 (0x0001 - 0x0000)
struct WBP_MapPoint_Info_C_SetCampInfo final
{
public:
	bool                                          CanTeleport;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_SetCampInfo) == 0x000001, "Wrong alignment on WBP_MapPoint_Info_C_SetCampInfo");
static_assert(sizeof(WBP_MapPoint_Info_C_SetCampInfo) == 0x000001, "Wrong size on WBP_MapPoint_Info_C_SetCampInfo");
static_assert(offsetof(WBP_MapPoint_Info_C_SetCampInfo, CanTeleport) == 0x000000, "Member 'WBP_MapPoint_Info_C_SetCampInfo::CanTeleport' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetFTInfo
// 0x000C (0x000C - 0x0000)
struct WBP_MapPoint_Info_C_SetFTInfo final
{
public:
	class FName                                   FTID;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTeleport;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_SetFTInfo) == 0x000004, "Wrong alignment on WBP_MapPoint_Info_C_SetFTInfo");
static_assert(sizeof(WBP_MapPoint_Info_C_SetFTInfo) == 0x00000C, "Wrong size on WBP_MapPoint_Info_C_SetFTInfo");
static_assert(offsetof(WBP_MapPoint_Info_C_SetFTInfo, FTID) == 0x000000, "Member 'WBP_MapPoint_Info_C_SetFTInfo::FTID' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_SetFTInfo, CanTeleport) == 0x000008, "Member 'WBP_MapPoint_Info_C_SetFTInfo::CanTeleport' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.SetTowerBossInfo
// 0x0010 (0x0010 - 0x0000)
struct WBP_MapPoint_Info_C_SetTowerBossInfo final
{
public:
	class APalBossTower*                          BossTower;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTeleport;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_SetTowerBossInfo) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_C_SetTowerBossInfo");
static_assert(sizeof(WBP_MapPoint_Info_C_SetTowerBossInfo) == 0x000010, "Wrong size on WBP_MapPoint_Info_C_SetTowerBossInfo");
static_assert(offsetof(WBP_MapPoint_Info_C_SetTowerBossInfo, BossTower) == 0x000000, "Member 'WBP_MapPoint_Info_C_SetTowerBossInfo::BossTower' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_C_SetTowerBossInfo, CanTeleport) == 0x000008, "Member 'WBP_MapPoint_Info_C_SetTowerBossInfo::CanTeleport' has a wrong offset!");

// Function WBP_MapPoint_Info.WBP_MapPoint_Info_C.ToggleDisplay
// 0x0001 (0x0001 - 0x0000)
struct WBP_MapPoint_Info_C_ToggleDisplay final
{
public:
	bool                                          ShouldDisplay;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_C_ToggleDisplay) == 0x000001, "Wrong alignment on WBP_MapPoint_Info_C_ToggleDisplay");
static_assert(sizeof(WBP_MapPoint_Info_C_ToggleDisplay) == 0x000001, "Wrong size on WBP_MapPoint_Info_C_ToggleDisplay");
static_assert(offsetof(WBP_MapPoint_Info_C_ToggleDisplay, ShouldDisplay) == 0x000000, "Member 'WBP_MapPoint_Info_C_ToggleDisplay::ShouldDisplay' has a wrong offset!");

}

