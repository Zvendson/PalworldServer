#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionUniqueAttackBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_Unique_ChickenPal_ChickenPeck.BP_Action_Unique_ChickenPal_ChickenPeck_C
// 0x0020 (0x0230 - 0x0210)
class UBP_Action_Unique_ChickenPal_ChickenPeck_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_ChickenPal_ChickenPeck_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        RotateSpeed_0;                                     // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PreAttackTime;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AfterAttackTime;                                   // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnCompleted_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542(class FName NotifyName);
	void RotateToTarget(double DeltaTime);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_ChickenPal_ChickenPeck_C">();
	}
	static class UBP_Action_Unique_ChickenPal_ChickenPeck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_ChickenPal_ChickenPeck_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_ChickenPal_ChickenPeck_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_ChickenPal_ChickenPeck_C");
static_assert(sizeof(UBP_Action_Unique_ChickenPal_ChickenPeck_C) == 0x000230, "Wrong size on UBP_Action_Unique_ChickenPal_ChickenPeck_C");
static_assert(offsetof(UBP_Action_Unique_ChickenPal_ChickenPeck_C, UberGraphFrame_BP_Action_Unique_ChickenPal_ChickenPeck_C) == 0x000210, "Member 'UBP_Action_Unique_ChickenPal_ChickenPeck_C::UberGraphFrame_BP_Action_Unique_ChickenPal_ChickenPeck_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_ChickenPal_ChickenPeck_C, RotateSpeed_0) == 0x000218, "Member 'UBP_Action_Unique_ChickenPal_ChickenPeck_C::RotateSpeed_0' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_ChickenPal_ChickenPeck_C, PreAttackTime) == 0x000220, "Member 'UBP_Action_Unique_ChickenPal_ChickenPeck_C::PreAttackTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_ChickenPal_ChickenPeck_C, AfterAttackTime) == 0x000228, "Member 'UBP_Action_Unique_ChickenPal_ChickenPeck_C::AfterAttackTime' has a wrong offset!");

}

