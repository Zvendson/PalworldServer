#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai
// 0x03A8 (0x03A8 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_8;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_7;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_6;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_5;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_8;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_AdjustActorToFloor_ReturnValue;           // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_4;         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_5;         // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_9;                   // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_6;         // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_10;           // 0x0208(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalculateTeleportDestination_Destination; // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x02B0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A[0x6];                                      // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CalculateTeleportDestination_SearchDegree_ImplicitCast; // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai) == 0x000008, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai) == 0x0003A8, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, EntryPoint) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_8) == 0x000004, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_8' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_7) == 0x00001C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_7' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_6) == 0x000034, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_6' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_5) == 0x00004C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_5' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, Temp_name_Variable) == 0x000064, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00007C, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_4) == 0x000080, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_3) == 0x000088, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_2) == 0x0000A0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000A8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_1) == 0x0000B8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000C0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName) == 0x0000D0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000D8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, Temp_name_Variable_1) == 0x0000E8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue) == 0x0000F0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000F8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetMainMesh_ReturnValue) == 0x000100, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000108, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000118, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000120, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000138, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_9) == 0x000140, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000150, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000158, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_AdjustActorToFloor_ReturnValue) == 0x000160, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_AdjustActorToFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000168, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_4) == 0x000170, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000178, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetMainMesh_ReturnValue_1) == 0x000180, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000188, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1) == 0x0001A0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001B0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x0001C8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_5) == 0x0001D0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0001D8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CustomEvent_NotifyName_9) == 0x0001F0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CustomEvent_NotifyName_9' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_Event_DeltaTime) == 0x0001F8, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetActionCharacter_ReturnValue_6) == 0x000200, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetActionCharacter_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, K2Node_CreateDelegate_OutputDelegate_10) == 0x000208, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_GetUniqueActionTarget_TargetActor) == 0x000218, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_IsValid_ReturnValue_2) == 0x000220, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000228, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000240, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_MakeRotFromX_ReturnValue) == 0x000258, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_BreakRotator_Roll) == 0x000270, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_BreakRotator_Pitch) == 0x000274, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_BreakRotator_Yaw) == 0x000278, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_CalculateTeleportDestination_Destination) == 0x000280, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_CalculateTeleportDestination_Destination' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_MakeRotator_ReturnValue) == 0x000298, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0002B0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000398, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000399, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai, CallFunc_CalculateTeleportDestination_SearchDegree_ImplicitCast) == 0x0003A0, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai::CallFunc_CalculateTeleportDestination_SearchDegree_ImplicitCast' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.GetUniqueActionTarget
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget) == 0x000008, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget) == 0x000030, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, TargetActor) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, CallFunc_GetUniqueActionTarget_TargetActor) == 0x000008, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000018, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, K2Node_DynamicCast_AsPal_Character) == 0x000020, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget, CallFunc_GetActiveActorFlag_ReturnValue) == 0x00002A, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_GetUniqueActionTarget::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnBlendOut_732CA01643E23EB854BEF392184417D7
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_732CA01643E23EB854BEF392184417D7::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnCompleted_732CA01643E23EB854BEF392184417D7
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_732CA01643E23EB854BEF392184417D7::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnCompleted_DC63DA2F428FC4018668BB9B92E626E6
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnCompleted_DC63DA2F428FC4018668BB9B92E626E6::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnInterrupted_732CA01643E23EB854BEF392184417D7
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_732CA01643E23EB854BEF392184417D7::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyBegin_732CA01643E23EB854BEF392184417D7
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_732CA01643E23EB854BEF392184417D7::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyEnd_732CA01643E23EB854BEF392184417D7
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_732CA01643E23EB854BEF392184417D7::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6) == 0x000008, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6, NotifyName) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6::NotifyName' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.SetPalMoveState
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState) == 0x000008, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState) == 0x000018, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState, IsDisable) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_SetPalMoveState::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_UniqueSkill_Ronin_Iai_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_UniqueSkill_Ronin_Iai_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_UniqueSkill_Ronin_Iai_C_TickAction");
static_assert(sizeof(BP_Action_UniqueSkill_Ronin_Iai_C_TickAction) == 0x000004, "Wrong size on BP_Action_UniqueSkill_Ronin_Iai_C_TickAction");
static_assert(offsetof(BP_Action_UniqueSkill_Ronin_Iai_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_UniqueSkill_Ronin_Iai_C_TickAction::DeltaTime' has a wrong offset!");

}

