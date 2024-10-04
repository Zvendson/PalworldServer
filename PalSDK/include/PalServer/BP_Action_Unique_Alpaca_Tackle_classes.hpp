#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionUniqueAttackBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C
// 0x0010 (0x0220 - 0x0210)
class UBP_Action_Unique_Alpaca_Tackle_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_Alpaca_Tackle_C;   // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UniqueSkillModule_Tackle_C*         TackleModule;                                      // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle(int32 EntryPoint);
	void OnBeginAction();
	void OnCompletedEndMontage();
	void OnEndAction();
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_Alpaca_Tackle_C">();
	}
	static class UBP_Action_Unique_Alpaca_Tackle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_Alpaca_Tackle_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_Alpaca_Tackle_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_Alpaca_Tackle_C");
static_assert(sizeof(UBP_Action_Unique_Alpaca_Tackle_C) == 0x000220, "Wrong size on UBP_Action_Unique_Alpaca_Tackle_C");
static_assert(offsetof(UBP_Action_Unique_Alpaca_Tackle_C, UberGraphFrame_BP_Action_Unique_Alpaca_Tackle_C) == 0x000210, "Member 'UBP_Action_Unique_Alpaca_Tackle_C::UberGraphFrame_BP_Action_Unique_Alpaca_Tackle_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Alpaca_Tackle_C, TackleModule) == 0x000218, "Member 'UBP_Action_Unique_Alpaca_Tackle_C::TackleModule' has a wrong offset!");

}

