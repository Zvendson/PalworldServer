#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.CollectTarget
// 0x0030 (0x0030 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_CollectTarget final
{
public:
	class AActor*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_GetCharacterApartFromPlayer_OutCharacters; // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_CollectTarget) == 0x000008, "Wrong alignment on BP_ThrowPal_ThrowObject_C_CollectTarget");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_CollectTarget) == 0x000030, "Wrong size on BP_ThrowPal_ThrowObject_C_CollectTarget");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, NewParam) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::NewParam' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, CallFunc_GetCharacterApartFromPlayer_OutCharacters) == 0x000018, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::CallFunc_GetCharacterApartFromPlayer_OutCharacters' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_CollectTarget, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_ThrowPal_ThrowObject_C_CollectTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.ExecuteUbergraph_BP_ThrowPal_ThrowObject
// 0x01F0 (0x01F0 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalControlActor_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoSpawnCollisionChecker*         CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_HitComp;                              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0058(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetCurrentSelectPalActor_ReturnValue;  // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLocation_WhenSpawnPalSphgereThrow_ReturnValue; // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0180(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateRotator_DeltaTime_ImplicitCast;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject) == 0x000010, "Wrong alignment on BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject) == 0x0001F0, "Wrong size on BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, EntryPoint) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_IsLocalControlActor_ReturnValue) == 0x000010, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_IsLocalControlActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_GetController_ReturnValue) == 0x000038, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, K2Node_Event_HitComp) == 0x000040, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::K2Node_Event_HitComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, K2Node_Event_OtherActor) == 0x000048, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, K2Node_Event_OtherComp) == 0x000050, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, K2Node_Event_Hit) == 0x000058, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_GetComponentByClass_ReturnValue) == 0x000140, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_TryGetCurrentSelectPalActor_ReturnValue) == 0x000150, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_TryGetCurrentSelectPalActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000158, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_IsValid_ReturnValue_1) == 0x000159, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_GetLocation_WhenSpawnPalSphgereThrow_ReturnValue) == 0x000160, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_GetLocation_WhenSpawnPalSphgereThrow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_MakeTransform_ReturnValue) == 0x000180, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject, CallFunc_UpdateRotator_DeltaTime_ImplicitCast) == 0x0001E0, "Member 'BP_ThrowPal_ThrowObject_C_ExecuteUbergraph_BP_ThrowPal_ThrowObject::CallFunc_UpdateRotator_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.FindNearEnemy
// 0x0058 (0x0058 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_FindNearEnemy final
{
public:
	class APalCharacter*                          OwnerCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OutputPin;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_OutMinRange;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_FindNearEnemy) == 0x000008, "Wrong alignment on BP_ThrowPal_ThrowObject_C_FindNearEnemy");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_FindNearEnemy) == 0x000058, "Wrong size on BP_ThrowPal_ThrowObject_C_FindNearEnemy");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, OwnerCharacter) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, OutputPin) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::OutputPin' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_GetGameSetting_ReturnValue) == 0x000010, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_GetNearestEnemyByLocation_OutMinRange) == 0x000030, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_GetNearestEnemyByLocation_OutMinRange' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_GetNearestEnemyByLocation_ReturnValue) == 0x000038, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_GetNearestEnemyByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_FindNearEnemy, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'BP_ThrowPal_ThrowObject_C_FindNearEnemy::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.OnHit
// 0x0100 (0x0100 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_OnHit final
{
public:
	class UPrimitiveComponent*                    HitComp;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0018(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_OnHit) == 0x000008, "Wrong alignment on BP_ThrowPal_ThrowObject_C_OnHit");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_OnHit) == 0x000100, "Wrong size on BP_ThrowPal_ThrowObject_C_OnHit");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_OnHit, HitComp) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_OnHit::HitComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_OnHit, OtherActor) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_OnHit::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_OnHit, OtherComp) == 0x000010, "Member 'BP_ThrowPal_ThrowObject_C_OnHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_OnHit, Hit) == 0x000018, "Member 'BP_ThrowPal_ThrowObject_C_OnHit::Hit' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.PostProcessSpawnOtomo
// 0x0050 (0x0050 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo final
{
public:
	class AActor*                                 HitActor;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          OtomoHolder;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OwnerCharacter;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindNearEnemy_OutputPin;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo) == 0x000008, "Wrong alignment on BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo) == 0x000050, "Wrong size on BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, HitActor) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::HitActor' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, OtomoHolder) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::OtomoHolder' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, OwnerCharacter) == 0x000010, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_FindNearEnemy_OutputPin) == 0x000018, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_FindNearEnemy_OutputPin' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_GetController_ReturnValue) == 0x000028, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000031, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_IsValid_ReturnValue_3) == 0x000040, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000048, "Member 'BP_ThrowPal_ThrowObject_C_PostProcessSpawnOtomo::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ThrowPal_ThrowObject_C_ReceiveTick");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_ReceiveTick) == 0x000004, "Wrong size on BP_ThrowPal_ThrowObject_C_ReceiveTick");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.SpawnOtomo
// 0x01D0 (0x01D0 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_SpawnOtomo final
{
public:
	class APalCharacter*                          SpawnOtomo_0;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo;   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLive_ReturnValue;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x00C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue; // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_SpawnOtomo) == 0x000010, "Wrong alignment on BP_ThrowPal_ThrowObject_C_SpawnOtomo");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_SpawnOtomo) == 0x0001D0, "Wrong size on BP_ThrowPal_ThrowObject_C_SpawnOtomo");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, SpawnOtomo_0) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::SpawnOtomo_0' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000020, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_GetController_ReturnValue) == 0x000028, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000040, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo) == 0x000058, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_Try_Get_Current_Active_Pal_Actor_Otomo' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_IsLive_ReturnValue) == 0x0000C0, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_IsLive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000C8, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001B0, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_AdjustActorToFloor_ReturnValue) == 0x0001B8, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_IsValid_ReturnValue_2) == 0x0001C0, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_IsValid_ReturnValue_3) == 0x0001C1, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_SpawnOtomo, CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue) == 0x0001C2, "Member 'BP_ThrowPal_ThrowObject_C_SpawnOtomo::CallFunc_ActivateCurrentOtomoNearThePlayer_ReturnValue' has a wrong offset!");

// Function BP_ThrowPal_ThrowObject.BP_ThrowPal_ThrowObject_C.UpdateRotator
// 0x0128 (0x0128 - 0x0000)
struct BP_ThrowPal_ThrowObject_C_UpdateRotator final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowPal_ThrowObject_C_UpdateRotator) == 0x000008, "Wrong alignment on BP_ThrowPal_ThrowObject_C_UpdateRotator");
static_assert(sizeof(BP_ThrowPal_ThrowObject_C_UpdateRotator) == 0x000128, "Wrong size on BP_ThrowPal_ThrowObject_C_UpdateRotator");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_UpdateRotator, DeltaTime) == 0x000000, "Member 'BP_ThrowPal_ThrowObject_C_UpdateRotator::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000008, "Member 'BP_ThrowPal_ThrowObject_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_UpdateRotator, CallFunc_ComposeRotators_ReturnValue) == 0x000020, "Member 'BP_ThrowPal_ThrowObject_C_UpdateRotator::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_UpdateRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_ThrowPal_ThrowObject_C_UpdateRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ThrowPal_ThrowObject_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_B_ImplicitCast) == 0x000120, "Member 'BP_ThrowPal_ThrowObject_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_B_ImplicitCast' has a wrong offset!");

}

