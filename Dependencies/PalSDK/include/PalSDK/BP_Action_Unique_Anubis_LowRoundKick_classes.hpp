#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_Anubis_LowRoundKick.BP_Action_Unique_Anubis_LowRoundKick_C
// 0x0010 (0x0160 - 0x0150)
class UBP_Action_Unique_Anubis_LowRoundKick_C final : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_A59173C84007480E2273A5B14ED45DC4(class FName NotifyName);
	void OnBreakAction();
	void OnCompleted_A59173C84007480E2273A5B14ED45DC4(class FName NotifyName);
	void OnInterrupted_A59173C84007480E2273A5B14ED45DC4(class FName NotifyName);
	void OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4(class FName NotifyName);
	void OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_Anubis_LowRoundKick_C">();
	}
	static class UBP_Action_Unique_Anubis_LowRoundKick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_Anubis_LowRoundKick_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_Anubis_LowRoundKick_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_Anubis_LowRoundKick_C");
static_assert(sizeof(UBP_Action_Unique_Anubis_LowRoundKick_C) == 0x000160, "Wrong size on UBP_Action_Unique_Anubis_LowRoundKick_C");
static_assert(offsetof(UBP_Action_Unique_Anubis_LowRoundKick_C, UberGraphFrame) == 0x000150, "Member 'UBP_Action_Unique_Anubis_LowRoundKick_C::UberGraphFrame' has a wrong offset!");

}

