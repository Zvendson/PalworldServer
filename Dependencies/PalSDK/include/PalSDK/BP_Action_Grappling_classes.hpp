#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Grappling.BP_Action_Grappling_C
// 0x0070 (0x01B0 - 0x0140)
class UBP_Action_Grappling_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MoveSpeed;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClimb;                                           // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        JumpPower;                                         // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndCompleted;                                    // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  MeshRotationCache;                                 // 0x0170(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MeshLocationCache;                                 // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisableShooter(bool Disable);
	void ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint);
	void GetOffRide();
	void NotifyFinishToWeapon();
	void NotifyStartToWeapon(const struct FVector& HitLocation, double CoolTimeRate);
	void OnBeginAction();
	void OnBlendOut_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName);
	void OnBreakAction();
	void OnCompleted_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName);
	void OnNotifyBegin_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName);
	void OnNotifyEnd_6CB4C09840328B4E3D8F4680A0904209(class FName NotifyName);
	void SetPlayerVelocity(const struct FVector& Velocity);
	void TickAction(float DeltaTime);
	void TryClimb();
	void UpdateMeshRotation(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Grappling_C">();
	}
	static class UBP_Action_Grappling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Grappling_C>();
	}
};
static_assert(alignof(UBP_Action_Grappling_C) == 0x000010, "Wrong alignment on UBP_Action_Grappling_C");
static_assert(sizeof(UBP_Action_Grappling_C) == 0x0001B0, "Wrong size on UBP_Action_Grappling_C");
static_assert(offsetof(UBP_Action_Grappling_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_Grappling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, MoveSpeed) == 0x000148, "Member 'UBP_Action_Grappling_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, FlagName) == 0x000150, "Member 'UBP_Action_Grappling_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, IsClimb) == 0x000158, "Member 'UBP_Action_Grappling_C::IsClimb' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, JumpPower) == 0x000160, "Member 'UBP_Action_Grappling_C::JumpPower' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, IsEndCompleted) == 0x000168, "Member 'UBP_Action_Grappling_C::IsEndCompleted' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, MeshRotationCache) == 0x000170, "Member 'UBP_Action_Grappling_C::MeshRotationCache' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grappling_C, MeshLocationCache) == 0x000190, "Member 'UBP_Action_Grappling_C::MeshLocationCache' has a wrong offset!");

}

