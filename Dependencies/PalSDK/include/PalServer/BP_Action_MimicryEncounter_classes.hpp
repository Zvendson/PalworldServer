#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_MimicryEncounter.BP_Action_MimicryEncounter_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_MimicryEncounter_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_MimicryEncounter(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_41F883F24346AC8EA3076F98EE10BE03(class FName NotifyName);
	void OnCompleted_41F883F24346AC8EA3076F98EE10BE03(class FName NotifyName);
	void OnInterrupted_41F883F24346AC8EA3076F98EE10BE03(class FName NotifyName);
	void OnNotifyBegin_41F883F24346AC8EA3076F98EE10BE03(class FName NotifyName);
	void OnNotifyEnd_41F883F24346AC8EA3076F98EE10BE03(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_MimicryEncounter_C">();
	}
	static class UBP_Action_MimicryEncounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_MimicryEncounter_C>();
	}
};
static_assert(alignof(UBP_Action_MimicryEncounter_C) == 0x000010, "Wrong alignment on UBP_Action_MimicryEncounter_C");
static_assert(sizeof(UBP_Action_MimicryEncounter_C) == 0x000150, "Wrong size on UBP_Action_MimicryEncounter_C");
static_assert(offsetof(UBP_Action_MimicryEncounter_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_MimicryEncounter_C::UberGraphFrame' has a wrong offset!");

}

