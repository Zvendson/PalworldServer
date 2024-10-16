#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C.Received_Notify
// 0x00B8 (0x00B8 - 0x0000)
struct BP_AnimNotify_PlayWingSound_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Received_Notify_ReturnValue;              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeSwitchStatePalSize_PalSize;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_PlayWingSound_C_Received_Notify) == 0x000008, "Wrong alignment on BP_AnimNotify_PlayWingSound_C_Received_Notify");
static_assert(sizeof(BP_AnimNotify_PlayWingSound_C_Received_Notify) == 0x0000B8, "Wrong size on BP_AnimNotify_PlayWingSound_C_Received_Notify");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, Animation) == 0x000008, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, ReturnValue) == 0x000038, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000058, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000061, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_Received_Notify_ReturnValue) == 0x000062, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_Received_Notify_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_MakeSwitchStatePalSize_PalSize) == 0x000068, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_MakeSwitchStatePalSize_PalSize' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue_1) == 0x000078, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue) == 0x000088, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'BP_AnimNotify_PlayWingSound_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C.MakeSwitchStatePalSize
// 0x0028 (0x0028 - 0x0000)
struct BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize final
{
public:
	class APalMonsterCharacter*                   Pal;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 PalSize;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize) == 0x000008, "Wrong alignment on BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize");
static_assert(sizeof(BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize) == 0x000028, "Wrong size on BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize, Pal) == 0x000000, "Member 'BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize::Pal' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize, PalSize) == 0x000008, "Member 'BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize::PalSize' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'BP_AnimNotify_PlayWingSound_C_MakeSwitchStatePalSize::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");

}

