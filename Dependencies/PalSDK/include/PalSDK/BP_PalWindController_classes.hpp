#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalWindController.BP_PalWindController_C
// 0x0010 (0x0B70 - 0x0B60)
class alignas(0x10) ABP_PalWindController_C final : public APalWindController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PalWindController(int32 EntryPoint);
	void UpdateNiagaraParameterCollection(const struct FPalWindInfo& WindInfo);
	void UpdateNPC(struct FPalWindInfo& WindInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalWindController_C">();
	}
	static class ABP_PalWindController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalWindController_C>();
	}
};
static_assert(alignof(ABP_PalWindController_C) == 0x000010, "Wrong alignment on ABP_PalWindController_C");
static_assert(sizeof(ABP_PalWindController_C) == 0x000B70, "Wrong size on ABP_PalWindController_C");
static_assert(offsetof(ABP_PalWindController_C, UberGraphFrame) == 0x000B60, "Member 'ABP_PalWindController_C::UberGraphFrame' has a wrong offset!");

}

