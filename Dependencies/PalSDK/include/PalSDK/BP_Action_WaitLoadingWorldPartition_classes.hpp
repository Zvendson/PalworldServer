#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"
#include "EGroundHitResult_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_WaitLoadingWorldPartition.BP_Action_WaitLoadingWorldPartition_C
// 0x0070 (0x01B0 - 0x0140)
class UBP_Action_WaitLoadingWorldPartition_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayTime;                                         // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DelayTimer;                                        // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    PlayerCharacter;                                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TimeoutTimer;                                      // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoaded;                                          // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WaitWPLocation;                                    // 0x0178(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0190(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ForGroundTimer;                                    // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ForWaterTimer;                                     // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShortRayLength;                                  // 0x01A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CanTimeOut(bool* CanTimeOut_0);
	void CheckEndAction(double DeltaTime, bool* IsEnd);
	void CheckGround(EGroundHitResult* Result);
	void CheckLoadLocationDistance(bool* IsReWait);
	void ExecuteUbergraph_BP_Action_WaitLoadingWorldPartition(int32 EntryPoint);
	void GetFadeInParameter(class UPalHUDDispatchParameter_FadeWidget** NewParam);
	void IsWaterActor(class AActor* TargetActor, bool* IsWater);
	void OnBeginAction();
	void OnBreakAction();
	void OnCompleteLoad();
	void OnEndAction();
	void RequestWaitWorldPartition();
	void ResetCamera();
	void SetMoveDisable(bool Disable);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_WaitLoadingWorldPartition_C">();
	}
	static class UBP_Action_WaitLoadingWorldPartition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_WaitLoadingWorldPartition_C>();
	}
};
static_assert(alignof(UBP_Action_WaitLoadingWorldPartition_C) == 0x000010, "Wrong alignment on UBP_Action_WaitLoadingWorldPartition_C");
static_assert(sizeof(UBP_Action_WaitLoadingWorldPartition_C) == 0x0001B0, "Wrong size on UBP_Action_WaitLoadingWorldPartition_C");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_WaitLoadingWorldPartition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, FlagName) == 0x000148, "Member 'UBP_Action_WaitLoadingWorldPartition_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, DelayTime) == 0x000150, "Member 'UBP_Action_WaitLoadingWorldPartition_C::DelayTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, DelayTimer) == 0x000158, "Member 'UBP_Action_WaitLoadingWorldPartition_C::DelayTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, PlayerCharacter) == 0x000160, "Member 'UBP_Action_WaitLoadingWorldPartition_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, TimeoutTimer) == 0x000168, "Member 'UBP_Action_WaitLoadingWorldPartition_C::TimeoutTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, IsLoaded) == 0x000170, "Member 'UBP_Action_WaitLoadingWorldPartition_C::IsLoaded' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, WaitWPLocation) == 0x000178, "Member 'UBP_Action_WaitLoadingWorldPartition_C::WaitWPLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, TimerHandle) == 0x000190, "Member 'UBP_Action_WaitLoadingWorldPartition_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, ForGroundTimer) == 0x000198, "Member 'UBP_Action_WaitLoadingWorldPartition_C::ForGroundTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, ForWaterTimer) == 0x0001A0, "Member 'UBP_Action_WaitLoadingWorldPartition_C::ForWaterTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_WaitLoadingWorldPartition_C, IsShortRayLength) == 0x0001A8, "Member 'UBP_Action_WaitLoadingWorldPartition_C::IsShortRayLength' has a wrong offset!");

}

