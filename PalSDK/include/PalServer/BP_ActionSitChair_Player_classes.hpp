#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionInteractBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionSitChair_Player.BP_ActionSitChair_Player_C
// 0x0010 (0x0190 - 0x0180)
class UBP_ActionSitChair_Player_C final : public UBP_ActionInteractBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionSitChair_Player_C;         // 0x0180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Flag_Name;                                         // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionSitChair_Player(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSitChair_Player_C">();
	}
	static class UBP_ActionSitChair_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSitChair_Player_C>();
	}
};
static_assert(alignof(UBP_ActionSitChair_Player_C) == 0x000010, "Wrong alignment on UBP_ActionSitChair_Player_C");
static_assert(sizeof(UBP_ActionSitChair_Player_C) == 0x000190, "Wrong size on UBP_ActionSitChair_Player_C");
static_assert(offsetof(UBP_ActionSitChair_Player_C, UberGraphFrame_BP_ActionSitChair_Player_C) == 0x000180, "Member 'UBP_ActionSitChair_Player_C::UberGraphFrame_BP_ActionSitChair_Player_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionSitChair_Player_C, Flag_Name) == 0x000188, "Member 'UBP_ActionSitChair_Player_C::Flag_Name' has a wrong offset!");

}

