#pragma once

#include "Basic.hpp"

#include "F_NPCCampPreset_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.CheckWorldLoadComplete
// 0x00D0 (0x00D0 - 0x0000)
struct BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete final
{
public:
	bool                                          Loaded;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorldPartitionStreamingQuerySource    K2Node_MakeStruct_WorldPartitionStreamingQuerySource; // 0x0020(0x0088)()
	class UWorldPartitionSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FWorldPartitionStreamingQuerySource> K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ConstParm, ReferenceParm)
	class UWorldPartitionSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStreamingCompleted_ReturnValue;         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete) == 0x0000D0, "Wrong size on BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, Loaded) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::Loaded' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, K2Node_MakeStruct_WorldPartitionStreamingQuerySource) == 0x000020, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::K2Node_MakeStruct_WorldPartitionStreamingQuerySource' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, CallFunc_GetWorldSubsystem_ReturnValue) == 0x0000A8, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, K2Node_MakeArray_Array) == 0x0000B0, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x0000C0, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, CallFunc_IsStreamingCompleted_ReturnValue) == 0x0000C8, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::CallFunc_IsStreamingCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'BP_NPCCampSpawnerBase_C_CheckWorldLoadComplete::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0008 (0x0008 - 0x0000)
struct BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	class UPalIndividualCharacterHandle*          NewParam;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong size on BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0, NewParam) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_CREATEDELEGATE_PROXYFUNCTION_0::NewParam' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ExecuteUbergraph_BP_NPCCampSpawnerBase
// 0x0010 (0x0010 - 0x0000)
struct BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearPlayerCamp_IsNear;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayerCheck_RespawnOK;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckWorldLoadComplete_Loaded;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase) == 0x000004, "Wrong alignment on BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase) == 0x000010, "Wrong size on BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, EntryPoint) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, CallFunc_IsNearPlayerCamp_IsNear) == 0x000004, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::CallFunc_IsNearPlayerCamp_IsNear' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, K2Node_Event_EndPlayReason) == 0x000006, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, CallFunc_IsValid_ReturnValue) == 0x000007, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, CallFunc_PlayerCheck_RespawnOK) == 0x00000C, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::CallFunc_PlayerCheck_RespawnOK' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase, CallFunc_CheckWorldLoadComplete_Loaded) == 0x00000D, "Member 'BP_NPCCampSpawnerBase_C_ExecuteUbergraph_BP_NPCCampSpawnerBase::CallFunc_CheckWorldLoadComplete_Loaded' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.IsNearPlayerCamp
// 0x0120 (0x0120 - 0x0000)
struct BP_NPCCampSpawnerBase_C_IsNearPlayerCamp final
{
public:
	bool                                          IsNear;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampModel*                      Camp;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SelfPos;                                           // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRange_ReturnValue;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNearTwoPoint_ReturnValue;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBaseCampManager*                    CallFunc_GetBaseCampManager_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                      CallFunc_GetNearestBaseCamp_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_IsNearTwoPoint_distance_ImplicitCast;     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp) == 0x000010, "Wrong alignment on BP_NPCCampSpawnerBase_C_IsNearPlayerCamp");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp) == 0x000120, "Wrong size on BP_NPCCampSpawnerBase_C_IsNearPlayerCamp");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, IsNear) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::IsNear' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, Camp) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::Camp' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, SelfPos) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::SelfPos' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_GetRange_ReturnValue) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_GetRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_BreakTransform_Location) == 0x000098, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_BreakTransform_Rotation) == 0x0000B0, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_BreakTransform_Scale) == 0x0000C8, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_IsNearTwoPoint_ReturnValue) == 0x0000E0, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_IsNearTwoPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_IsValid_ReturnValue) == 0x0000E1, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_GetBaseCampManager_ReturnValue) == 0x0000E8, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_GetBaseCampManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_GetNearestBaseCamp_ReturnValue) == 0x0000F0, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_GetNearestBaseCamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F8, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsNearPlayerCamp, CallFunc_IsNearTwoPoint_distance_ImplicitCast) == 0x000118, "Member 'BP_NPCCampSpawnerBase_C_IsNearPlayerCamp::CallFunc_IsNearTwoPoint_distance_ImplicitCast' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.IsProbabilitySuccess
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCCampSpawnerBase_C_IsProbabilitySuccess final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_IsProbabilitySuccess");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess) == 0x000030, "Wrong size on BP_NPCCampSpawnerBase_C_IsProbabilitySuccess");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, Success) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::Success' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_GetPalDebugSetting_ReturnValue_1) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_GetPalDebugSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_RandomFloat_ReturnValue) == 0x000020, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_IsProbabilitySuccess, CallFunc_BooleanOR_ReturnValue) == 0x000029, "Member 'BP_NPCCampSpawnerBase_C_IsProbabilitySuccess::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnEnemyDead
// 0x0120 (0x0120 - 0x0000)
struct BP_NPCCampSpawnerBase_C_OnEnemyDead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPalEnemyCampStatus                    EnemyCampStatus;                                   // 0x0050(0x0028)(Edit, BlueprintVisible, NoDestructor)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue;           // 0x00B8(0x0028)(NoDestructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue_1;              // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B[0x5];                                      // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_OnEnemyDead) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_OnEnemyDead");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_OnEnemyDead) == 0x000120, "Wrong size on BP_NPCCampSpawnerBase_C_OnEnemyDead");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, DeadInfo) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, EnemyCampStatus) == 0x000050, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::EnemyCampStatus' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_UtcNow_ReturnValue) == 0x000078, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x000080, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetGameSetting_ReturnValue) == 0x000090, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetGameSetting_ReturnValue_1) == 0x000098, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000A8, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetNPCManager_ReturnValue) == 0x0000B0, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetEnemyCampStatus_ReturnValue) == 0x0000B8, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetEnemyCampStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Conv_NameToString_ReturnValue) == 0x0000E0, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_GetNPCManager_ReturnValue_1) == 0x000100, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_GetNPCManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Array_IsEmpty_ReturnValue) == 0x000108, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Array_RemoveItem_ReturnValue) == 0x000109, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Array_Contains_ReturnValue) == 0x00010A, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemyDead, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000118, "Member 'BP_NPCCampSpawnerBase_C_OnEnemyDead::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnEnemySpawned
// 0x0028 (0x0028 - 0x0000)
struct BP_NPCCampSpawnerBase_C_OnEnemySpawned final
{
public:
	class UPalIndividualCharacterHandle*          SpawnHandle;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_OnEnemySpawned) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_OnEnemySpawned");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_OnEnemySpawned) == 0x000028, "Wrong size on BP_NPCCampSpawnerBase_C_OnEnemySpawned");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemySpawned, SpawnHandle) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_OnEnemySpawned::SpawnHandle' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemySpawned, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_OnEnemySpawned::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemySpawned, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_OnEnemySpawned::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemySpawned, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_NPCCampSpawnerBase_C_OnEnemySpawned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnEnemySpawned, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_NPCCampSpawnerBase_C_OnEnemySpawned::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.OnReceivedReward
// 0x0098 (0x0098 - 0x0000)
struct BP_NPCCampSpawnerBase_C_OnReceivedReward final
{
public:
	struct FPalEnemyCampStatus                    EnemyCampStatus;                                   // 0x0000(0x0028)(Edit, BlueprintVisible, NoDestructor)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue;           // 0x0060(0x0028)(NoDestructor)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_OnReceivedReward) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_OnReceivedReward");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_OnReceivedReward) == 0x000098, "Wrong size on BP_NPCCampSpawnerBase_C_OnReceivedReward");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, EnemyCampStatus) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::EnemyCampStatus' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_GetNPCManager_ReturnValue) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_UtcNow_ReturnValue) == 0x000030, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_GetGameSetting_ReturnValue) == 0x000038, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_GetGameSetting_ReturnValue_1) == 0x000048, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_GetNPCManager_ReturnValue_1) == 0x000050, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_GetNPCManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000058, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_GetEnemyCampStatus_ReturnValue) == 0x000060, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_GetEnemyCampStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_OnReceivedReward, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000090, "Member 'BP_NPCCampSpawnerBase_C_OnReceivedReward::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.PlayerCheck
// 0x0020 (0x0020 - 0x0000)
struct BP_NPCCampSpawnerBase_C_PlayerCheck final
{
public:
	bool                                          RespawnOK;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_GetAllPlayerCharacters_OutPlayers;        // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_PlayerCheck) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_PlayerCheck");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_PlayerCheck) == 0x000020, "Wrong size on BP_NPCCampSpawnerBase_C_PlayerCheck");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_PlayerCheck, RespawnOK) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_PlayerCheck::RespawnOK' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_PlayerCheck, CallFunc_GetAllPlayerCharacters_OutPlayers) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_PlayerCheck::CallFunc_GetAllPlayerCharacters_OutPlayers' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_PlayerCheck, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_NPCCampSpawnerBase_C_PlayerCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_PlayerCheck, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'BP_NPCCampSpawnerBase_C_PlayerCheck::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.RandomLottery
// 0x0088 (0x0088 - 0x0000)
struct BP_NPCCampSpawnerBase_C_RandomLottery final
{
public:
	class UClass*                                 ResultClass;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        RandomValue;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AddWeight;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TotalWeight;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsProbabilitySuccess_Success;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_NPCCampPreset                       CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(NoDestructor, HasGetValueTypeHash)
	struct FF_NPCCampPreset                       CallFunc_Array_Get_Item_1;                         // 0x0050(0x0010)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_RandomLottery) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_RandomLottery");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_RandomLottery) == 0x000088, "Wrong size on BP_NPCCampSpawnerBase_C_RandomLottery");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, ResultClass) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::ResultClass' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, RandomValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::RandomValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, AddWeight) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::AddWeight' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, TotalWeight) == 0x000018, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::TotalWeight' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_IsProbabilitySuccess_Success) == 0x000030, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_IsProbabilitySuccess_Success' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, Temp_int_Loop_Counter_Variable_1) == 0x000034, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Less_IntInt_ReturnValue_1) == 0x000069, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00006A, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_RandomFloatInRange_ReturnValue) == 0x000078, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_RandomLottery, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000080, "Member 'BP_NPCCampSpawnerBase_C_RandomLottery::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCCampSpawnerBase_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_NPCCampSpawnerBase_C_ReceiveEndPlay");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_NPCCampSpawnerBase_C_ReceiveEndPlay");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_NPCCampSpawnerBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_NPCCampSpawnerBase_C_ReceiveTick");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_NPCCampSpawnerBase_C_ReceiveTick");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.SetRespawnAble
// 0x0001 (0x0001 - 0x0000)
struct BP_NPCCampSpawnerBase_C_SetRespawnAble final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_SetRespawnAble) == 0x000001, "Wrong alignment on BP_NPCCampSpawnerBase_C_SetRespawnAble");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_SetRespawnAble) == 0x000001, "Wrong size on BP_NPCCampSpawnerBase_C_SetRespawnAble");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetRespawnAble, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_SetRespawnAble::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.SetupCampStatus
// 0x0080 (0x0080 - 0x0000)
struct BP_NPCCampSpawnerBase_C_SetupCampStatus final
{
public:
	struct FPalEnemyCampStatus                    CampStatus;                                        // 0x0000(0x0028)(Edit, BlueprintVisible, NoDestructor)
	float                                         CallFunc_CalcRemainRespawnTime_ReturnValue;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcRemainDespawnTime_ReturnValue;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue;           // 0x0040(0x0028)(NoDestructor)
	double                                        CallFunc_StartRespawnTimer_RespawnTime_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_StartDespawnTimer_DespawnTime_ImplicitCast; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_SetupCampStatus) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_SetupCampStatus");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_SetupCampStatus) == 0x000080, "Wrong size on BP_NPCCampSpawnerBase_C_SetupCampStatus");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CampStatus) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CampStatus' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_CalcRemainRespawnTime_ReturnValue) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_CalcRemainRespawnTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_CalcRemainDespawnTime_ReturnValue) == 0x00002C, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_CalcRemainDespawnTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_GetNPCManager_ReturnValue) == 0x000038, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_GetEnemyCampStatus_ReturnValue) == 0x000040, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_GetEnemyCampStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_StartRespawnTimer_RespawnTime_ImplicitCast) == 0x000068, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_StartRespawnTimer_RespawnTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_StartDespawnTimer_DespawnTime_ImplicitCast) == 0x000070, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_StartDespawnTimer_DespawnTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_SetupCampStatus, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'BP_NPCCampSpawnerBase_C_SetupCampStatus::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.StartDespawnTimer
