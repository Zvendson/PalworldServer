#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_OtomoDefault.BP_AIAction_OtomoDefault_C
// 0x0008 (0x0058 - 0x0050)
class UBP_AIAction_OtomoDefault_C final : public UPalAIActionOtomoDefault
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AIAction_OtomoDefault(int32 EntryPoint);
	void Set_Action_Berserker(class AActor* Target);
	void SetAction(class UClass* Class_0);
	void SetActionBaseCampWork();
	void SetActionCombat();
	void SetActionComposite(class UClass* Class_0);
	void SetActionFollowTrainer();
	void SetActionWork();
	void SetOtomoBaseCampAction();
	void SetOtomoBerserker(class AActor* Target);
	void SetOtomoCombatAction();
	void SetOtomoFollowAction();
	void SetOtomoWorkAction();

	bool ShouldSetCombatAction() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_OtomoDefault_C">();
	}
	static class UBP_AIAction_OtomoDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_OtomoDefault_C>();
	}
};
static_assert(alignof(UBP_AIAction_OtomoDefault_C) == 0x000008, "Wrong alignment on UBP_AIAction_OtomoDefault_C");
static_assert(sizeof(UBP_AIAction_OtomoDefault_C) == 0x000058, "Wrong size on UBP_AIAction_OtomoDefault_C");
static_assert(offsetof(UBP_AIAction_OtomoDefault_C, UberGraphFrame) == 0x000050, "Member 'UBP_AIAction_OtomoDefault_C::UberGraphFrame' has a wrong offset!");

}

