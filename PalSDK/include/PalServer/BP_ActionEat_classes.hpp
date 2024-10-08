#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionEat.BP_ActionEat_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionEat_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionEat_C;                     // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionEat(int32 EntryPoint);
	void OnBeginAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionEat_C">();
	}
	static class UBP_ActionEat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionEat_C>();
	}
};
static_assert(alignof(UBP_ActionEat_C) == 0x000010, "Wrong alignment on UBP_ActionEat_C");
static_assert(sizeof(UBP_ActionEat_C) == 0x000170, "Wrong size on UBP_ActionEat_C");
static_assert(offsetof(UBP_ActionEat_C, UberGraphFrame_BP_ActionEat_C) == 0x000168, "Member 'UBP_ActionEat_C::UberGraphFrame_BP_ActionEat_C' has a wrong offset!");

}

