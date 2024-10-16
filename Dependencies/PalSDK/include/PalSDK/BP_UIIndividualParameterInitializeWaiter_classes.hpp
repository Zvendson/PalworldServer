#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_UIIndividualParameterInitializeWaiter.BP_UIIndividualParameterInitializeWaiter_C
// 0x0020 (0x0048 - 0x0028)
class UBP_UIIndividualParameterInitializeWaiter_C final : public UObject
{
public:
	class APalCharacter*                          RegisteredCharacter;                               // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnComplete;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           CheckIndividualParameterTimerHandle;               // 0x0040(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void CheckIndividual();
	void OnComplete__DelegateSignature(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject);
	void OnCompleteInitiaize(class APalCharacter* Character);
	void Register(class APalCharacter* TargetCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIIndividualParameterInitializeWaiter_C">();
	}
	static class UBP_UIIndividualParameterInitializeWaiter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIIndividualParameterInitializeWaiter_C>();
	}
};
static_assert(alignof(UBP_UIIndividualParameterInitializeWaiter_C) == 0x000008, "Wrong alignment on UBP_UIIndividualParameterInitializeWaiter_C");
static_assert(sizeof(UBP_UIIndividualParameterInitializeWaiter_C) == 0x000048, "Wrong size on UBP_UIIndividualParameterInitializeWaiter_C");
static_assert(offsetof(UBP_UIIndividualParameterInitializeWaiter_C, RegisteredCharacter) == 0x000028, "Member 'UBP_UIIndividualParameterInitializeWaiter_C::RegisteredCharacter' has a wrong offset!");
static_assert(offsetof(UBP_UIIndividualParameterInitializeWaiter_C, OnComplete) == 0x000030, "Member 'UBP_UIIndividualParameterInitializeWaiter_C::OnComplete' has a wrong offset!");
static_assert(offsetof(UBP_UIIndividualParameterInitializeWaiter_C, CheckIndividualParameterTimerHandle) == 0x000040, "Member 'UBP_UIIndividualParameterInitializeWaiter_C::CheckIndividualParameterTimerHandle' has a wrong offset!");

}

