#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ThunderStrikeBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LineThunderBullet.BP_LineThunderBullet_C
// 0x0008 (0x0438 - 0x0430)
class ABP_LineThunderBullet_C final : public ABP_ThunderStrikeBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LineThunderBullet_C;             // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActivateOmen();
	void ExecuteUbergraph_BP_LineThunderBullet(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LineThunderBullet_C">();
	}
	static class ABP_LineThunderBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LineThunderBullet_C>();
	}
};
static_assert(alignof(ABP_LineThunderBullet_C) == 0x000008, "Wrong alignment on ABP_LineThunderBullet_C");
static_assert(sizeof(ABP_LineThunderBullet_C) == 0x000438, "Wrong size on ABP_LineThunderBullet_C");
static_assert(offsetof(ABP_LineThunderBullet_C, UberGraphFrame_BP_LineThunderBullet_C) == 0x000430, "Member 'ABP_LineThunderBullet_C::UberGraphFrame_BP_LineThunderBullet_C' has a wrong offset!");

}

