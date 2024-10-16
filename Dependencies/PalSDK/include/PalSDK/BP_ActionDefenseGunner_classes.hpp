#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionDefenseGunner.BP_ActionDefenseGunner_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionDefenseGunner_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionDefenseGunner_C;           // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionDefenseGunner(int32 EntryPoint);
	void FindMontage(class UAnimMontage** Montage, bool* Exist);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDefenseGunner_C">();
	}
	static class UBP_ActionDefenseGunner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDefenseGunner_C>();
	}
};
static_assert(alignof(UBP_ActionDefenseGunner_C) == 0x000010, "Wrong alignment on UBP_ActionDefenseGunner_C");
static_assert(sizeof(UBP_ActionDefenseGunner_C) == 0x000170, "Wrong size on UBP_ActionDefenseGunner_C");
static_assert(offsetof(UBP_ActionDefenseGunner_C, UberGraphFrame_BP_ActionDefenseGunner_C) == 0x000168, "Member 'UBP_ActionDefenseGunner_C::UberGraphFrame_BP_ActionDefenseGunner_C' has a wrong offset!");

}

