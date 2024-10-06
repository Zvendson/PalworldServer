#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ThrowWeaponBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ThrowWeapon_Dummy.BP_ThrowWeapon_Dummy_C
// 0x0008 (0x05A0 - 0x0598)
class ABP_ThrowWeapon_Dummy_C final : public ABP_ThrowWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ThrowWeapon_Dummy_C;             // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ThrowWeapon_Dummy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowWeapon_Dummy_C">();
	}
	static class ABP_ThrowWeapon_Dummy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowWeapon_Dummy_C>();
	}
};
static_assert(alignof(ABP_ThrowWeapon_Dummy_C) == 0x000008, "Wrong alignment on ABP_ThrowWeapon_Dummy_C");
static_assert(sizeof(ABP_ThrowWeapon_Dummy_C) == 0x0005A0, "Wrong size on ABP_ThrowWeapon_Dummy_C");
static_assert(offsetof(ABP_ThrowWeapon_Dummy_C, UberGraphFrame_BP_ThrowWeapon_Dummy_C) == 0x000598, "Member 'ABP_ThrowWeapon_Dummy_C::UberGraphFrame_BP_ThrowWeapon_Dummy_C' has a wrong offset!");

}

