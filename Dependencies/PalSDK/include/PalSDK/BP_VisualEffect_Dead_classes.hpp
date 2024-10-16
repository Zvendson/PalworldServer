#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_VisualEffect_Dead.BP_VisualEffect_Dead_C
// 0x0008 (0x0078 - 0x0070)
class UBP_VisualEffect_Dead_C final : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_VisualEffect_Dead(int32 EntryPoint);
	void OnBeginVisualEffect();
	void OnEndVisualEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VisualEffect_Dead_C">();
	}
	static class UBP_VisualEffect_Dead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VisualEffect_Dead_C>();
	}
};
static_assert(alignof(UBP_VisualEffect_Dead_C) == 0x000008, "Wrong alignment on UBP_VisualEffect_Dead_C");
static_assert(sizeof(UBP_VisualEffect_Dead_C) == 0x000078, "Wrong size on UBP_VisualEffect_Dead_C");
static_assert(offsetof(UBP_VisualEffect_Dead_C, UberGraphFrame) == 0x000070, "Member 'UBP_VisualEffect_Dead_C::UberGraphFrame' has a wrong offset!");

}

