#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack
// 0x01A0 (0x01A0 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetMontage_NewParam;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindSpawnLocation_Location;               // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0100(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetEffect_NewParam;                       // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffectBase_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack) == 0x000010, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack) == 0x0001A0, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetMontage_NewParam) == 0x000008, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetMontage_NewParam' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CustomEvent_NotifyName_4) == 0x000010, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CustomEvent_NotifyName_3) == 0x000018, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CustomEvent_NotifyName_2) == 0x000030, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CustomEvent_NotifyName_1) == 0x000048, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CreateDelegate_OutputDelegate_2) == 0x000050, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CustomEvent_NotifyName) == 0x000060, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CreateDelegate_OutputDelegate_3) == 0x000068, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, Temp_name_Variable) == 0x000078, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000080, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000A0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000B8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000C0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000D8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_FindSpawnLocation_Location) == 0x0000E0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_FindSpawnLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_MakeTransform_ReturnValue) == 0x000100, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000160, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_GetEffect_NewParam) == 0x000168, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_GetEffect_NewParam' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000170, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000188, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack, CallFunc_FinishSpawningActor_ReturnValue) == 0x000190, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.FindSpawnLocation
// 0x0278 (0x0278 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPos;                                            // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartPos;                                          // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0048(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue_1;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A3[0x1];                                      // 0x01A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation) == 0x000008, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation) == 0x000278, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, Location) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, EndPos) == 0x000018, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::EndPos' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, StartPos) == 0x000030, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::StartPos' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, Temp_object_Variable) == 0x000048, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_GetTargetLocation_ReturnValue) == 0x000058, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_GetTargetLocation_ReturnValue_1) == 0x000070, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_GetTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000A0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_LineTraceSingle_OutHit) == 0x0000B8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_LineTraceSingle_ReturnValue) == 0x0001A0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_bBlockingHit) == 0x0001A1, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001A2, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_Time) == 0x0001A4, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_Distance) == 0x0001A8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_Location) == 0x0001B0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_Normal) == 0x0001E0, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F8, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_PhysMat) == 0x000210, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_HitActor) == 0x000218, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_HitComponent) == 0x000220, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_HitBoneName) == 0x000228, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_BoneName) == 0x000230, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_HitItem) == 0x000238, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_ElementIndex) == 0x00023C, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_FaceIndex) == 0x000240, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_TraceStart) == 0x000248, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation, CallFunc_BreakHitResult_TraceEnd) == 0x000260, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_FindSpawnLocation::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.GetEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect) == 0x000008, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect, NewParam) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetEffect::NewParam' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.GetMontage
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage final
{
public:
	class UAnimMontage*                           NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage) == 0x000008, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage, NewParam) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_GetMontage::NewParam' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A) == 0x000004, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A, NotifyName) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnCompleted_090DDDA44FFC5FC760FE0895EF53957A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A) == 0x000004, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A, NotifyName) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnCompleted_090DDDA44FFC5FC760FE0895EF53957A::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A) == 0x000004, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A, NotifyName) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A) == 0x000004, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A, NotifyName) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C.OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A) == 0x000004, "Wrong alignment on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(sizeof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A) == 0x000008, "Wrong size on BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A");
static_assert(offsetof(BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A, NotifyName) == 0x000000, "Member 'BP_Action_Unique_VolcanicMonster_MagmaAttack_C_OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A::NotifyName' has a wrong offset!");

}

