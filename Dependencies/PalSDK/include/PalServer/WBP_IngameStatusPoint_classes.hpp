#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameStatusPoint.WBP_IngameStatusPoint_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_IngameStatusPoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          StatusPointUnused;                                 // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TechnologyPointUnused;                             // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_IngameStatusPoint(int32 EntryPoint);
	void SetupStatusPointAttention();
	void UpdatedTechnologyPoint(int32 TechnologyPoint);
	void UpdateUnusedStatusPoint(int32 UnusedPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameStatusPoint_C">();
	}
	static class UWBP_IngameStatusPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameStatusPoint_C>();
	}
};
static_assert(alignof(UWBP_IngameStatusPoint_C) == 0x000008, "Wrong alignment on UWBP_IngameStatusPoint_C");
static_assert(sizeof(UWBP_IngameStatusPoint_C) == 0x000288, "Wrong size on UWBP_IngameStatusPoint_C");
static_assert(offsetof(UWBP_IngameStatusPoint_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameStatusPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameStatusPoint_C, StatusPointUnused) == 0x000280, "Member 'UWBP_IngameStatusPoint_C::StatusPointUnused' has a wrong offset!");
static_assert(offsetof(UWBP_IngameStatusPoint_C, TechnologyPointUnused) == 0x000281, "Member 'UWBP_IngameStatusPoint_C::TechnologyPointUnused' has a wrong offset!");

}

