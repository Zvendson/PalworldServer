#pragma once

#include "Basic.hpp"

#include "BP_ActionUniqueAttackBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_Baphomet_SwallowKite.BP_Action_Unique_Baphomet_SwallowKite_C
// 0x0010 (0x0220 - 0x0210)
class UBP_Action_Unique_Baphomet_SwallowKite_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_Baphomet_SwallowKite_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsHoming;                                          // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite(int32 EntryPoint);
	void GetMontage(class UAnimMontage** Montage);
	void OnBeginAction();
	void OnBlendOut_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnCompleted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnNotifyBegin_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void OnNotifyEnd_7005D59D448F88E6383CA38524775CD3(class FName NotifyName);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_Baphomet_SwallowKite_C">();
	}
	static class UBP_Action_Unique_Baphomet_SwallowKite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_Baphomet_SwallowKite_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_Baphomet_SwallowKite_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_Baphomet_SwallowKite_C");
static_assert(sizeof(UBP_Action_Unique_Baphomet_SwallowKite_C) == 0x000220, "Wrong size on UBP_Action_Unique_Baphomet_SwallowKite_C");
static_assert(offsetof(UBP_Action_Unique_Baphomet_SwallowKite_C, UberGraphFrame_BP_Action_Unique_Baphomet_SwallowKite_C) == 0x000210, "Member 'UBP_Action_Unique_Baphomet_SwallowKite_C::UberGraphFrame_BP_Action_Unique_Baphomet_SwallowKite_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_Baphomet_SwallowKite_C, IsHoming) == 0x000218, "Member 'UBP_Action_Unique_Baphomet_SwallowKite_C::IsHoming' has a wrong offset!");

}

