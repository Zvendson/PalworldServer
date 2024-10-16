#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_WeaselDragon_FlyingTackle.BP_Action_Unique_WeaselDragon_FlyingTackle_C
// 0x0030 (0x0180 - 0x0150)
class UBP_Action_Unique_WeaselDragon_FlyingTackle_C final : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsEndCheck;                                        // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartAttackTime;                                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndAttackTime;                                     // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RotatSpeed;                                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle(int32 EntryPoint);
	void GetTargetPosition(struct FVector* Position);
	void Lookat(double Speed);
	void OnBeginAction();
	void OnBlendOut_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName);
	void OnCompleted_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName);
	void OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName);
	void OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E(class FName NotifyName);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_WeaselDragon_FlyingTackle_C">();
	}
	static class UBP_Action_Unique_WeaselDragon_FlyingTackle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_WeaselDragon_FlyingTackle_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_WeaselDragon_FlyingTackle_C");
static_assert(sizeof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C) == 0x000180, "Wrong size on UBP_Action_Unique_WeaselDragon_FlyingTackle_C");
static_assert(offsetof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C, UberGraphFrame) == 0x000150, "Member 'UBP_Action_Unique_WeaselDragon_FlyingTackle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C, IsEndCheck) == 0x000158, "Member 'UBP_Action_Unique_WeaselDragon_FlyingTackle_C::IsEndCheck' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C, StartAttackTime) == 0x000160, "Member 'UBP_Action_Unique_WeaselDragon_FlyingTackle_C::StartAttackTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C, EndAttackTime) == 0x000168, "Member 'UBP_Action_Unique_WeaselDragon_FlyingTackle_C::EndAttackTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_WeaselDragon_FlyingTackle_C, RotatSpeed) == 0x000170, "Member 'UBP_Action_Unique_WeaselDragon_FlyingTackle_C::RotatSpeed' has a wrong offset!");

}

