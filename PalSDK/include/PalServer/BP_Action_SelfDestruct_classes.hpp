#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_SelfDestruct.BP_Action_SelfDestruct_C
// 0x0080 (0x01D0 - 0x0150)
class UBP_Action_SelfDestruct_C final : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SpeedMultiplier;                                   // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        YawMultiply;                                       // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HomingRate;                                        // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionDistanceThreshold;                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartExplosion;                                    // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLaunch;                                         // 0x0181(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_182[0x6];                                      // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          New_HP;                                            // 0x0188(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                                BlowVelocity;                                      // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultEmissiveDuration;                           // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultNoEmissiveDuration;                         // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinEmissiveDuration;                               // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DecayRateOfEmissiveTime;                           // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                   VisualEffect;                                      // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BlowAndKillSelf();
	void ExecuteUbergraph_BP_Action_SelfDestruct(int32 EntryPoint);
	void MakeVisualEffectParameter(struct FPalVisualEffectDynamicParameter* PalVisualEffectDynamicParameter);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void UpdateVelocity();
	void UpdateYaw();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_SelfDestruct_C">();
	}
	static class UBP_Action_SelfDestruct_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_SelfDestruct_C>();
	}
};
static_assert(alignof(UBP_Action_SelfDestruct_C) == 0x000010, "Wrong alignment on UBP_Action_SelfDestruct_C");
static_assert(sizeof(UBP_Action_SelfDestruct_C) == 0x0001D0, "Wrong size on UBP_Action_SelfDestruct_C");
static_assert(offsetof(UBP_Action_SelfDestruct_C, UberGraphFrame) == 0x000150, "Member 'UBP_Action_SelfDestruct_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, SpeedMultiplier) == 0x000158, "Member 'UBP_Action_SelfDestruct_C::SpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, YawMultiply) == 0x000160, "Member 'UBP_Action_SelfDestruct_C::YawMultiply' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, HomingRate) == 0x000168, "Member 'UBP_Action_SelfDestruct_C::HomingRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, ExplosionDistanceThreshold) == 0x000170, "Member 'UBP_Action_SelfDestruct_C::ExplosionDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, FlagName) == 0x000178, "Member 'UBP_Action_SelfDestruct_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, StartExplosion) == 0x000180, "Member 'UBP_Action_SelfDestruct_C::StartExplosion' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, HasLaunch) == 0x000181, "Member 'UBP_Action_SelfDestruct_C::HasLaunch' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, New_HP) == 0x000188, "Member 'UBP_Action_SelfDestruct_C::New_HP' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, BlowVelocity) == 0x000190, "Member 'UBP_Action_SelfDestruct_C::BlowVelocity' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, DefaultEmissiveDuration) == 0x0001A8, "Member 'UBP_Action_SelfDestruct_C::DefaultEmissiveDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, DefaultNoEmissiveDuration) == 0x0001AC, "Member 'UBP_Action_SelfDestruct_C::DefaultNoEmissiveDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, MinEmissiveDuration) == 0x0001B0, "Member 'UBP_Action_SelfDestruct_C::MinEmissiveDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, DecayRateOfEmissiveTime) == 0x0001B4, "Member 'UBP_Action_SelfDestruct_C::DecayRateOfEmissiveTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, VisualEffect) == 0x0001B8, "Member 'UBP_Action_SelfDestruct_C::VisualEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_SelfDestruct_C, TargetActor) == 0x0001C0, "Member 'UBP_Action_SelfDestruct_C::TargetActor' has a wrong offset!");

}

