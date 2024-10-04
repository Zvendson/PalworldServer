#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionReturnToBaseCamp.BP_ActionReturnToBaseCamp_C
// 0x0010 (0x0180 - 0x0170)
class UBP_ActionReturnToBaseCamp_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionReturnToBaseCamp_C;        // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionReturnToBaseCamp(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();
	void OnNotifyBegin(class FName NotifyName);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionReturnToBaseCamp_C">();
	}
	static class UBP_ActionReturnToBaseCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionReturnToBaseCamp_C>();
	}
};
static_assert(alignof(UBP_ActionReturnToBaseCamp_C) == 0x000010, "Wrong alignment on UBP_ActionReturnToBaseCamp_C");
static_assert(sizeof(UBP_ActionReturnToBaseCamp_C) == 0x000180, "Wrong size on UBP_ActionReturnToBaseCamp_C");
static_assert(offsetof(UBP_ActionReturnToBaseCamp_C, UberGraphFrame_BP_ActionReturnToBaseCamp_C) == 0x000168, "Member 'UBP_ActionReturnToBaseCamp_C::UberGraphFrame_BP_ActionReturnToBaseCamp_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionReturnToBaseCamp_C, FlagName) == 0x000170, "Member 'UBP_ActionReturnToBaseCamp_C::FlagName' has a wrong offset!");

}

