#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "F_NPCOnePointSpawnInfo_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.BlueprintTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SquadNPCSpawner_C_BlueprintTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_BlueprintTick) == 0x000004, "Wrong alignment on BP_SquadNPCSpawner_C_BlueprintTick");
static_assert(sizeof(BP_SquadNPCSpawner_C_BlueprintTick) == 0x000004, "Wrong size on BP_SquadNPCSpawner_C_BlueprintTick");
static_assert(offsetof(BP_SquadNPCSpawner_C_BlueprintTick, DeltaTime) == 0x000000, "Member 'BP_SquadNPCSpawner_C_BlueprintTick::DeltaTime' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Check Spawn
// 0x0010 (0x0010 - 0x0000)
struct BP_SquadNPCSpawner_C_Check_Spawn final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearBaseCamp_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalCheckSpawnResultType                      CallFunc_CheckSpawnDistance_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_Check_Spawn) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_Check_Spawn");
static_assert(sizeof(BP_SquadNPCSpawner_C_Check_Spawn) == 0x000010, "Wrong size on BP_SquadNPCSpawner_C_Check_Spawn");
static_assert(offsetof(BP_SquadNPCSpawner_C_Check_Spawn, DeltaTime) == 0x000000, "Member 'BP_SquadNPCSpawner_C_Check_Spawn::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Check_Spawn, CallFunc_IsNearBaseCamp_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_C_Check_Spawn::CallFunc_IsNearBaseCamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Check_Spawn, CallFunc_CheckSpawnDistance_ReturnValue) == 0x000009, "Member 'BP_SquadNPCSpawner_C_Check_Spawn::CallFunc_CheckSpawnDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Check_Spawn, K2Node_SwitchEnum_CmpSuccess) == 0x00000A, "Member 'BP_SquadNPCSpawner_C_Check_Spawn::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DeleteOnePoint
// 0x0008 (0x0008 - 0x0000)
struct BP_SquadNPCSpawner_C_DeleteOnePoint final
{
public:
	class AActor*                                 Point;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_DeleteOnePoint) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_DeleteOnePoint");
static_assert(sizeof(BP_SquadNPCSpawner_C_DeleteOnePoint) == 0x000008, "Wrong size on BP_SquadNPCSpawner_C_DeleteOnePoint");
static_assert(offsetof(BP_SquadNPCSpawner_C_DeleteOnePoint, Point) == 0x000000, "Member 'BP_SquadNPCSpawner_C_DeleteOnePoint::Point' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Despawn
// 0x0050 (0x0050 - 0x0000)
struct BP_SquadNPCSpawner_C_Despawn final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_Despawn) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_Despawn");
static_assert(sizeof(BP_SquadNPCSpawner_C_Despawn) == 0x000050, "Wrong size on BP_SquadNPCSpawner_C_Despawn");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_SquadNPCSpawner_C_Despawn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_SquadNPCSpawner_C_Despawn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, Temp_int_Variable) == 0x000008, "Member 'BP_SquadNPCSpawner_C_Despawn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_SquadNPCSpawner_C_Despawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000028, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00003C, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Max_ReturnValue) == 0x000044, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Despawn, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'BP_SquadNPCSpawner_C_Despawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.DespawnDelegate
// 0x0040 (0x0040 - 0x0000)
struct BP_SquadNPCSpawner_C_DespawnDelegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_DespawnDelegate) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_DespawnDelegate");
static_assert(sizeof(BP_SquadNPCSpawner_C_DespawnDelegate) == 0x000040, "Wrong size on BP_SquadNPCSpawner_C_DespawnDelegate");
static_assert(offsetof(BP_SquadNPCSpawner_C_DespawnDelegate, ID) == 0x000000, "Member 'BP_SquadNPCSpawner_C_DespawnDelegate::ID' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_DespawnDelegate, Temp_int_Variable) == 0x000030, "Member 'BP_SquadNPCSpawner_C_DespawnDelegate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_DespawnDelegate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'BP_SquadNPCSpawner_C_DespawnDelegate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_DespawnDelegate, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'BP_SquadNPCSpawner_C_DespawnDelegate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.ExecuteUbergraph_BP_SquadNPCSpawner
// 0x0060 (0x0060 - 0x0000)
struct BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Check_Spawn_DeltaTime_ImplicitCast;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner");
static_assert(sizeof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner) == 0x000060, "Wrong size on BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, EntryPoint) == 0x000000, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000028, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner, CallFunc_Check_Spawn_DeltaTime_ImplicitCast) == 0x000058, "Member 'BP_SquadNPCSpawner_C_ExecuteUbergraph_BP_SquadNPCSpawner::CallFunc_Check_Spawn_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.FindIndividualHandle
// 0x0098 (0x0098 - 0x0000)
struct BP_SquadNPCSpawner_C_FindIndividualHandle final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          Handle;                                            // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0060(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_FindIndividualHandle) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_FindIndividualHandle");
static_assert(sizeof(BP_SquadNPCSpawner_C_FindIndividualHandle) == 0x000098, "Wrong size on BP_SquadNPCSpawner_C_FindIndividualHandle");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, ID) == 0x000000, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::ID' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, Handle) == 0x000030, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::Handle' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, Index_0) == 0x000038, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::Index_0' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_Array_Get_Item) == 0x000050, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_GetIndividualID_ReturnValue) == 0x000060, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_FindIndividualHandle, CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue) == 0x000090, "Member 'BP_SquadNPCSpawner_C_FindIndividualHandle::CallFunc_EqualEqual_PalInstanceIDPalInstanceID_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetAllSpawnedNPCHandle
// 0x0010 (0x0010 - 0x0000)
struct BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle final
{
public:
	TArray<class UPalIndividualCharacterHandle*>  Handles;                                           // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle");
static_assert(sizeof(BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle) == 0x000010, "Wrong size on BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle");
static_assert(offsetof(BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle, Handles) == 0x000000, "Member 'BP_SquadNPCSpawner_C_GetAllSpawnedNPCHandle::Handles' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetSpawnPointRadius_0
// 0x0004 (0x0004 - 0x0000)
struct BP_SquadNPCSpawner_C_GetSpawnPointRadius_0 final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_GetSpawnPointRadius_0) == 0x000004, "Wrong alignment on BP_SquadNPCSpawner_C_GetSpawnPointRadius_0");
static_assert(sizeof(BP_SquadNPCSpawner_C_GetSpawnPointRadius_0) == 0x000004, "Wrong size on BP_SquadNPCSpawner_C_GetSpawnPointRadius_0");
static_assert(offsetof(BP_SquadNPCSpawner_C_GetSpawnPointRadius_0, ReturnValue) == 0x000000, "Member 'BP_SquadNPCSpawner_C_GetSpawnPointRadius_0::ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.GetWorldLoadWaitRadius
// 0x0008 (0x0008 - 0x0000)
struct BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius final
{
public:
	double                                        Radius;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius");
static_assert(sizeof(BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius) == 0x000008, "Wrong size on BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius");
static_assert(offsetof(BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius, Radius) == 0x000000, "Member 'BP_SquadNPCSpawner_C_GetWorldLoadWaitRadius::Radius' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.OnSquadSpawnedCharacter__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature final
{
public:
	class UPalIndividualCharacterHandle*          NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature");
static_assert(sizeof(BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature) == 0x000008, "Wrong size on BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature");
static_assert(offsetof(BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature, NewParam) == 0x000000, "Member 'BP_SquadNPCSpawner_C_OnSquadSpawnedCharacter__DelegateSignature::NewParam' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetNullHandleWhenDestoryNPC
// 0x0018 (0x0018 - 0x0000)
struct BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC");
static_assert(sizeof(BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC) == 0x000018, "Wrong size on BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC, DestroyedActor) == 0x000000, "Member 'BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC::DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC, CallFunc_Array_RemoveItem_ReturnValue) == 0x000010, "Member 'BP_SquadNPCSpawner_C_SetNullHandleWhenDestoryNPC::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SetupSpawnInfoList
// 0x0340 (0x0340 - 0x0000)
struct BP_SquadNPCSpawner_C_SetupSpawnInfoList final
{
public:
	TArray<class USceneComponent*>                TempComponent;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<TScriptInterface<class IBPI_SpawnPointInfo_C>> TempBPIList;                                       // 0x0010(0x0010)(Edit, BlueprintVisible)
	TScriptInterface<class IBPI_SpawnPointInfo_C> TempBPI;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCSpawnPointOnly_C*                TempPoint;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         TempLevel;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 TempDefaultAction;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TempAICon;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_NPCOnePointSpawnInfo>        TempInfoList;                                      // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         TempOnePointActor;                                 // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0xC];                                       // 0x0094(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPCOnePointSpawnInfo                CallFunc_GetOneSpawnInfo_Info;                     // 0x00A0(0x00A0)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue; // 0x0154(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPCOnePointSpawnInfo                CallFunc_Array_Get_Item_1;                         // 0x0170(0x00A0)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_218[0x8];                                      // 0x0218(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPCOnePointSpawnInfo                K2Node_MakeStruct_F_NPCOnePointSpawnInfo;          // 0x0220(0x00A0)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue_1;               // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CB[0x5];                                      // 0x02CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x02D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item_2;                         // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x3];                                      // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x02F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info;         // 0x02F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SpawnPointInfo_C> K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1;       // 0x0320(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_SetupSpawnInfoList) == 0x000010, "Wrong alignment on BP_SquadNPCSpawner_C_SetupSpawnInfoList");
static_assert(sizeof(BP_SquadNPCSpawner_C_SetupSpawnInfoList) == 0x000340, "Wrong size on BP_SquadNPCSpawner_C_SetupSpawnInfoList");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempComponent) == 0x000000, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempComponent' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempBPIList) == 0x000010, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempBPIList' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempBPI) == 0x000020, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempBPI' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempPoint) == 0x000030, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempPoint' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempLevel) == 0x000038, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempLevel' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempDefaultAction) == 0x000040, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempDefaultAction' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempAICon) == 0x000048, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempAICon' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempInfoList) == 0x000050, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempInfoList' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, TempOnePointActor) == 0x000060, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::TempOnePointActor' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Array_Index_Variable) == 0x000070, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Array_Index_Variable_1) == 0x000074, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Array_Index_Variable_2) == 0x000080, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_GetOneSpawnInfo_Info) == 0x0000A0, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_GetOneSpawnInfo_Info' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue) == 0x000140, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_GetNPCManager_ReturnValue) == 0x000148, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Loop_Counter_Variable_1) == 0x000150, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue) == 0x000154, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_GetCharacterIDFromCharacterIDAndUniqueNPCID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Less_IntInt_ReturnValue) == 0x00015C, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue_1) == 0x000164, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, Temp_int_Loop_Counter_Variable_2) == 0x000168, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00016C, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Get_Item_1) == 0x000170, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue_2) == 0x000210, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Length_ReturnValue_1) == 0x000214, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, K2Node_MakeStruct_F_NPCOnePointSpawnInfo) == 0x000220, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::K2Node_MakeStruct_F_NPCOnePointSpawnInfo' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002C0, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue_3) == 0x0002C4, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Greater_IntInt_ReturnValue) == 0x0002C8, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_IsValidClass_ReturnValue) == 0x0002C9, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_IsValidClass_ReturnValue_1) == 0x0002CA, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_GetChildrenComponents_Children) == 0x0002D0, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Length_ReturnValue_2) == 0x0002E0, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Get_Item_2) == 0x0002E8, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Less_IntInt_ReturnValue_2) == 0x0002F0, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue_4) == 0x0002F4, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, K2Node_DynamicCast_AsBPI_Spawn_Point_Info) == 0x0002F8, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::K2Node_DynamicCast_AsBPI_Spawn_Point_Info' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, K2Node_DynamicCast_bSuccess) == 0x000308, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_GetOwner_ReturnValue) == 0x000310, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, CallFunc_Array_Add_ReturnValue_5) == 0x000318, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1) == 0x000320, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::K2Node_DynamicCast_AsBPI_Spawn_Point_Info_1' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SetupSpawnInfoList, K2Node_DynamicCast_bSuccess_1) == 0x000330, "Member 'BP_SquadNPCSpawner_C_SetupSpawnInfoList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.Spawn
// 0x03C0 (0x03C0 - 0x0000)
struct BP_SquadNPCSpawner_C_Spawn final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalInstanceID& ID)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_MakeStruct_Guid;                            // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNetworkActorSpawnParameters           K2Node_MakeStruct_NetworkActorSpawnParameters;     // 0x0090(0x0070)(NoDestructor)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0x0100(0x02A8)()
	bool                                          CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_SpawnNewCharacter_ReturnValue;            // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_Spawn) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_Spawn");
