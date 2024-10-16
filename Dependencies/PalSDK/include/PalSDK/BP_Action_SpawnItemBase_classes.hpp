#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_SpawnItemBase.BP_Action_SpawnItemBase_C
// 0x0050 (0x01C0 - 0x0170)
class UBP_Action_SpawnItemBase_C : public UPalActionSpawnItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0170(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimInstance*                          AnimInst;                                          // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          ActionCharacter;                                   // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ChargeMontage;                                     // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFnishByAbortMontage;                             // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFacialComponent*                    Facial;                                            // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalFacialEyeType                             ChargeFacialEye;                                   // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ChargeTimer;                                       // 0x01A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           FunMontage;                                        // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPalFacialEyeType                             FunFacialEye;                                      // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StopFunMontage();
	void StopChargeMontage();
	void StartFun();
	void OnNotifyEnd_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnNotifyEnd_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnNotifyBegin_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnNotifyBegin_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnInterrupted_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnInterrupted_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnEndAction();
	void OnCompleted_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnCompleted_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnBlendOut_2FFE26C44850576E346494ABF0A5DD9A(class FName NotifyName);
	void OnBlendOut_06AF58594525DF9FB23A808FEC71D691(class FName NotifyName);
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_SpawnItemBase(int32 EntryPoint);
	void EndProc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_SpawnItemBase_C">();
	}
	static class UBP_Action_SpawnItemBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_SpawnItemBase_C>();
	}
};
static_assert(alignof(UBP_Action_SpawnItemBase_C) == 0x000010, "Wrong alignment on UBP_Action_SpawnItemBase_C");
static_assert(sizeof(UBP_Action_SpawnItemBase_C) == 0x0001C0, "Wrong size on UBP_Action_SpawnItemBase_C");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, UberGraphFrame) == 0x000170, "Member 'UBP_Action_SpawnItemBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, AnimInst) == 0x000178, "Member 'UBP_Action_SpawnItemBase_C::AnimInst' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, ActionCharacter) == 0x000180, "Member 'UBP_Action_SpawnItemBase_C::ActionCharacter' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, ChargeMontage) == 0x000188, "Member 'UBP_Action_SpawnItemBase_C::ChargeMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, IsFnishByAbortMontage) == 0x000190, "Member 'UBP_Action_SpawnItemBase_C::IsFnishByAbortMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, Facial) == 0x000198, "Member 'UBP_Action_SpawnItemBase_C::Facial' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, ChargeFacialEye) == 0x0001A0, "Member 'UBP_Action_SpawnItemBase_C::ChargeFacialEye' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, ChargeTimer) == 0x0001A8, "Member 'UBP_Action_SpawnItemBase_C::ChargeTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, FunMontage) == 0x0001B0, "Member 'UBP_Action_SpawnItemBase_C::FunMontage' has a wrong offset!");
static_assert(offsetof(UBP_Action_SpawnItemBase_C, FunFacialEye) == 0x0001B8, "Member 'UBP_Action_SpawnItemBase_C::FunFacialEye' has a wrong offset!");

}

