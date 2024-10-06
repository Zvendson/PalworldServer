#pragma once

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C.ExecuteUbergraph_BP_TreasureBoxVisual_Base
// 0x0058 (0x0058 - 0x0000)
struct BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_NotifyName;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base) == 0x000008, "Wrong alignment on BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base");
static_assert(sizeof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base) == 0x000058, "Wrong size on BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, EntryPoint) == 0x000000, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, Temp_bool_Has_Been_Initd_Variable) == 0x000014, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, Temp_bool_IsClosed_Variable) == 0x000015, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_HasAuthority_ReturnValue) == 0x000016, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_Montage_Play_ReturnValue) == 0x000020, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, K2Node_Event_NotifyName) == 0x000038, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::K2Node_Event_NotifyName' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000040, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, K2Node_Event_EndPlayReason) == 0x000041, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000050, "Member 'BP_TreasureBoxVisual_Base_C_ExecuteUbergraph_BP_TreasureBoxVisual_Base::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C.OnPlayMontageNotifyBegin_BP
// 0x0008 (0x0008 - 0x0000)
struct BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP) == 0x000004, "Wrong alignment on BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP");
static_assert(sizeof(BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP) == 0x000008, "Wrong size on BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP, NotifyName) == 0x000000, "Member 'BP_TreasureBoxVisual_Base_C_OnPlayMontageNotifyBegin_BP::NotifyName' has a wrong offset!");

// Function BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C.PlayEffectAndSound
// 0x0020 (0x0020 - 0x0000)
struct BP_TreasureBoxVisual_Base_C_PlayEffectAndSound final
{
public:
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0000(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxVisual_Base_C_PlayEffectAndSound) == 0x000008, "Wrong alignment on BP_TreasureBoxVisual_Base_C_PlayEffectAndSound");
static_assert(sizeof(BP_TreasureBoxVisual_Base_C_PlayEffectAndSound) == 0x000020, "Wrong size on BP_TreasureBoxVisual_Base_C_PlayEffectAndSound");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_PlayEffectAndSound, Temp_delegate_Variable) == 0x000000, "Member 'BP_TreasureBoxVisual_Base_C_PlayEffectAndSound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_PlayEffectAndSound, CallFunc_PostEvent_ReturnValue) == 0x000010, "Member 'BP_TreasureBoxVisual_Base_C_PlayEffectAndSound::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_PlayEffectAndSound, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000018, "Member 'BP_TreasureBoxVisual_Base_C_PlayEffectAndSound::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

// Function BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_TreasureBoxVisual_Base_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxVisual_Base_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_TreasureBoxVisual_Base_C_ReceiveEndPlay");
static_assert(sizeof(BP_TreasureBoxVisual_Base_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_TreasureBoxVisual_Base_C_ReceiveEndPlay");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_TreasureBoxVisual_Base_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_TreasureBoxVisual_Base.BP_TreasureBoxVisual_Base_C.SetNoCollisionAllMesh
// 0x0038 (0x0038 - 0x0000)
struct BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh) == 0x000008, "Wrong alignment on BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh");
static_assert(sizeof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh) == 0x000038, "Wrong size on BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_TreasureBoxVisual_Base_C_SetNoCollisionAllMesh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

