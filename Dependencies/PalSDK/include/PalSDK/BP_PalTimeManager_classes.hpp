#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalTimeManager.BP_PalTimeManager_C
// 0x0010 (0x0158 - 0x0148)
class UBP_PalTimeManager_C final : public UPalTimeManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0148(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        NPCSetTime;                                        // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint);
	void Tick_BP(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalTimeManager_C">();
	}
	static class UBP_PalTimeManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalTimeManager_C>();
	}
};
static_assert(alignof(UBP_PalTimeManager_C) == 0x000008, "Wrong alignment on UBP_PalTimeManager_C");
static_assert(sizeof(UBP_PalTimeManager_C) == 0x000158, "Wrong size on UBP_PalTimeManager_C");
static_assert(offsetof(UBP_PalTimeManager_C, UberGraphFrame) == 0x000148, "Member 'UBP_PalTimeManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalTimeManager_C, NPCSetTime) == 0x000150, "Member 'UBP_PalTimeManager_C::NPCSetTime' has a wrong offset!");

}

