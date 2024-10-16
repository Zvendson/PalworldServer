#pragma once

#include "Basic.hpp"

#include "BP_AnimNotify_PlaySound_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C
// 0x0010 (0x0098 - 0x0088)
class UBP_AnimNotify_PlayWingSound_C final : public UBP_AnimNotify_PlaySound_C
{
public:
	class FString                                 Switch_Group;                                      // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AnimNotify_PlayWingSound_C">();
	}
	static class UBP_AnimNotify_PlayWingSound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_PlayWingSound_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_PlayWingSound_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_PlayWingSound_C");
static_assert(sizeof(UBP_AnimNotify_PlayWingSound_C) == 0x000098, "Wrong size on UBP_AnimNotify_PlayWingSound_C");
static_assert(offsetof(UBP_AnimNotify_PlayWingSound_C, Switch_Group) == 0x000088, "Member 'UBP_AnimNotify_PlayWingSound_C::Switch_Group' has a wrong offset!");

}

