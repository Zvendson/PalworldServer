#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalCryNotify.BP_PalCryNotify_C
// 0x0018 (0x0050 - 0x0038)
class UBP_PalCryNotify_C final : public UAnimNotify
{
public:
	TArray<class FName>                           Emo_State;                                         // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         Probability;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCryNotify_C">();
	}
	static class UBP_PalCryNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalCryNotify_C>();
	}
};
static_assert(alignof(UBP_PalCryNotify_C) == 0x000008, "Wrong alignment on UBP_PalCryNotify_C");
static_assert(sizeof(UBP_PalCryNotify_C) == 0x000050, "Wrong size on UBP_PalCryNotify_C");
static_assert(offsetof(UBP_PalCryNotify_C, Emo_State) == 0x000038, "Member 'UBP_PalCryNotify_C::Emo_State' has a wrong offset!");
static_assert(offsetof(UBP_PalCryNotify_C, Probability) == 0x000048, "Member 'UBP_PalCryNotify_C::Probability' has a wrong offset!");

}

