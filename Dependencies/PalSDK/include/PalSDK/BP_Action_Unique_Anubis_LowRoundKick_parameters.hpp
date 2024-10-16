#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick
// 0x0180 (0x0180 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0090(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick) == 0x000010, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick) == 0x000180, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CustomEvent_NotifyName_4) == 0x000004, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CustomEvent_NotifyName_3) == 0x00001C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CustomEvent_NotifyName_2) == 0x000034, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CustomEvent_NotifyName_1) == 0x00004C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CustomEvent_NotifyName) == 0x000064, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, K2Node_CreateDelegate_OutputDelegate_4) == 0x00006C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, Temp_name_Variable) == 0x00007C, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_GetActionCharacter_ReturnValue) == 0x000088, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_GetTransform_ReturnValue) == 0x000090, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_GetMainMesh_ReturnValue) == 0x0000F0, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_BreakTransform_Location) == 0x0000F8, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_BreakTransform_Rotation) == 0x000110, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_BreakTransform_Scale) == 0x000128, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000140, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_Add_VectorVector_ReturnValue) == 0x000148, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000160, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000168, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.OnBlendOut_A59173C84007480E2273A5B14ED45DC4
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_OnBlendOut_A59173C84007480E2273A5B14ED45DC4::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.OnCompleted_A59173C84007480E2273A5B14ED45DC4
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_OnCompleted_A59173C84007480E2273A5B14ED45DC4::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.OnInterrupted_A59173C84007480E2273A5B14ED45DC4
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_OnInterrupted_A59173C84007480E2273A5B14ED45DC4::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C.OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4) == 0x000004, "Wrong alignment on BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4");
static_assert(sizeof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4) == 0x000008, "Wrong size on BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4");
static_assert(offsetof(BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4, NotifyName) == 0x000000, "Member 'BP_Action_Unique_Anubis_LowRoundKick_C_OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4::NotifyName' has a wrong offset!");

}

