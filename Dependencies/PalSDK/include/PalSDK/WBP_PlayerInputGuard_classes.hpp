#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerInputGuard.WBP_PlayerInputGuard_C
// 0x0008 (0x0410 - 0x0408)
class UWBP_PlayerInputGuard_C final : public UPalUIInputGuard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_PlayerInputGuard(int32 EntryPoint);
	void OnSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerInputGuard_C">();
	}
	static class UWBP_PlayerInputGuard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerInputGuard_C>();
	}
};
static_assert(alignof(UWBP_PlayerInputGuard_C) == 0x000008, "Wrong alignment on UWBP_PlayerInputGuard_C");
static_assert(sizeof(UWBP_PlayerInputGuard_C) == 0x000410, "Wrong size on UWBP_PlayerInputGuard_C");
static_assert(offsetof(UWBP_PlayerInputGuard_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PlayerInputGuard_C::UberGraphFrame' has a wrong offset!");

}

