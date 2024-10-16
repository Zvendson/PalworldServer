#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BulletRain.BP_BulletRain_C.ExecuteUbergraph_BP_BulletRain
// 0x0080 (0x0080 - 0x0000)
struct BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_GetOwnerAction_Action;                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionGeneralAttackFarBase_C*       K2Node_DynamicCast_AsBP_Action_General_Attack_Far_Base; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetPredictedTargetLocation_Location;      // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_UpdateThunderSpawn_DeltaTime_ImplicitCast; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain) == 0x000008, "Wrong alignment on BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain");
static_assert(sizeof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain) == 0x000080, "Wrong size on BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, EntryPoint) == 0x000000, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_GetOwnerAction_Action) == 0x000030, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_GetOwnerAction_Action' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, K2Node_DynamicCast_AsBP_Action_General_Attack_Far_Base) == 0x000038, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::K2Node_DynamicCast_AsBP_Action_General_Attack_Far_Base' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_GetPredictedTargetLocation_Location) == 0x000048, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_GetPredictedTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_FindLookAtRotation_ReturnValue) == 0x000060, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain, CallFunc_UpdateThunderSpawn_DeltaTime_ImplicitCast) == 0x000078, "Member 'BP_BulletRain_C_ExecuteUbergraph_BP_BulletRain::CallFunc_UpdateThunderSpawn_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_BulletRain.BP_BulletRain_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BulletRain_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletRain_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BulletRain_C_ReceiveTick");
static_assert(sizeof(BP_BulletRain_C_ReceiveTick) == 0x000004, "Wrong size on BP_BulletRain_C_ReceiveTick");
static_assert(offsetof(BP_BulletRain_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BulletRain_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BulletRain.BP_BulletRain_C.SpawnBullet
// 0x01F0 (0x01F0 - 0x0000)
struct BP_BulletRain_C_SpawnBullet final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue_1;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetPI_ReturnValue;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Cos_ReturnValue;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Sin_ReturnValue;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0160(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletRain_C_SpawnBullet) == 0x000010, "Wrong alignment on BP_BulletRain_C_SpawnBullet");
static_assert(sizeof(BP_BulletRain_C_SpawnBullet) == 0x0001F0, "Wrong size on BP_BulletRain_C_SpawnBullet");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, Count) == 0x000000, "Member 'BP_BulletRain_C_SpawnBullet::Count' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_GetActorScale3D_ReturnValue) == 0x000008, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_GetActorScale3D_ReturnValue_1) == 0x000038, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_GetActorScale3D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, Temp_int_Variable) == 0x000050, "Member 'BP_BulletRain_C_SpawnBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_GetOwner_ReturnValue) == 0x000078, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000080, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_GetPI_ReturnValue) == 0x000088, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000A0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0000B8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Cos_ReturnValue) == 0x0000C0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Cos_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Sin_ReturnValue) == 0x0000C8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Sin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Normal_ReturnValue) == 0x0000E8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000100, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000118, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000130, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Add_VectorVector_ReturnValue) == 0x000148, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_MakeTransform_ReturnValue) == 0x000160, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001C0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001C8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0001D0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001D8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0001E0, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_SpawnBullet, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0001E8, "Member 'BP_BulletRain_C_SpawnBullet::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_BulletRain.BP_BulletRain_C.UpdateThunderSpawn
// 0x0020 (0x0020 - 0x0000)
struct BP_BulletRain_C_UpdateThunderSpawn final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletRain_C_UpdateThunderSpawn) == 0x000008, "Wrong alignment on BP_BulletRain_C_UpdateThunderSpawn");
static_assert(sizeof(BP_BulletRain_C_UpdateThunderSpawn) == 0x000020, "Wrong size on BP_BulletRain_C_UpdateThunderSpawn");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, DeltaTime) == 0x000000, "Member 'BP_BulletRain_C_UpdateThunderSpawn::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, Temp_int_Variable) == 0x000008, "Member 'BP_BulletRain_C_UpdateThunderSpawn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_BulletRain_C_UpdateThunderSpawn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_BulletRain_C_UpdateThunderSpawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000014, "Member 'BP_BulletRain_C_UpdateThunderSpawn::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, CallFunc_Less_IntInt_ReturnValue) == 0x000015, "Member 'BP_BulletRain_C_UpdateThunderSpawn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BulletRain_C_UpdateThunderSpawn, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'BP_BulletRain_C_UpdateThunderSpawn::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");

}

