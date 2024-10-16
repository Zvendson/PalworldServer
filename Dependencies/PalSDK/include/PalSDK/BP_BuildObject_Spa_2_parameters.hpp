#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_Spa_2_C_CustomEvent final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_CustomEvent) == 0x000008, "Wrong alignment on BP_BuildObject_Spa_2_C_CustomEvent");
static_assert(sizeof(BP_BuildObject_Spa_2_C_CustomEvent) == 0x000008, "Wrong size on BP_BuildObject_Spa_2_C_CustomEvent");
static_assert(offsetof(BP_BuildObject_Spa_2_C_CustomEvent, Model) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_CustomEvent::Model' has a wrong offset!");

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.ExecuteUbergraph_BP_BuildObject_Spa_2
// 0x0048 (0x0048 - 0x0000)
struct BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectAmusementModel* Model)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectAmusementModel*            K2Node_DynamicCast_AsPal_Map_Object_Amusement_Model; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2) == 0x000008, "Wrong alignment on BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2");
static_assert(sizeof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2) == 0x000048, "Wrong size on BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, EntryPoint) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_Event_ConcreteModel) == 0x000018, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_DynamicCast_AsPal_Map_Object_Amusement_Model) == 0x000030, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_DynamicCast_AsPal_Map_Object_Amusement_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2, K2Node_CustomEvent_Model) == 0x000040, "Member 'BP_BuildObject_Spa_2_C_ExecuteUbergraph_BP_BuildObject_Spa_2::K2Node_CustomEvent_Model' has a wrong offset!");

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.OnStartUsingInServer
// 0x0118 (0x0118 - 0x0000)
struct BP_BuildObject_Spa_2_C_OnStartUsingInServer final
{
public:
	class UPalMapObjectAmusementModel*            Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_OnStartUsingInServer) == 0x000008, "Wrong alignment on BP_BuildObject_Spa_2_C_OnStartUsingInServer");
static_assert(sizeof(BP_BuildObject_Spa_2_C_OnStartUsingInServer) == 0x000118, "Wrong size on BP_BuildObject_Spa_2_C_OnStartUsingInServer");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnStartUsingInServer, Model) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_OnStartUsingInServer::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnStartUsingInServer, Character) == 0x000008, "Member 'BP_BuildObject_Spa_2_C_OnStartUsingInServer::Character' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnStartUsingInServer, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000010, "Member 'BP_BuildObject_Spa_2_C_OnStartUsingInServer::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnStartUsingInServer, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000028, "Member 'BP_BuildObject_Spa_2_C_OnStartUsingInServer::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnStartUsingInServer, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000110, "Member 'BP_BuildObject_Spa_2_C_OnStartUsingInServer::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.OnUpdateCharacter
// 0x0128 (0x0128 - 0x0000)
struct BP_BuildObject_Spa_2_C_OnUpdateCharacter final
{
public:
	class UPalMapObjectAmusementModel*            Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_OnUpdateCharacter) == 0x000008, "Wrong alignment on BP_BuildObject_Spa_2_C_OnUpdateCharacter");
static_assert(sizeof(BP_BuildObject_Spa_2_C_OnUpdateCharacter) == 0x000128, "Wrong size on BP_BuildObject_Spa_2_C_OnUpdateCharacter");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, Model) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000028, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000038, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Spa_2_C_OnUpdateCharacter, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000120, "Member 'BP_BuildObject_Spa_2_C_OnUpdateCharacter::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C.SetActive_Internal
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_Spa_2_C_SetActive_Internal final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Spa_2_C_SetActive_Internal) == 0x000001, "Wrong alignment on BP_BuildObject_Spa_2_C_SetActive_Internal");
static_assert(sizeof(BP_BuildObject_Spa_2_C_SetActive_Internal) == 0x000001, "Wrong size on BP_BuildObject_Spa_2_C_SetActive_Internal");
static_assert(offsetof(BP_BuildObject_Spa_2_C_SetActive_Internal, bOn) == 0x000000, "Member 'BP_BuildObject_Spa_2_C_SetActive_Internal::bOn' has a wrong offset!");

}

