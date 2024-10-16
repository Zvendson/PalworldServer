#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SupplyDropActor_Meteor.BP_SupplyDropActor_Meteor_C.ExecuteUbergraph_BP_SupplyDropActor_Meteor
// 0x0070 (0x0070 - 0x0000)
struct BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor) == 0x000008, "Wrong alignment on BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor");
static_assert(sizeof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor) == 0x000070, "Wrong size on BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, EntryPoint) == 0x000000, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, Temp_delegate_Variable) == 0x000004, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000030, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000048, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000060, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor, CallFunc_PostEvent_ReturnValue) == 0x000068, "Member 'BP_SupplyDropActor_Meteor_C_ExecuteUbergraph_BP_SupplyDropActor_Meteor::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

}

