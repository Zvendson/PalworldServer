#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.AsyncLoadAndCreateWidget
// 0x0030 (0x0030 - 0x0000)
struct BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget final
{
public:
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget");
static_assert(sizeof(BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget) == 0x000030, "Wrong size on BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget");
static_assert(offsetof(BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget, WidgetClass) == 0x000000, "Member 'BP_PalHUD_InGame_C_AsyncLoadAndCreateWidget::WidgetClass' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0038 (0x0038 - 0x0000)
struct BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	class APalPlayerCharacter*                    PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDyingEndInfo                       DyingEndInfo;                                      // 0x0008(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000038, "Wrong size on BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0, PlayerCharacter) == 0x000000, "Member 'BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0, DyingEndInfo) == 0x000008, "Member 'BP_PalHUD_InGame_C_CREATEDELEGATE_PROXYFUNCTION_0::DyingEndInfo' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.DisplayHUD_Respawn
// 0x0048 (0x0048 - 0x0000)
struct BP_PalHUD_InGame_C_DisplayHUD_Respawn final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUserWidget*                         CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_DisplayHUD_Respawn) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_DisplayHUD_Respawn");
static_assert(sizeof(BP_PalHUD_InGame_C_DisplayHUD_Respawn) == 0x000048, "Wrong size on BP_PalHUD_InGame_C_DisplayHUD_Respawn");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000031, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Map_Find_Value) == 0x000038, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_DisplayHUD_Respawn, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'BP_PalHUD_InGame_C_DisplayHUD_Respawn::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ExecuteUbergraph_BP_PalHUD_InGame
// 0x01C8 (0x01C8 - 0x0000)
struct BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_PushWidgetStackableUI_ReturnValue;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_User_Widget;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsPal_User_Widget_1;       // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUserWidget*                         CallFunc_CreateHUDWidget_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalHUDWidgetPriority                         Temp_byte_Variable;                                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x0090(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A6[0x2];                                       // 0x00A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_widgetClass;                    // 0x00B8(0x0030)(HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_CustomEvent_PlayerCharacter;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDyingEndInfo                       K2Node_CustomEvent_DyingEndInfo;                   // 0x0100(0x0030)()
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInArenaByCharacter_ReturnValue;         // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x013C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x014C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalHUDWidgetPriority                         CallFunc_Map_Find_Value;                           // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalHUDWidgetPriority                         K2Node_Select_Default;                             // 0x015E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F[0x1];                                      // 0x015F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_CustomEvent_Player;                         // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUserWidget*                         CallFunc_CreateHUDWidget_ReturnValue_1;            // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue_1;              // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalPlayerCharacter* PlayerCharacter, struct FPalDyingEndInfo& DyingEndInfo)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0188(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x3];                                      // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalPlayerCharacter* Player)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeX;                                // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeY;                                // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame");
static_assert(sizeof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame) == 0x0001C8, "Wrong size on BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, EntryPoint) == 0x000000, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, Temp_class_Variable) == 0x000018, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI) == 0x000020, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_bSuccess) == 0x000028, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_Loaded_1) == 0x000030, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_PushWidgetStackableUI_ReturnValue) == 0x000038, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_PushWidgetStackableUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, Temp_class_Variable_1) == 0x000048, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_AsPal_User_Widget) == 0x000050, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_AsPal_User_Widget' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_bSuccess_1) == 0x000058, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_Loaded) == 0x000060, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, Temp_class_Variable_2) == 0x000068, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_AsPal_User_Widget_1) == 0x000070, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_AsPal_User_Widget_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_ClassDynamicCast_bSuccess_2) == 0x000078, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_CreateHUDWidget_ReturnValue) == 0x000080, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_CreateHUDWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, Temp_bool_Variable) == 0x000088, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, Temp_byte_Variable) == 0x000089, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_Loaded_2) == 0x000090, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetPlayerController_ReturnValue) == 0x000098, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_Event_DeltaSeconds) == 0x0000A0, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_Event_EndPlayReason) == 0x0000A4, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_IsValid_ReturnValue_1) == 0x0000A5, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_widgetClass) == 0x0000B8, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_widgetClass' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E8, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_PlayerCharacter) == 0x0000F8, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_DyingEndInfo) == 0x000100, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_DyingEndInfo' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetHUDService_ReturnValue) == 0x000130, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_IsInArenaByCharacter_ReturnValue) == 0x000138, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_IsInArenaByCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_Push_ReturnValue) == 0x00013C, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CreateDelegate_OutputDelegate_2) == 0x00014C, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_Map_Find_Value) == 0x00015C, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_Map_Find_ReturnValue) == 0x00015D, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_Select_Default) == 0x00015E, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CustomEvent_Player) == 0x000160, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_CreateHUDWidget_ReturnValue_1) == 0x000168, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_CreateHUDWidget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetGameSetting_ReturnValue) == 0x000170, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetHUDService_ReturnValue_1) == 0x000178, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetHUDService_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetPalmi_ReturnValue) == 0x000180, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CreateDelegate_OutputDelegate_3) == 0x000188, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_IsValid_ReturnValue_2) == 0x000198, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_GetComponentByClass_ReturnValue) == 0x0001A0, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, CallFunc_IsValid_ReturnValue_3) == 0x0001A8, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001AC, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_Event_SizeX) == 0x0001BC, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_Event_SizeX' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame, K2Node_Event_SizeY) == 0x0001C0, "Member 'BP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame::K2Node_Event_SizeY' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideHUD_ForDeath
// 0x0048 (0x0048 - 0x0000)
struct BP_PalHUD_InGame_C_HideHUD_ForDeath final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUserWidget*                         CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_HideHUD_ForDeath) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_HideHUD_ForDeath");
static_assert(sizeof(BP_PalHUD_InGame_C_HideHUD_ForDeath) == 0x000048, "Wrong size on BP_PalHUD_InGame_C_HideHUD_ForDeath");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000031, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Map_Find_Value) == 0x000038, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_HideHUD_ForDeath, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'BP_PalHUD_InGame_C_HideHUD_ForDeath::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideLiftItemDisplay
// 0x0001 (0x0001 - 0x0000)
struct BP_PalHUD_InGame_C_HideLiftItemDisplay final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_HideLiftItemDisplay) == 0x000001, "Wrong alignment on BP_PalHUD_InGame_C_HideLiftItemDisplay");
static_assert(sizeof(BP_PalHUD_InGame_C_HideLiftItemDisplay) == 0x000001, "Wrong size on BP_PalHUD_InGame_C_HideLiftItemDisplay");
static_assert(offsetof(BP_PalHUD_InGame_C_HideLiftItemDisplay, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_PalHUD_InGame_C_HideLiftItemDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnDyingEnd
// 0x0038 (0x0038 - 0x0000)
struct BP_PalHUD_InGame_C_OnDyingEnd final
{
public:
	class APalPlayerCharacter*                    PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDyingEndInfo                       DyingEndInfo;                                      // 0x0008(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnDyingEnd) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_OnDyingEnd");
static_assert(sizeof(BP_PalHUD_InGame_C_OnDyingEnd) == 0x000038, "Wrong size on BP_PalHUD_InGame_C_OnDyingEnd");
static_assert(offsetof(BP_PalHUD_InGame_C_OnDyingEnd, PlayerCharacter) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnDyingEnd::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_OnDyingEnd, DyingEndInfo) == 0x000008, "Member 'BP_PalHUD_InGame_C_OnDyingEnd::DyingEndInfo' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_01D7FBF3483366434C8293A197BFD965
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965");
static_assert(sizeof(BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965) == 0x000008, "Wrong size on BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965");
static_assert(offsetof(BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965, Loaded) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965::Loaded' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_39EEADC54AE57646EA72A79D911211B6
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6");
static_assert(sizeof(BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6) == 0x000008, "Wrong size on BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6");
static_assert(offsetof(BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6, Loaded) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6::Loaded' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_EF35A3894C280426B58FA0A0D5280930
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930");
static_assert(sizeof(BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930) == 0x000008, "Wrong size on BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930");
static_assert(offsetof(BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930, Loaded) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930::Loaded' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnRespawnPlayer
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUD_InGame_C_OnRespawnPlayer final
{
public:
	class APalPlayerCharacter*                    Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnRespawnPlayer) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_OnRespawnPlayer");
static_assert(sizeof(BP_PalHUD_InGame_C_OnRespawnPlayer) == 0x000008, "Wrong size on BP_PalHUD_InGame_C_OnRespawnPlayer");
static_assert(offsetof(BP_PalHUD_InGame_C_OnRespawnPlayer, Player) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnRespawnPlayer::Player' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnUpdateLiftSlot
// 0x0001 (0x0001 - 0x0000)
struct BP_PalHUD_InGame_C_OnUpdateLiftSlot final
{
public:
	bool                                          CallFunc_IsLift_ReturnValue;                       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_OnUpdateLiftSlot) == 0x000001, "Wrong alignment on BP_PalHUD_InGame_C_OnUpdateLiftSlot");
static_assert(sizeof(BP_PalHUD_InGame_C_OnUpdateLiftSlot) == 0x000001, "Wrong size on BP_PalHUD_InGame_C_OnUpdateLiftSlot");
static_assert(offsetof(BP_PalHUD_InGame_C_OnUpdateLiftSlot, CallFunc_IsLift_ReturnValue) == 0x000000, "Member 'BP_PalHUD_InGame_C_OnUpdateLiftSlot::CallFunc_IsLift_ReturnValue' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveDrawHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_PalHUD_InGame_C_ReceiveDrawHUD final
{
public:
	int32                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SizeY;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_ReceiveDrawHUD) == 0x000004, "Wrong alignment on BP_PalHUD_InGame_C_ReceiveDrawHUD");
static_assert(sizeof(BP_PalHUD_InGame_C_ReceiveDrawHUD) == 0x000008, "Wrong size on BP_PalHUD_InGame_C_ReceiveDrawHUD");
static_assert(offsetof(BP_PalHUD_InGame_C_ReceiveDrawHUD, SizeX) == 0x000000, "Member 'BP_PalHUD_InGame_C_ReceiveDrawHUD::SizeX' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_ReceiveDrawHUD, SizeY) == 0x000004, "Member 'BP_PalHUD_InGame_C_ReceiveDrawHUD::SizeY' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_PalHUD_InGame_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PalHUD_InGame_C_ReceiveEndPlay");
static_assert(sizeof(BP_PalHUD_InGame_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PalHUD_InGame_C_ReceiveEndPlay");
static_assert(offsetof(BP_PalHUD_InGame_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PalHUD_InGame_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalHUD_InGame_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalHUD_InGame_C_ReceiveTick");
static_assert(sizeof(BP_PalHUD_InGame_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalHUD_InGame_C_ReceiveTick");
static_assert(offsetof(BP_PalHUD_InGame_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalHUD_InGame_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.Setup Lift Item Event
// 0x0010 (0x0010 - 0x0000)
struct BP_PalHUD_InGame_C_Setup_Lift_Item_Event final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_Setup_Lift_Item_Event) == 0x000004, "Wrong alignment on BP_PalHUD_InGame_C_Setup_Lift_Item_Event");
static_assert(sizeof(BP_PalHUD_InGame_C_Setup_Lift_Item_Event) == 0x000010, "Wrong size on BP_PalHUD_InGame_C_Setup_Lift_Item_Event");
static_assert(offsetof(BP_PalHUD_InGame_C_Setup_Lift_Item_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_PalHUD_InGame_C_Setup_Lift_Item_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.SetupHUD_Internal
// 0x0018 (0x0018 - 0x0000)
struct BP_PalHUD_InGame_C_SetupHUD_Internal final
{
public:
	bool                                          CallFunc_IsEditorBuild_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalHUD_InGame_C_SetupHUD_Internal) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_SetupHUD_Internal");
static_assert(sizeof(BP_PalHUD_InGame_C_SetupHUD_Internal) == 0x000018, "Wrong size on BP_PalHUD_InGame_C_SetupHUD_Internal");
static_assert(offsetof(BP_PalHUD_InGame_C_SetupHUD_Internal, CallFunc_IsEditorBuild_ReturnValue) == 0x000000, "Member 'BP_PalHUD_InGame_C_SetupHUD_Internal::CallFunc_IsEditorBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_SetupHUD_Internal, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_PalHUD_InGame_C_SetupHUD_Internal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_SetupHUD_Internal, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_PalHUD_InGame_C_SetupHUD_Internal::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalHUD_InGame_C_SetupHUD_Internal, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalHUD_InGame_C_SetupHUD_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ShowLiftItemDisplay
// 0x0010 (0x0010 - 0x0000)
struct BP_PalHUD_InGame_C_ShowLiftItemDisplay final
{
public:
	struct FPalItemData                           LiftItemData;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
};
static_assert(alignof(BP_PalHUD_InGame_C_ShowLiftItemDisplay) == 0x000008, "Wrong alignment on BP_PalHUD_InGame_C_ShowLiftItemDisplay");
static_assert(sizeof(BP_PalHUD_InGame_C_ShowLiftItemDisplay) == 0x000010, "Wrong size on BP_PalHUD_InGame_C_ShowLiftItemDisplay");
static_assert(offsetof(BP_PalHUD_InGame_C_ShowLiftItemDisplay, LiftItemData) == 0x000000, "Member 'BP_PalHUD_InGame_C_ShowLiftItemDisplay::LiftItemData' has a wrong offset!");

}

