#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AnimNotify_PlaySound.BP_AnimNotify_PlaySound_C
// 0x0050 (0x0088 - 0x0038)
class UBP_AnimNotify_PlaySound_C final : public UAnimNotify
{
public:
	bool                                          Mute;                                              // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_SoundID           SoundId;                                           // 0x003C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                       SoundOption;                                       // 0x0044(0x0004)(Edit, BlueprintVisible, NoDestructor)
	class FName                                   SocketName;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   DebugSoundSlot;                                    // 0x0050(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EPhysicalSurface                              DebugPhysicsMaterial;                              // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	void PlaySoundEditor(class UMeshComponent* MeshComp) const;
	void PlaySound(class UMeshComponent* MeshComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_PlaySound_C">();
	}
	static class UBP_AnimNotify_PlaySound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_PlaySound_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_PlaySound_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_PlaySound_C");
static_assert(sizeof(UBP_AnimNotify_PlaySound_C) == 0x000088, "Wrong size on UBP_AnimNotify_PlaySound_C");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, Mute) == 0x000038, "Member 'UBP_AnimNotify_PlaySound_C::Mute' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, SoundId) == 0x00003C, "Member 'UBP_AnimNotify_PlaySound_C::SoundId' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, SoundOption) == 0x000044, "Member 'UBP_AnimNotify_PlaySound_C::SoundOption' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, SocketName) == 0x000048, "Member 'UBP_AnimNotify_PlaySound_C::SocketName' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, DebugSoundSlot) == 0x000050, "Member 'UBP_AnimNotify_PlaySound_C::DebugSoundSlot' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_PlaySound_C, DebugPhysicsMaterial) == 0x000080, "Member 'UBP_AnimNotify_PlaySound_C::DebugPhysicsMaterial' has a wrong offset!");

}

