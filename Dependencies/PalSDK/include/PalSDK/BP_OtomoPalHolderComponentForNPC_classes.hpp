#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_OtomoPalHolderComponent_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C
// 0x0008 (0x01A0 - 0x0198)
class UBP_OtomoPalHolderComponentForNPC_C final : public UBP_OtomoPalHolderComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_OtomoPalHolderComponentForNPC_C; // 0x0198(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OtomoPalHolderComponentForNPC_C">();
	}
	static class UBP_OtomoPalHolderComponentForNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OtomoPalHolderComponentForNPC_C>();
	}
};
static_assert(alignof(UBP_OtomoPalHolderComponentForNPC_C) == 0x000008, "Wrong alignment on UBP_OtomoPalHolderComponentForNPC_C");
static_assert(sizeof(UBP_OtomoPalHolderComponentForNPC_C) == 0x0001A0, "Wrong size on UBP_OtomoPalHolderComponentForNPC_C");
static_assert(offsetof(UBP_OtomoPalHolderComponentForNPC_C, UberGraphFrame_BP_OtomoPalHolderComponentForNPC_C) == 0x000198, "Member 'UBP_OtomoPalHolderComponentForNPC_C::UberGraphFrame_BP_OtomoPalHolderComponentForNPC_C' has a wrong offset!");

}

