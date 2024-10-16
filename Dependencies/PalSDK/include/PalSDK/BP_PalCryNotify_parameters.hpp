#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalCryNotify.BP_PalCryNotify_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct BP_PalCryNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCryNotify_C_Received_Notify) == 0x000008, "Wrong alignment on BP_PalCryNotify_C_Received_Notify");
static_assert(sizeof(BP_PalCryNotify_C_Received_Notify) == 0x000060, "Wrong size on BP_PalCryNotify_C_Received_Notify");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_PalCryNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, Animation) == 0x000008, "Member 'BP_PalCryNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_PalCryNotify_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, ReturnValue) == 0x000038, "Member 'BP_PalCryNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_RandomInteger_ReturnValue) == 0x00003C, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCryNotify_C_Received_Notify, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00005C, "Member 'BP_PalCryNotify_C_Received_Notify::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");

}

