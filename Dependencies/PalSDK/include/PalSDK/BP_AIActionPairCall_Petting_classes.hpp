#pragma once

#include "Basic.hpp"

#include "BP_AIActionPairCallBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIActionPairCall_Petting.BP_AIActionPairCall_Petting_C
// 0x0008 (0x0158 - 0x0150)
class UBP_AIActionPairCall_Petting_C final : public UBP_AIActionPairCallBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIActionPairCall_Petting_C;      // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionPairCall_Petting(int32 EntryPoint);
	bool IsMomoChyo();
	void OnFinish();
	void OnStartPair();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionPairCall_Petting_C">();
	}
	static class UBP_AIActionPairCall_Petting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionPairCall_Petting_C>();
	}
};
static_assert(alignof(UBP_AIActionPairCall_Petting_C) == 0x000008, "Wrong alignment on UBP_AIActionPairCall_Petting_C");
static_assert(sizeof(UBP_AIActionPairCall_Petting_C) == 0x000158, "Wrong size on UBP_AIActionPairCall_Petting_C");
static_assert(offsetof(UBP_AIActionPairCall_Petting_C, UberGraphFrame_BP_AIActionPairCall_Petting_C) == 0x000150, "Member 'UBP_AIActionPairCall_Petting_C::UberGraphFrame_BP_AIActionPairCall_Petting_C' has a wrong offset!");

}

