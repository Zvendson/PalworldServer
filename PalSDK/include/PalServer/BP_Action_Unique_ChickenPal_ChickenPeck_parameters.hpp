#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RotateToTarget_DeltaTime_ImplicitCast;    // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck) == 0x000008, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck) == 0x0000B8, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CustomEvent_NotifyName_4) == 0x000018, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CustomEvent_NotifyName_3) == 0x000020, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CustomEvent_NotifyName_2) == 0x000038, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CustomEvent_NotifyName_1) == 0x000050, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CreateDelegate_OutputDelegate_3) == 0x000058, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CustomEvent_NotifyName) == 0x000068, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, K2Node_CreateDelegate_OutputDelegate_4) == 0x000070, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, Temp_name_Variable) == 0x000080, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000090, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_GetMainMesh_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000A0, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck, CallFunc_RotateToTarget_DeltaTime_ImplicitCast) == 0x0000B0, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck::CallFunc_RotateToTarget_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542) == 0x000008, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542, NotifyName) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.OnCompleted_1E7C304942F556D76DE16F9CBBB0C542
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542) == 0x000008, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542, NotifyName) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_OnCompleted_1E7C304942F556D76DE16F9CBBB0C542::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542) == 0x000008, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542, NotifyName) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542) == 0x000008, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542, NotifyName) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542) == 0x000008, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542, NotifyName) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.RotateToTarget
// 0x00F0 (0x00F0 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_GetPosition_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget) == 0x000008, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget) == 0x0000F0, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_GetTargetLocation_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000028, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_FindLookAtRotation_ReturnValue) == 0x000048, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_GetAnimInstance_ReturnValue) == 0x000060, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_Montage_GetPosition_ReturnValue) == 0x000074, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_Montage_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_MakeRotator_ReturnValue) == 0x000078, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000090, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000091, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000B0, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_RInterpTo_ReturnValue) == 0x0000B8, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000D0, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_RInterpTo_DeltaTime_ImplicitCast) == 0x0000D4, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_RInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_RInterpTo_InterpSpeed_ImplicitCast) == 0x0000D8, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_RInterpTo_InterpSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x0000E0, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget, CallFunc_Less_DoubleDouble_A_ImplicitCast_1) == 0x0000E8, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_RotateToTarget::CallFunc_Less_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

// Function BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction");
static_assert(sizeof(BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction) == 0x000004, "Wrong size on BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction");
static_assert(offsetof(BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_ChickenPal_ChickenPeck_C_TickAction::DeltaTime' has a wrong offset!");

}

