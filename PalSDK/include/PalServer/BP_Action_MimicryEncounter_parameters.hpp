#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.ExecuteUbergraph_BP_Action_MimicryEncounter
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActionVelocity_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                Temp_byte_Variable;                                // 0x0090(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue_1;         // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_Map_Find_Value;                           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActionVelocity_ReturnValue_1;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter) == 0x000008, "Wrong alignment on BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter");
static_assert(sizeof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter) == 0x0001B0, "Wrong size on BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, EntryPoint) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionVelocity_ReturnValue) == 0x000008, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CustomEvent_NotifyName_4) == 0x000020, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CustomEvent_NotifyName_3) == 0x000028, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CustomEvent_NotifyName_2) == 0x000040, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CustomEvent_NotifyName_1) == 0x000058, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CreateDelegate_OutputDelegate_2) == 0x000060, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CustomEvent_NotifyName) == 0x000070, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CreateDelegate_OutputDelegate_3) == 0x000078, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, Temp_name_Variable) == 0x000088, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, Temp_byte_Variable) == 0x000090, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000098, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Conv_FloatToVector_ReturnValue_1) == 0x0000B0, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Conv_FloatToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000C8, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0000E0, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionCharacter_ReturnValue) == 0x0000F8, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetComponentByClass_ReturnValue) == 0x000100, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetMainMesh_ReturnValue) == 0x000108, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Map_Find_Value) == 0x000110, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Map_Find_ReturnValue) == 0x000118, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000120, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000128, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000130, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000140, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionVelocity_ReturnValue_1) == 0x000148, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Add_VectorVector_ReturnValue) == 0x000160, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, K2Node_CreateDelegate_OutputDelegate_4) == 0x000178, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000188, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_GetActionCharacter_ReturnValue_3) == 0x0001A0, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0001A8, "Member 'BP_Action_MimicryEncounter_C_ExecuteUbergraph_BP_Action_MimicryEncounter::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.OnBlendOut_41F883F24346AC8EA3076F98EE10BE03
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03) == 0x000004, "Wrong alignment on BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03");
static_assert(sizeof(BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03) == 0x000008, "Wrong size on BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03");
static_assert(offsetof(BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03, NotifyName) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_OnBlendOut_41F883F24346AC8EA3076F98EE10BE03::NotifyName' has a wrong offset!");

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.OnCompleted_41F883F24346AC8EA3076F98EE10BE03
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03) == 0x000004, "Wrong alignment on BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03");
static_assert(sizeof(BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03) == 0x000008, "Wrong size on BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03");
static_assert(offsetof(BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03, NotifyName) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_OnCompleted_41F883F24346AC8EA3076F98EE10BE03::NotifyName' has a wrong offset!");

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.OnInterrupted_41F883F24346AC8EA3076F98EE10BE03
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03) == 0x000004, "Wrong alignment on BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03");
static_assert(sizeof(BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03) == 0x000008, "Wrong size on BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03");
static_assert(offsetof(BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03, NotifyName) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_OnInterrupted_41F883F24346AC8EA3076F98EE10BE03::NotifyName' has a wrong offset!");

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03) == 0x000004, "Wrong alignment on BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03");
static_assert(sizeof(BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03) == 0x000008, "Wrong size on BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03");
static_assert(offsetof(BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03, NotifyName) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03::NotifyName' has a wrong offset!");

// Function BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C.OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03) == 0x000004, "Wrong alignment on BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03");
static_assert(sizeof(BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03) == 0x000008, "Wrong size on BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03");
static_assert(offsetof(BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03, NotifyName) == 0x000000, "Member 'BP_Action_MimicryEncounter_C_OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03::NotifyName' has a wrong offset!");

}

