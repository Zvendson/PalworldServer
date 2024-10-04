#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_Mimicry.BP_Action_Mimicry_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_Mimicry_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           MimicMontage;                                      // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Mimicry(int32 EntryPoint);
	void FindMimicMontage(class UAnimMontage** Montage);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Mimicry_C">();
	}
	static class UBP_Action_Mimicry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Mimicry_C>();
	}
};
static_assert(alignof(UBP_Action_Mimicry_C) == 0x000010, "Wrong alignment on UBP_Action_Mimicry_C");
static_assert(sizeof(UBP_Action_Mimicry_C) == 0x000150, "Wrong size on UBP_Action_Mimicry_C");
static_assert(offsetof(UBP_Action_Mimicry_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_Mimicry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Mimicry_C, MimicMontage) == 0x000148, "Member 'UBP_Action_Mimicry_C::MimicMontage' has a wrong offset!");

}

