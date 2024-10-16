#pragma once

#include "Basic.hpp"

#include "S_PalBiomeEffect_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.ExecuteUbergraph_BP_PalBiomeEffectController
// 0x01C0 (0x01C0 - 0x0000)
struct BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBiomeType                                 K2Node_CustomEvent_Biome_Type;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0xB];                                       // 0x0015(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PalBiomeEffect                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x00B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController) == 0x000010, "Wrong alignment on BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController");
static_assert(sizeof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController) == 0x0001C0, "Wrong size on BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, EntryPoint) == 0x000000, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, K2Node_CustomEvent_Biome_Type) == 0x000014, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::K2Node_CustomEvent_Biome_Type' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_Conv_ByteToString_ReturnValue) == 0x000080, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_Conv_StringToName_ReturnValue) == 0x000090, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_GetDataTableRowFromName_OutRow) == 0x000098, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_IsValid_ReturnValue_1) == 0x0000AA, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_IsValid_ReturnValue_2) == 0x0000AB, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0000B0, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000198, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0001A0, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0001B8, "Member 'BP_PalBiomeEffectController_C_ExecuteUbergraph_BP_PalBiomeEffectController::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.On Biome Enter
// 0x0001 (0x0001 - 0x0000)
struct BP_PalBiomeEffectController_C_On_Biome_Enter final
{
public:
	EPalBiomeType                                 Biome_Type;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeEffectController_C_On_Biome_Enter) == 0x000001, "Wrong alignment on BP_PalBiomeEffectController_C_On_Biome_Enter");
static_assert(sizeof(BP_PalBiomeEffectController_C_On_Biome_Enter) == 0x000001, "Wrong size on BP_PalBiomeEffectController_C_On_Biome_Enter");
static_assert(offsetof(BP_PalBiomeEffectController_C_On_Biome_Enter, Biome_Type) == 0x000000, "Member 'BP_PalBiomeEffectController_C_On_Biome_Enter::Biome_Type' has a wrong offset!");

// Function BP_PalBiomeEffectController.BP_PalBiomeEffectController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalBiomeEffectController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalBiomeEffectController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalBiomeEffectController_C_ReceiveTick");
static_assert(sizeof(BP_PalBiomeEffectController_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalBiomeEffectController_C_ReceiveTick");
static_assert(offsetof(BP_PalBiomeEffectController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalBiomeEffectController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

