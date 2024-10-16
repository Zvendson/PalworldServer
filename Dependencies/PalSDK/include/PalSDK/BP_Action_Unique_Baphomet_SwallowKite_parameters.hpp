#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite
// 0x0118 (0x0118 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetMontage_Montage;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetRotation_Rotation;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPalAnimInstance*                       CallFunc_GetPalAnimInstance_AnimInstance;          // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       CallFunc_GetPalAnimInstance_AnimInstance_1;        // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetMontage_Montage_1;                     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetRotation_DeltaTime_ImplicitCast;       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite) == 0x000008, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite) == 0x000118, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetMontage_Montage) == 0x000008, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetMontage_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CustomEvent_NotifyName_4) == 0x000010, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CustomEvent_NotifyName_3) == 0x000028, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CustomEvent_NotifyName_2) == 0x000040, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CustomEvent_NotifyName_1) == 0x000058, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate_3) == 0x000060, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CustomEvent_NotifyName) == 0x000070, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate_4) == 0x000078, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, Temp_name_Variable) == 0x000088, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetActionCharacter_ReturnValue) == 0x000090, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetMainMesh_ReturnValue) == 0x000098, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000A0, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_Event_DeltaTime) == 0x0000A8, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetRotation_Rotation) == 0x0000B0, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetRotation_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetPalAnimInstance_AnimInstance) == 0x0000C8, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetPalAnimInstance_AnimInstance' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000D0, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetPalAnimInstance_AnimInstance_1) == 0x0000E0, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetPalAnimInstance_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetActionCharacter_ReturnValue_2) == 0x0000E8, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000F0, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetMontage_Montage_1) == 0x0000F8, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetMontage_Montage_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000100, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite, CallFunc_GetRotation_DeltaTime_ImplicitCast) == 0x000110, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite::CallFunc_GetRotation_DeltaTime_ImplicitCast' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.GetMontage
// 0x0020 (0x0020 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBossPal_Database_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage) == 0x000008, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage) == 0x000020, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage, Montage) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage, CallFunc_IsBossPal_Database_ReturnValue) == 0x000018, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_GetMontage::CallFunc_IsBossPal_Database_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnBlendOut_7005D59D448F88E6383CA38524775CD3
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3) == 0x000008, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnBlendOut_7005D59D448F88E6383CA38524775CD3::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnCompleted_7005D59D448F88E6383CA38524775CD3
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3) == 0x000008, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnCompleted_7005D59D448F88E6383CA38524775CD3::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnInterrupted_7005D59D448F88E6383CA38524775CD3
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3) == 0x000008, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnInterrupted_7005D59D448F88E6383CA38524775CD3::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnMontageNotify
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify) == 0x000008, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify) == 0x000018, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify, Montage) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify, NotifyName) == 0x000008, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify::NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000010, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000011, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnMontageNotify::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnNotifyBegin_7005D59D448F88E6383CA38524775CD3
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3) == 0x000008, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyBegin_7005D59D448F88E6383CA38524775CD3::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.OnNotifyEnd_7005D59D448F88E6383CA38524775CD3
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3) == 0x000008, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_OnNotifyEnd_7005D59D448F88E6383CA38524775CD3::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Unique_Baphomet_SwallowKite_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Baphomet_SwallowKite_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Unique_Baphomet_SwallowKite_C_TickAction");
static_assert(sizeof(BP_Action_Unique_Baphomet_SwallowKite_C_TickAction) == 0x000004, "Wrong size on BP_Action_Unique_Baphomet_SwallowKite_C_TickAction");
static_assert(offsetof(BP_Action_Unique_Baphomet_SwallowKite_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Baphomet_SwallowKite_C_TickAction::DeltaTime' has a wrong offset!");

}

