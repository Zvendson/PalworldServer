#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionSleepPlayerBed.BP_ActionSleepPlayerBed_C
// 0x00F0 (0x0240 - 0x0150)
class UBP_ActionSleepPlayerBed_C final : public UPalAction_SleepPlayerBed
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_158[0x8];                                      // 0x0158(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PlayerInitTF;                                      // 0x0160(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoCancelAble;                                    // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterHandle*>  SleepOtomoList;                                    // 0x01C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                          FadeInSound;                                       // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          FadeOutSound;                                      // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FadeInterval;                                      // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNightSkipStarted;                                // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FadeInTime;                                        // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeOutTime;                                       // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SleepEndDelay;                                     // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSleeping;                                        // 0x020C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20D[0x3];                                      // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FlagName;                                          // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GetupDelay;                                        // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x3];                                      // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GetupPlayerCameraAngleX;                           // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GetupPlayerCameraAngleZ;                           // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_224[0x4];                                      // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerBedCamera_C*                  BedCamera;                                         // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PrevViewTarget;                                    // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AttachBedCamera();
	void Check_Sleep_Loop();
	void Detach_Bed_Camera();
	void Disable_Movement(bool Disable);
	void DisableInteract(bool Disable);
	void DisableLocalPlayerInput(bool Disable);
	void DisableShooter(bool Disable);
	void ExecuteUbergraph_BP_ActionSleepPlayerBed(int32 EntryPoint);
	void FullRecoveryHPAll();
	void GetMontage(EPalGeneralMontageType GeneralMontage, class UAnimMontage** Montage);
	void IsPartyFullRecoverd(bool* Completed);
	void Movement_Set_Active(bool Active);
	void OnBeginAction();
	void OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName);
	void OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName);
	void OnEndAction();
	void OnGetupPlayerBedFromModel();
	void OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName);
	void OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName);
	void OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124(class FName NotifyName);
	void OnPreNightSkip();
	void OnSleepEndProcess();
	void OnSleepLoop();
	void SleepEndOtomo();
	void SleepStartOtomo();
	void TickAction(float DeltaTime);
	void TriggerGetup();

	bool IsSleepLooping() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSleepPlayerBed_C">();
	}
	static class UBP_ActionSleepPlayerBed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSleepPlayerBed_C>();
	}
};
static_assert(alignof(UBP_ActionSleepPlayerBed_C) == 0x000010, "Wrong alignment on UBP_ActionSleepPlayerBed_C");
static_assert(sizeof(UBP_ActionSleepPlayerBed_C) == 0x000240, "Wrong size on UBP_ActionSleepPlayerBed_C");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, UberGraphFrame) == 0x000150, "Member 'UBP_ActionSleepPlayerBed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, PlayerInitTF) == 0x000160, "Member 'UBP_ActionSleepPlayerBed_C::PlayerInitTF' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, AutoCancelAble) == 0x0001C0, "Member 'UBP_ActionSleepPlayerBed_C::AutoCancelAble' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, SleepOtomoList) == 0x0001C8, "Member 'UBP_ActionSleepPlayerBed_C::SleepOtomoList' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FadeInSound) == 0x0001D8, "Member 'UBP_ActionSleepPlayerBed_C::FadeInSound' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FadeOutSound) == 0x0001E0, "Member 'UBP_ActionSleepPlayerBed_C::FadeOutSound' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FadeInterval) == 0x0001E8, "Member 'UBP_ActionSleepPlayerBed_C::FadeInterval' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, IsNightSkipStarted) == 0x0001F0, "Member 'UBP_ActionSleepPlayerBed_C::IsNightSkipStarted' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FadeInTime) == 0x0001F8, "Member 'UBP_ActionSleepPlayerBed_C::FadeInTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FadeOutTime) == 0x000200, "Member 'UBP_ActionSleepPlayerBed_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, SleepEndDelay) == 0x000208, "Member 'UBP_ActionSleepPlayerBed_C::SleepEndDelay' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, IsSleeping) == 0x00020C, "Member 'UBP_ActionSleepPlayerBed_C::IsSleeping' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, FlagName) == 0x000210, "Member 'UBP_ActionSleepPlayerBed_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, GetupDelay) == 0x000218, "Member 'UBP_ActionSleepPlayerBed_C::GetupDelay' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, GetupPlayerCameraAngleX) == 0x00021C, "Member 'UBP_ActionSleepPlayerBed_C::GetupPlayerCameraAngleX' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, GetupPlayerCameraAngleZ) == 0x000220, "Member 'UBP_ActionSleepPlayerBed_C::GetupPlayerCameraAngleZ' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, BedCamera) == 0x000228, "Member 'UBP_ActionSleepPlayerBed_C::BedCamera' has a wrong offset!");
static_assert(offsetof(UBP_ActionSleepPlayerBed_C, PrevViewTarget) == 0x000230, "Member 'UBP_ActionSleepPlayerBed_C::PrevViewTarget' has a wrong offset!");

}