// 0x0030 (0x0030 - 0x0000)
struct BP_NPCCampSpawnerBase_C_StartDespawnTimer final
{
public:
	double                                        DespawnTime;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_StartDespawnTimer) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_StartDespawnTimer");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_StartDespawnTimer) == 0x000030, "Wrong size on BP_NPCCampSpawnerBase_C_StartDespawnTimer");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartDespawnTimer, DespawnTime) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_StartDespawnTimer::DespawnTime' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartDespawnTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_StartDespawnTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartDespawnTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_NPCCampSpawnerBase_C_StartDespawnTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartDespawnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_NPCCampSpawnerBase_C_StartDespawnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartDespawnTimer, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_StartDespawnTimer::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.StartRespawnTimer
// 0x0038 (0x0038 - 0x0000)
struct BP_NPCCampSpawnerBase_C_StartRespawnTimer final
{
public:
	double                                        RespawnTime;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_StartRespawnTimer) == 0x000008, "Wrong alignment on BP_NPCCampSpawnerBase_C_StartRespawnTimer");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_StartRespawnTimer) == 0x000038, "Wrong size on BP_NPCCampSpawnerBase_C_StartRespawnTimer");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, RespawnTime) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::RespawnTime' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000020, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_StartRespawnTimer, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000030, "Member 'BP_NPCCampSpawnerBase_C_StartRespawnTimer::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_NPCCampSpawnerBase.BP_NPCCampSpawnerBase_C.TryCampSpawn
