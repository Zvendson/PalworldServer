#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionDigOut.BP_ActionDigOut_C
// 0x0020 (0x01A0 - 0x0180)
class UBP_ActionDigOut_C final : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionDigOut_C;                  // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEventPlayerCrafting;                             // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionDigOut(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDigOut_C">();
	}
	static class UBP_ActionDigOut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDigOut_C>();
	}
};
static_assert(alignof(UBP_ActionDigOut_C) == 0x000010, "Wrong alignment on UBP_ActionDigOut_C");
static_assert(sizeof(UBP_ActionDigOut_C) == 0x0001A0, "Wrong size on UBP_ActionDigOut_C");
static_assert(offsetof(UBP_ActionDigOut_C, UberGraphFrame_BP_ActionDigOut_C) == 0x000180, "Member 'UBP_ActionDigOut_C::UberGraphFrame_BP_ActionDigOut_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionDigOut_C, FlagName) == 0x000188, "Member 'UBP_ActionDigOut_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionDigOut_C, AkEventPlayerCrafting) == 0x000190, "Member 'UBP_ActionDigOut_C::AkEventPlayerCrafting' has a wrong offset!");

}

