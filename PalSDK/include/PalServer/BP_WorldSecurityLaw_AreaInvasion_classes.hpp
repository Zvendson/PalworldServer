#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_WorldSecurityLaw_AreaInvasion.BP_WorldSecurityLaw_AreaInvasion_C
// 0x0008 (0x0048 - 0x0040)
class UBP_WorldSecurityLaw_AreaInvasion_C final : public UPalWorldSecurityLawTrigger_AreaInvasion
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	bool Condition(class AActor* InvasionActor, class UPalIndividualCharacterHandle** CriminalHandle);
	void ExecuteUbergraph_BP_WorldSecurityLaw_AreaInvasion(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldSecurityLaw_AreaInvasion_C">();
	}
	static class UBP_WorldSecurityLaw_AreaInvasion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WorldSecurityLaw_AreaInvasion_C>();
	}
};
static_assert(alignof(UBP_WorldSecurityLaw_AreaInvasion_C) == 0x000008, "Wrong alignment on UBP_WorldSecurityLaw_AreaInvasion_C");
static_assert(sizeof(UBP_WorldSecurityLaw_AreaInvasion_C) == 0x000048, "Wrong size on UBP_WorldSecurityLaw_AreaInvasion_C");
static_assert(offsetof(UBP_WorldSecurityLaw_AreaInvasion_C, UberGraphFrame) == 0x000040, "Member 'UBP_WorldSecurityLaw_AreaInvasion_C::UberGraphFrame' has a wrong offset!");

}

