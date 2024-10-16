#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalItemIDManager_classes.hpp"
#include "PalSDK/BP_PalItemIDManager_parameters.hpp"


namespace PalSDK
{

// Function BP_PalItemIDManager.BP_PalItemIDManager_C.GetPalEggRank
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   PalRarity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   PalEggRank                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalItemIDManager_C::GetPalEggRank(int32 PalRarity, class UObject* WorldContextObject, int32* PalEggRank) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalItemIDManager_C", "GetPalEggRank");

	Params::BP_PalItemIDManager_C_GetPalEggRank Parms{};

	Parms.PalRarity = PalRarity;
	Parms.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(Func, &Parms);

	if (PalEggRank != nullptr)
		*PalEggRank = Parms.PalEggRank;
}


// Function BP_PalItemIDManager.BP_PalItemIDManager_C.GetStaticItemIdPalEgg
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterID                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalItemIDManager_C::GetStaticItemIdPalEgg(const class UObject* WorldContextObject, const class FName CharacterID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalItemIDManager_C", "GetStaticItemIdPalEgg");

	Params::BP_PalItemIDManager_C_GetStaticItemIdPalEgg Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

