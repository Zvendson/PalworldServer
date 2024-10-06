#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_AAMachineGunBullet.BP_AAMachineGunBullet_C.OnHitToActor
// 0x0470 (0x0470 - 0x0000)
struct BP_AAMachineGunBullet_C_OnHitToActor final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWildNPC_ReturnValue;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalMakeDamageInfo                     K2Node_MakeStruct_PalMakeDamageInfo;               // 0x0210(0x0190)(ContainsInstancedReference)
	struct FPalDamageInfo                         CallFunc_MakeDamageInfo_ReturnValue;               // 0x03A0(0x00D0)()
};
static_assert(alignof(BP_AAMachineGunBullet_C_OnHitToActor) == 0x000008, "Wrong alignment on BP_AAMachineGunBullet_C_OnHitToActor");
static_assert(sizeof(BP_AAMachineGunBullet_C_OnHitToActor) == 0x000470, "Wrong size on BP_AAMachineGunBullet_C_OnHitToActor");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, HitComp) == 0x000000, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::HitComp' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, OtherActor) == 0x000008, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, OtherComp) == 0x000010, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, Hit) == 0x000018, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::Hit' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_GetActorForwardVector_ReturnValue) == 0x000100, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_bBlockingHit) == 0x000118, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_bInitialOverlap) == 0x000119, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_Time) == 0x00011C, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_Distance) == 0x000120, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_Location) == 0x000128, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_ImpactPoint) == 0x000140, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_Normal) == 0x000158, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_ImpactNormal) == 0x000170, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_PhysMat) == 0x000188, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_HitActor) == 0x000190, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_HitComponent) == 0x000198, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_HitBoneName) == 0x0001A0, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_BoneName) == 0x0001A8, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_HitItem) == 0x0001B0, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_ElementIndex) == 0x0001B4, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_FaceIndex) == 0x0001B8, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_TraceStart) == 0x0001C0, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_BreakHitResult_TraceEnd) == 0x0001D8, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_IsWildNPC_ReturnValue) == 0x0001F0, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_IsWildNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_GetOwner_ReturnValue) == 0x0001F8, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_GetWeaponDamage_ReturnValue) == 0x000200, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_GetOwner_ReturnValue_1) == 0x000208, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, K2Node_MakeStruct_PalMakeDamageInfo) == 0x000210, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::K2Node_MakeStruct_PalMakeDamageInfo' has a wrong offset!");
static_assert(offsetof(BP_AAMachineGunBullet_C_OnHitToActor, CallFunc_MakeDamageInfo_ReturnValue) == 0x0003A0, "Member 'BP_AAMachineGunBullet_C_OnHitToActor::CallFunc_MakeDamageInfo_ReturnValue' has a wrong offset!");

}