static_assert(sizeof(BP_SquadNPCSpawner_C_Spawn) == 0x0003C0, "Wrong size on BP_SquadNPCSpawner_C_Spawn");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, Temp_int_Variable) == 0x000000, "Member 'BP_SquadNPCSpawner_C_Spawn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_SquadNPCSpawner_C_Spawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_BreakTransform_Location) == 0x000028, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_BreakTransform_Rotation) == 0x000040, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_GetCharacterManager_ReturnValue) == 0x000070, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000078, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, K2Node_MakeStruct_Guid) == 0x000080, "Member 'BP_SquadNPCSpawner_C_Spawn::K2Node_MakeStruct_Guid' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, K2Node_MakeStruct_NetworkActorSpawnParameters) == 0x000090, "Member 'BP_SquadNPCSpawner_C_Spawn::K2Node_MakeStruct_NetworkActorSpawnParameters' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_GetInitializedCharacterSaveParemter_outParameter) == 0x000100, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_GetInitializedCharacterSaveParemter_outParameter' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_GetInitializedCharacterSaveParemter_ReturnValue) == 0x0003A8, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_GetInitializedCharacterSaveParemter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_SpawnNewCharacter_ReturnValue) == 0x0003B0, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_SpawnNewCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_Spawn, CallFunc_Array_Add_ReturnValue) == 0x0003B8, "Member 'BP_SquadNPCSpawner_C_Spawn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_SquadNPCSpawner.BP_SquadNPCSpawner_C.SpawnDelegate
// 0x0040 (0x0040 - 0x0000)
struct BP_SquadNPCSpawner_C_SpawnDelegate final
{
public:
	struct FPalInstanceID                         ID;                                                // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_FindIndividualHandle_Handle;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindIndividualHandle_Index;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SquadNPCSpawner_C_SpawnDelegate) == 0x000008, "Wrong alignment on BP_SquadNPCSpawner_C_SpawnDelegate");
static_assert(sizeof(BP_SquadNPCSpawner_C_SpawnDelegate) == 0x000040, "Wrong size on BP_SquadNPCSpawner_C_SpawnDelegate");
static_assert(offsetof(BP_SquadNPCSpawner_C_SpawnDelegate, ID) == 0x000000, "Member 'BP_SquadNPCSpawner_C_SpawnDelegate::ID' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SpawnDelegate, CallFunc_FindIndividualHandle_Handle) == 0x000030, "Member 'BP_SquadNPCSpawner_C_SpawnDelegate::CallFunc_FindIndividualHandle_Handle' has a wrong offset!");
static_assert(offsetof(BP_SquadNPCSpawner_C_SpawnDelegate, CallFunc_FindIndividualHandle_Index) == 0x000038, "Member 'BP_SquadNPCSpawner_C_SpawnDelegate::CallFunc_FindIndividualHandle_Index' has a wrong offset!");

}

