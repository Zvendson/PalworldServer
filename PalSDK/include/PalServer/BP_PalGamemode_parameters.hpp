#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalGamemode.BP_PalGamemode_C.BindFunction_InvaderManager
// 0x0020 (0x0020 - 0x0000)
struct BP_PalGamemode_C_BindFunction_InvaderManager final
{
public:
	TDelegate<void(const struct FTransform& Transform)> Spawn_Dummy_Nav_Invoker_Delegate;                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C_BindFunction_InvaderManager) == 0x000008, "Wrong alignment on BP_PalGamemode_C_BindFunction_InvaderManager");
static_assert(sizeof(BP_PalGamemode_C_BindFunction_InvaderManager) == 0x000020, "Wrong size on BP_PalGamemode_C_BindFunction_InvaderManager");
static_assert(offsetof(BP_PalGamemode_C_BindFunction_InvaderManager, Spawn_Dummy_Nav_Invoker_Delegate) == 0x000000, "Member 'BP_PalGamemode_C_BindFunction_InvaderManager::Spawn_Dummy_Nav_Invoker_Delegate' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_BindFunction_InvaderManager, CallFunc_GetInvaderManager_ReturnValue) == 0x000010, "Member 'BP_PalGamemode_C_BindFunction_InvaderManager::CallFunc_GetInvaderManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_BindFunction_InvaderManager, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalGamemode_C_BindFunction_InvaderManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalGamemode.BP_PalGamemode_C.ChoosePlayerStart
// 0x0058 (0x0058 - 0x0000)
struct BP_PalGamemode_C_ChoosePlayerStart final
{
public:
	class AController*                            Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_ChoosePlayerStart_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerStartPIE*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	class APlayerStartPIE*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           CallFunc_FindPlayerStartWithTag_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C_ChoosePlayerStart) == 0x000008, "Wrong alignment on BP_PalGamemode_C_ChoosePlayerStart");
static_assert(sizeof(BP_PalGamemode_C_ChoosePlayerStart) == 0x000058, "Wrong size on BP_PalGamemode_C_ChoosePlayerStart");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, Player) == 0x000000, "Member 'BP_PalGamemode_C_ChoosePlayerStart::Player' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, ReturnValue) == 0x000008, "Member 'BP_PalGamemode_C_ChoosePlayerStart::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_PalGamemode_C_ChoosePlayerStart::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_PalGamemode_C_ChoosePlayerStart::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_ChoosePlayerStart_ReturnValue) == 0x000018, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_ChoosePlayerStart_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_FindPlayerStartWithTag_ReturnValue) == 0x000040, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_FindPlayerStartWithTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ChoosePlayerStart, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_PalGamemode_C_ChoosePlayerStart::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalGamemode.BP_PalGamemode_C.ExecuteUbergraph_BP_PalGamemode
// 0x0140 (0x0140 - 0x0000)
struct BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SoundRadius;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_EmitLocation;                   // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Emitter;                        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_One_ReturnValue;                   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SoundSourceDebugModel_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SoundRadius, const struct FVector& EmitLocation, class AActor* Emitter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0100(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_InputActionEvent_Key;                       // 0x0118(0x0018)(HasGetValueTypeHash)
	TDelegate<void(const struct FTransform& Transform)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode) == 0x000010, "Wrong alignment on BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode");
static_assert(sizeof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode) == 0x000140, "Wrong size on BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, EntryPoint) == 0x000000, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_GetBattleManager_ReturnValue) == 0x000018, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_CustomEvent_SoundRadius) == 0x000020, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_CustomEvent_SoundRadius' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_CustomEvent_EmitLocation) == 0x000028, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_CustomEvent_EmitLocation' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_CustomEvent_Emitter) == 0x000040, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_CustomEvent_Emitter' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_Vector_One_ReturnValue) == 0x000048, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_Vector_One_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_Divide_IntInt_ReturnValue) == 0x000060, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x000068, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_Multiply_VectorInt_ReturnValue) == 0x000070, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000F0, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F8, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, CallFunc_GetPlayerController_ReturnValue) == 0x000110, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_InputActionEvent_Key) == 0x000118, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_InputActionEvent_Key' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode, K2Node_CreateDelegate_OutputDelegate_1) == 0x000130, "Member 'BP_PalGamemode_C_ExecuteUbergraph_BP_PalGamemode::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_PalGamemode.BP_PalGamemode_C.InpActEvt_DebugWindow_K2Node_InputActionEvent_0
// 0x0018 (0x0018 - 0x0000)
struct BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0 final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0) == 0x000008, "Wrong alignment on BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0");
static_assert(sizeof(BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0) == 0x000018, "Wrong size on BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0");
static_assert(offsetof(BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0, Key) == 0x000000, "Member 'BP_PalGamemode_C_InpActEvt_DebugWindow_K2Node_InputActionEvent_0::Key' has a wrong offset!");

// Function BP_PalGamemode.BP_PalGamemode_C.SpawmDummyNavInvoker
// 0x0080 (0x0080 - 0x0000)
struct BP_PalGamemode_C_SpawmDummyNavInvoker final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ReturnValue;                                       // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DummyNavigationInvoker_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C_SpawmDummyNavInvoker) == 0x000010, "Wrong alignment on BP_PalGamemode_C_SpawmDummyNavInvoker");
static_assert(sizeof(BP_PalGamemode_C_SpawmDummyNavInvoker) == 0x000080, "Wrong size on BP_PalGamemode_C_SpawmDummyNavInvoker");
static_assert(offsetof(BP_PalGamemode_C_SpawmDummyNavInvoker, Transform) == 0x000000, "Member 'BP_PalGamemode_C_SpawmDummyNavInvoker::Transform' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_SpawmDummyNavInvoker, ReturnValue) == 0x000060, "Member 'BP_PalGamemode_C_SpawmDummyNavInvoker::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_SpawmDummyNavInvoker, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'BP_PalGamemode_C_SpawmDummyNavInvoker::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C_SpawmDummyNavInvoker, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_PalGamemode_C_SpawmDummyNavInvoker::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_PalGamemode.BP_PalGamemode_C.カスタムイベント_0
// 0x0028 (0x0028 - 0x0000)
struct BP_PalGamemode_C__________________________0 final
{
public:
	int32                                         SoundRadius;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                EmitLocation;                                      // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Emitter;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalGamemode_C__________________________0) == 0x000008, "Wrong alignment on BP_PalGamemode_C__________________________0");
static_assert(sizeof(BP_PalGamemode_C__________________________0) == 0x000028, "Wrong size on BP_PalGamemode_C__________________________0");
static_assert(offsetof(BP_PalGamemode_C__________________________0, SoundRadius) == 0x000000, "Member 'BP_PalGamemode_C__________________________0::SoundRadius' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C__________________________0, EmitLocation) == 0x000008, "Member 'BP_PalGamemode_C__________________________0::EmitLocation' has a wrong offset!");
static_assert(offsetof(BP_PalGamemode_C__________________________0, Emitter) == 0x000020, "Member 'BP_PalGamemode_C__________________________0::Emitter' has a wrong offset!");

}

