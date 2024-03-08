#include "RE/Bethesda/TESObjectREFRs.h"

#include "RE/NetImmerse/NiAVObject.h"

namespace RE
{
	NiPointer<TESObjectREFR> TESObjectREFR::LookupByHandle(RefHandle a_refHandle)
	{
		NiPointer<TESObjectREFR> ref;
		LookupReferenceByHandle(a_refHandle, ref);
		return ref;
	}

	bool TESObjectREFR::LookupByHandle(RefHandle a_refHandle, NiPointer<TESObjectREFR>& a_refrOut)
	{
		return LookupReferenceByHandle(a_refHandle, a_refrOut);
	}

	BIPOBJECT::~BIPOBJECT()
	{
		Dtor();
		stl::memzero(this);
	}
}
