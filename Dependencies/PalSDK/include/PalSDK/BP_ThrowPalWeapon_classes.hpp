#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ThrowWeaponBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ThrowPalWeapon.BP_ThrowPalWeapon_C
// 0x0020 (0x05B8 - 0x0598)
class ABP_ThrowPalWeapon_C final : public ABP_ThrowWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ThrowPalWeapon_C;                // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SK_Weapon_PalSphere_001;                           // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayedThrowMotion;                               // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Const_WalkSpeedRate;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint);
	class FName GetEquipSocketName();
	void GetThrowObjectClass(class UClass** ThrowObject);
	void IsNotEmptyOtomo(bool* NotEmpty);
	void On_Throw();
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void Set_Flags(bool Disable, double Speed);

	bool IsEmptyMagazine() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowPalWeapon_C">();
	}
	static class ABP_ThrowPalWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowPalWeapon_C>();
	}
};
static_assert(alignof(ABP_ThrowPalWeapon_C) == 0x000008, "Wrong alignment on ABP_ThrowPalWeapon_C");
static_assert(sizeof(ABP_ThrowPalWeapon_C) == 0x0005B8, "Wrong size on ABP_ThrowPalWeapon_C");
static_assert(offsetof(ABP_ThrowPalWeapon_C, UberGraphFrame_BP_ThrowPalWeapon_C) == 0x000598, "Member 'ABP_ThrowPalWeapon_C::UberGraphFrame_BP_ThrowPalWeapon_C' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPalWeapon_C, SK_Weapon_PalSphere_001) == 0x0005A0, "Member 'ABP_ThrowPalWeapon_C::SK_Weapon_PalSphere_001' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPalWeapon_C, IsPlayedThrowMotion) == 0x0005A8, "Member 'ABP_ThrowPalWeapon_C::IsPlayedThrowMotion' has a wrong offset!");
static_assert(offsetof(ABP_ThrowPalWeapon_C, Const_WalkSpeedRate) == 0x0005B0, "Member 'ABP_ThrowPalWeapon_C::Const_WalkSpeedRate' has a wrong offset!");

}

