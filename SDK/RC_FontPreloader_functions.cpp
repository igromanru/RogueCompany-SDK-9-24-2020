// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FontPreloader.FontPreloader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFontPreloader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FontPreloader.FontPreloader_C.Construct");

	UFontPreloader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FontPreloader.FontPreloader_C.ExecuteUbergraph_FontPreloader
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFontPreloader_C::ExecuteUbergraph_FontPreloader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FontPreloader.FontPreloader_C.ExecuteUbergraph_FontPreloader");

	UFontPreloader_C_ExecuteUbergraph_FontPreloader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
