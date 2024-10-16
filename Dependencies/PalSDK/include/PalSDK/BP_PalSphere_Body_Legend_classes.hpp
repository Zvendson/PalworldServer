#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PalSphere_Body_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSphere_Body_Legend.BP_PalSphere_Body_Legend_C
// 0x0008 (0x0470 - 0x0468)
class ABP_PalSphere_Body_Legend_C final : public ABP_PalSphere_Body_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSphere_Body_Legend_C;         // 0x0468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PalSphere_Body_Legend(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_Body_Legend_C">();
	}
	static class ABP_PalSphere_Body_Legend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_Body_Legend_C>();
	}
};
static_assert(alignof(ABP_PalSphere_Body_Legend_C) == 0x000008, "Wrong alignment on ABP_PalSphere_Body_Legend_C");
static_assert(sizeof(ABP_PalSphere_Body_Legend_C) == 0x000470, "Wrong size on ABP_PalSphere_Body_Legend_C");
static_assert(offsetof(ABP_PalSphere_Body_Legend_C, UberGraphFrame_BP_PalSphere_Body_Legend_C) == 0x000468, "Member 'ABP_PalSphere_Body_Legend_C::UberGraphFrame_BP_PalSphere_Body_Legend_C' has a wrong offset!");

}

