#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AIModule_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C
// 0x0018 (0x0178 - 0x0160)
class UBP_AIAction_BaseCamp_Trantrum_C final : public UPalAIActionBaseCampTrantrum
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Timer;                                             // 0x0168(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum(int32 EntryPoint);
	void _________________________0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCamp_Trantrum_C">();
	}
	static class UBP_AIAction_BaseCamp_Trantrum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCamp_Trantrum_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCamp_Trantrum_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCamp_Trantrum_C");
static_assert(sizeof(UBP_AIAction_BaseCamp_Trantrum_C) == 0x000178, "Wrong size on UBP_AIAction_BaseCamp_Trantrum_C");
static_assert(offsetof(UBP_AIAction_BaseCamp_Trantrum_C, UberGraphFrame) == 0x000160, "Member 'UBP_AIAction_BaseCamp_Trantrum_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_BaseCamp_Trantrum_C, Timer) == 0x000168, "Member 'UBP_AIAction_BaseCamp_Trantrum_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_BaseCamp_Trantrum_C, Niagara) == 0x000170, "Member 'UBP_AIAction_BaseCamp_Trantrum_C::Niagara' has a wrong offset!");

}

