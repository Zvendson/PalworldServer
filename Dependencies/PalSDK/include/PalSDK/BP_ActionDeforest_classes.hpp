#pragma once

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionDeforest.BP_ActionDeforest_C
// 0x0010 (0x0180 - 0x0170)
class UBP_ActionDeforest_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionDeforest_C;                // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ToolActor;                                         // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnEndAction();
	void OnBeginAnimNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionDeforest(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDeforest_C">();
	}
	static class UBP_ActionDeforest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDeforest_C>();
	}
};
static_assert(alignof(UBP_ActionDeforest_C) == 0x000010, "Wrong alignment on UBP_ActionDeforest_C");
static_assert(sizeof(UBP_ActionDeforest_C) == 0x000180, "Wrong size on UBP_ActionDeforest_C");
static_assert(offsetof(UBP_ActionDeforest_C, UberGraphFrame_BP_ActionDeforest_C) == 0x000168, "Member 'UBP_ActionDeforest_C::UberGraphFrame_BP_ActionDeforest_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionDeforest_C, FlagName) == 0x000170, "Member 'UBP_ActionDeforest_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionDeforest_C, ToolActor) == 0x000178, "Member 'UBP_ActionDeforest_C::ToolActor' has a wrong offset!");

}

