#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C
// 0x0030 (0x0278 - 0x0248)
class UBP_MapObjectPlayerBedModel_C final : public UPalMapObjectPlayerBedModel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 SleepActionClass;                                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PrevViewTarget;                                    // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SleepPlayer;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerBedCamera_C*                  Camera;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CameraBeginBlendTime;                              // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraEndBlendTime;                                // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnTriggerInteract_SleepPlayerBed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void ExecuteUbergraph_BP_MapObjectPlayerBedModel(int32 EntryPoint);
	bool IsSleepingInteractor(class APalCharacter* Character);
	void OnBeginSleep(class AActor* Other);
	void PutPlayerToSleep(class UPalIndividualCharacterHandle* CharacterHandle);
	void Setup(const struct FVector& FixPos, const struct FRotator& BedRotate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObjectPlayerBedModel_C">();
	}
	static class UBP_MapObjectPlayerBedModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapObjectPlayerBedModel_C>();
	}
};
static_assert(alignof(UBP_MapObjectPlayerBedModel_C) == 0x000008, "Wrong alignment on UBP_MapObjectPlayerBedModel_C");
static_assert(sizeof(UBP_MapObjectPlayerBedModel_C) == 0x000278, "Wrong size on UBP_MapObjectPlayerBedModel_C");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, UberGraphFrame) == 0x000248, "Member 'UBP_MapObjectPlayerBedModel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, SleepActionClass) == 0x000250, "Member 'UBP_MapObjectPlayerBedModel_C::SleepActionClass' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, PrevViewTarget) == 0x000258, "Member 'UBP_MapObjectPlayerBedModel_C::PrevViewTarget' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, SleepPlayer) == 0x000260, "Member 'UBP_MapObjectPlayerBedModel_C::SleepPlayer' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, Camera) == 0x000268, "Member 'UBP_MapObjectPlayerBedModel_C::Camera' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, CameraBeginBlendTime) == 0x000270, "Member 'UBP_MapObjectPlayerBedModel_C::CameraBeginBlendTime' has a wrong offset!");
static_assert(offsetof(UBP_MapObjectPlayerBedModel_C, CameraEndBlendTime) == 0x000274, "Member 'UBP_MapObjectPlayerBedModel_C::CameraEndBlendTime' has a wrong offset!");

}

