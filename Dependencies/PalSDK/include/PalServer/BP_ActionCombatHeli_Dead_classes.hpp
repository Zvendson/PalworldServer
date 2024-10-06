#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionCombatHeli_Dead.BP_ActionCombatHeli_Dead_C
// 0x0010 (0x0150 - 0x0140)
class UBP_ActionCombatHeli_Dead_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionCombatHeli_Dead(int32 EntryPoint);
	void OnBeginAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionCombatHeli_Dead_C">();
	}
	static class UBP_ActionCombatHeli_Dead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionCombatHeli_Dead_C>();
	}
};
static_assert(alignof(UBP_ActionCombatHeli_Dead_C) == 0x000010, "Wrong alignment on UBP_ActionCombatHeli_Dead_C");
static_assert(sizeof(UBP_ActionCombatHeli_Dead_C) == 0x000150, "Wrong size on UBP_ActionCombatHeli_Dead_C");
static_assert(offsetof(UBP_ActionCombatHeli_Dead_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionCombatHeli_Dead_C::UberGraphFrame' has a wrong offset!");

}