// 0x0100 (0x0100 - 0x0000)
struct BP_NPCCampSpawnerBase_C_TryCampSpawn final
{
public:
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalNPCManager*                         CallFunc_GetNPCManager_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalEnemyCampStatus                    K2Node_MakeStruct_PalEnemyCampStatus;              // 0x0010(0x0028)(NoDestructor)
	struct FPalEnemyCampStatus                    CallFunc_GetEnemyCampStatus_ReturnValue;           // 0x0038(0x0028)(NoDestructor)
	TDelegate<void(class UPalIndividualCharacterHandle* NewParam)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_RandomLottery_ResultClass;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0080(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCCampPresetBase_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPCCampSpawnerBase_C_TryCampSpawn) == 0x000010, "Wrong alignment on BP_NPCCampSpawnerBase_C_TryCampSpawn");
static_assert(sizeof(BP_NPCCampSpawnerBase_C_TryCampSpawn) == 0x000100, "Wrong size on BP_NPCCampSpawnerBase_C_TryCampSpawn");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000000, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_GetNPCManager_ReturnValue) == 0x000008, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_GetNPCManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, K2Node_MakeStruct_PalEnemyCampStatus) == 0x000010, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::K2Node_MakeStruct_PalEnemyCampStatus' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_GetEnemyCampStatus_ReturnValue) == 0x000038, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_GetEnemyCampStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_RandomLottery_ResultClass) == 0x000078, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_RandomLottery_ResultClass' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_GetTransform_ReturnValue) == 0x000080, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_IsValidClass_ReturnValue) == 0x0000E0, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E8, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPCCampSpawnerBase_C_TryCampSpawn, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'BP_NPCCampSpawnerBase_C_TryCampSpawn::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

