#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.SetActiveHeadMesh
// 0x0001 (0x0001 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh) == 0x000001, "Wrong alignment on BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh) == 0x000001, "Wrong size on BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh, IsActive) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_SetActiveHeadMesh::IsActive' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_OilRigCannon_LaserTower_C_ReceiveTick");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_ReceiveTick) == 0x000004, "Wrong size on BP_OilRigCannon_LaserTower_C_ReceiveTick");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.ExecuteUbergraph_BP_OilRigCannon_LaserTower
// 0x02A0 (0x02A0 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanRayCastToTarget_ReturnValue;           // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12E[0x2];                                      // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShootingGun_ReturnValue;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalOilrigController*                   CallFunc_FindOilrigController_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalOilrigController*                   CallFunc_FindOilrigController_ReturnValue_1;       // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShootingAnyTower_ReturnValue;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalOilrigController*                   CallFunc_FindOilrigController_ReturnValue_2;       // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_2;                   // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalOilrigController*                   CallFunc_FindOilrigController_ReturnValue_3;       // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDestroyedWeapon_ReturnValue;            // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_182[0x6];                                      // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E8[0x8];                                      // 0x01E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x01F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x0298(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower) == 0x000010, "Wrong alignment on BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower) == 0x0002A0, "Wrong size on BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, EntryPoint) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000110, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherActor) == 0x000118, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherComp) == 0x000120, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000128, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsServer_ReturnValue) == 0x00012C, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_CanRayCastToTarget_ReturnValue) == 0x00012D, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_CanRayCastToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000140, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsShootingGun_ReturnValue) == 0x000148, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsShootingGun_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_FindOilrigController_ReturnValue) == 0x000150, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_FindOilrigController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_FindOilrigController_ReturnValue_1) == 0x000158, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_FindOilrigController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsShootingAnyTower_ReturnValue) == 0x000160, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsShootingAnyTower_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_FindOilrigController_ReturnValue_2) == 0x000168, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_FindOilrigController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsServer_ReturnValue_1) == 0x000170, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsServer_ReturnValue_2) == 0x000171, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_FindOilrigController_ReturnValue_3) == 0x000178, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_FindOilrigController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_IsDestroyedWeapon_ReturnValue) == 0x000181, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_IsDestroyedWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000188, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0001A0, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, K2Node_Event_DeltaSeconds) == 0x0001A8, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0001B0, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_Add_VectorVector_ReturnValue) == 0x0001C8, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0001E0, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_GetSocketTransform_ReturnValue) == 0x0001F0, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_BreakTransform_Location) == 0x000250, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_BreakTransform_Rotation) == 0x000268, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_BreakTransform_Scale) == 0x000280, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower, CallFunc_SpawnSystemAtLocation_ReturnValue_2) == 0x000298, "Member 'BP_OilRigCannon_LaserTower_C_ExecuteUbergraph_BP_OilRigCannon_LaserTower::CallFunc_SpawnSystemAtLocation_ReturnValue_2' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.Damage Ray Cast
// 0x0528 (0x0528 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast final
{
public:
	EDrawDebugTrace                               Debug;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      HitObject;                                         // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x00D8(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x00F8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E2[0x2];                                      // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalMakeDamageInfo                     K2Node_MakeStruct_PalMakeDamageInfo;               // 0x02C8(0x0190)(ContainsInstancedReference)
	struct FPalDamageInfo                         CallFunc_MakeDamageInfo_ReturnValue;               // 0x0458(0x00D0)()
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast) == 0x000008, "Wrong alignment on BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast) == 0x000528, "Wrong size on BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, Debug) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::Debug' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, HitObject) == 0x000008, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::HitObject' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, Temp_object_Variable) == 0x000018, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_GetForwardVector_ReturnValue) == 0x000048, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_GetForwardVector_ReturnValue_1) == 0x000060, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000078, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000090, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_SphereTraceMultiForObjects_OutHits) == 0x0000D8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_SphereTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_SphereTraceMultiForObjects_ReturnValue) == 0x0000E8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_SphereTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_bBlockingHit) == 0x0001E0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001E1, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_Time) == 0x0001E4, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_Distance) == 0x0001E8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_Location) == 0x0001F0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_ImpactPoint) == 0x000208, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_Normal) == 0x000220, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_ImpactNormal) == 0x000238, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_PhysMat) == 0x000250, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_HitActor) == 0x000258, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_HitComponent) == 0x000260, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_HitBoneName) == 0x000268, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_BoneName) == 0x000270, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_HitItem) == 0x000278, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_ElementIndex) == 0x00027C, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_FaceIndex) == 0x000280, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_TraceStart) == 0x000288, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_BreakHitResult_TraceEnd) == 0x0002A0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, K2Node_DynamicCast_AsPal_Character) == 0x0002B8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, K2Node_DynamicCast_bSuccess) == 0x0002C0, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, K2Node_MakeStruct_PalMakeDamageInfo) == 0x0002C8, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::K2Node_MakeStruct_PalMakeDamageInfo' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast, CallFunc_MakeDamageInfo_ReturnValue) == 0x000458, "Member 'BP_OilRigCannon_LaserTower_C_Damage_Ray_Cast::CallFunc_MakeDamageInfo_ReturnValue' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_OilRigCannon_LaserTower_C_BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.GetYawMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_GetYawMesh final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_GetYawMesh) == 0x000008, "Wrong alignment on BP_OilRigCannon_LaserTower_C_GetYawMesh");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_GetYawMesh) == 0x000008, "Wrong size on BP_OilRigCannon_LaserTower_C_GetYawMesh");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_GetYawMesh, ReturnValue) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_GetYawMesh::ReturnValue' has a wrong offset!");

// Function BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C.GetPitchMesh
// 0x0008 (0x0008 - 0x0000)
struct BP_OilRigCannon_LaserTower_C_GetPitchMesh final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OilRigCannon_LaserTower_C_GetPitchMesh) == 0x000008, "Wrong alignment on BP_OilRigCannon_LaserTower_C_GetPitchMesh");
static_assert(sizeof(BP_OilRigCannon_LaserTower_C_GetPitchMesh) == 0x000008, "Wrong size on BP_OilRigCannon_LaserTower_C_GetPitchMesh");
static_assert(offsetof(BP_OilRigCannon_LaserTower_C_GetPitchMesh, ReturnValue) == 0x000000, "Member 'BP_OilRigCannon_LaserTower_C_GetPitchMesh::ReturnValue' has a wrong offset!");

}

