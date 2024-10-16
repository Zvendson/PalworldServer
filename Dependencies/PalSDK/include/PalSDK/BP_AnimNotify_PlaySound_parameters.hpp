#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.Received_Notify
// 0x0040 (0x0040 - 0x0000)
struct BP_AnimNotify_PlaySound_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGame_ReturnValue;                       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_PlaySound_C_Received_Notify) == 0x000008, "Wrong alignment on BP_AnimNotify_PlaySound_C_Received_Notify");
static_assert(sizeof(BP_AnimNotify_PlaySound_C_Received_Notify) == 0x000040, "Wrong size on BP_AnimNotify_PlaySound_C_Received_Notify");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, Animation) == 0x000008, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, ReturnValue) == 0x000038, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, CallFunc_IsGame_ReturnValue) == 0x000039, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::CallFunc_IsGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_Received_Notify, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'BP_AnimNotify_PlaySound_C_Received_Notify::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.PlaySoundEditor
// 0x0020 (0x0020 - 0x0000)
struct BP_AnimNotify_PlaySound_C_PlaySoundEditor final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_None;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_PlaySound_C_PlaySoundEditor) == 0x000008, "Wrong alignment on BP_AnimNotify_PlaySound_C_PlaySoundEditor");
static_assert(sizeof(BP_AnimNotify_PlaySound_C_PlaySoundEditor) == 0x000020, "Wrong size on BP_AnimNotify_PlaySound_C_PlaySoundEditor");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySoundEditor, MeshComp) == 0x000000, "Member 'BP_AnimNotify_PlaySound_C_PlaySoundEditor::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySoundEditor, Name_None) == 0x000008, "Member 'BP_AnimNotify_PlaySound_C_PlaySoundEditor::Name_None' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySoundEditor, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_AnimNotify_PlaySound_C_PlaySoundEditor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySoundEditor, CallFunc_NotEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_AnimNotify_PlaySound_C_PlaySoundEditor::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C.PlaySound
// 0x0030 (0x0030 - 0x0000)
struct BP_AnimNotify_PlaySound_C_PlaySound final
{
public:
	class UMeshComponent*                         MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_None;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AnimNotify_PlaySound_C_PlaySound) == 0x000008, "Wrong alignment on BP_AnimNotify_PlaySound_C_PlaySound");
static_assert(sizeof(BP_AnimNotify_PlaySound_C_PlaySound) == 0x000030, "Wrong size on BP_AnimNotify_PlaySound_C_PlaySound");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, MeshComp) == 0x000000, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, Name_None) == 0x000008, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::Name_None' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000010, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, CallFunc_IsDead_ReturnValue) == 0x000028, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_PlaySound_C_PlaySound, CallFunc_NotEqual_NameName_ReturnValue) == 0x000029, "Member 'BP_AnimNotify_PlaySound_C_PlaySound::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

}

