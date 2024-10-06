#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.Despawn Delegate
// 0x0030 (0x0030 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate) == 0x000030, "Wrong size on BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate, ID) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_Despawn_Delegate::ID' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.DespawnMecha
// 0x0048 (0x0048 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_DespawnMecha final
{
public:
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_DespawnMecha");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha) == 0x000048, "Wrong size on BP_OilrigMachineSpawnerComponent_C_DespawnMecha");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000020, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, CallFunc_GetCharacterManager_ReturnValue) == 0x000028, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_DespawnMecha, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_OilrigMachineSpawnerComponent_C_DespawnMecha::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.ExecuteUbergraph_BP_OilrigMachineSpawnerComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_Location;                             // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_Event_Rotate;                               // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent) == 0x000038, "Wrong size on BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent, EntryPoint) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent, K2Node_Event_Location) == 0x000008, "Member 'BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent::K2Node_Event_Location' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent, K2Node_Event_Rotate) == 0x000020, "Member 'BP_OilrigMachineSpawnerComponent_C_ExecuteUbergraph_BP_OilrigMachineSpawnerComponent::K2Node_Event_Rotate' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.On Dead
// 0x0068 (0x0068 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_On_Dead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_On_Dead) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_On_Dead");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_On_Dead) == 0x000068, "Wrong size on BP_OilrigMachineSpawnerComponent_C_On_Dead");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_On_Dead, DeadInfo) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_On_Dead::DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_On_Dead, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_OilrigMachineSpawnerComponent_C_On_Dead::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_On_Dead, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'BP_OilrigMachineSpawnerComponent_C_On_Dead::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.Spawn Delegate
// 0x0058 (0x0058 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate) == 0x000058, "Wrong size on BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate, ID) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate::ID' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000040, "Member 'BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_OilrigMachineSpawnerComponent_C_Spawn_Delegate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.SpawnMachine
// 0x0030 (0x0030 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_SpawnMachine final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotate;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_SpawnMachine) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_SpawnMachine");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_SpawnMachine) == 0x000030, "Wrong size on BP_OilrigMachineSpawnerComponent_C_SpawnMachine");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMachine, Location) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMachine::Location' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMachine, Rotate) == 0x000018, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMachine::Rotate' has a wrong offset!");

// Function BP_OilrigMachineSpawnerComponent.BP_OilrigMachineSpawnerComponent_C.SpawnMecha
// 0x0388 (0x0388 - 0x0000)
struct BP_OilrigMachineSpawnerComponent_C_SpawnMecha final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotate;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FNetworkActorSpawnParameters           K2Node_MakeStruct_NetworkActorSpawnParameters;     // 0x0050(0x0070)(NoDestructor)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0x00D0(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_SpawnNewCharacter_ReturnValue;            // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha) == 0x000008, "Wrong alignment on BP_OilrigMachineSpawnerComponent_C_SpawnMecha");
static_assert(sizeof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha) == 0x000388, "Wrong size on BP_OilrigMachineSpawnerComponent_C_SpawnMecha");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, Location) == 0x000000, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::Location' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, Rotate) == 0x000018, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::Rotate' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000040, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, CallFunc_GetCharacterManager_ReturnValue) == 0x000048, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, K2Node_MakeStruct_NetworkActorSpawnParameters) == 0x000050, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::K2Node_MakeStruct_NetworkActorSpawnParameters' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, K2Node_MakeStruct_Guid) == 0x0000C0, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, CallFunc_GetInitializedCharacterSaveParemter_outParameter) == 0x0000D0, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::CallFunc_GetInitializedCharacterSaveParemter_outParameter' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, CallFunc_GetInitializedCharacterSaveParemter_ReturnValue) == 0x000378, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::CallFunc_GetInitializedCharacterSaveParemter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilrigMachineSpawnerComponent_C_SpawnMecha, CallFunc_SpawnNewCharacter_ReturnValue) == 0x000380, "Member 'BP_OilrigMachineSpawnerComponent_C_SpawnMecha::CallFunc_SpawnNewCharacter_ReturnValue' has a wrong offset!");

}

