#include "RE/Bethesda/BSPointerHandle.h"

#include "RE/Bethesda/Actor.h"
#include "RE/Bethesda/TESObjectREFRs.h"

namespace RE
{
	template class BSUntypedPointerHandle<>;
	static_assert(sizeof(BSUntypedPointerHandle<>) == 0x4);

	template class BSPointerHandle<Actor>;
	static_assert(sizeof(BSPointerHandle<Actor>) == 0x4);

	template class BSPointerHandle<Projectile>;
	static_assert(sizeof(BSPointerHandle<Projectile>) == 0x4);

	template class BSPointerHandle<TESObjectREFR>;
	static_assert(sizeof(BSPointerHandle<TESObjectREFR>) == 0x4);

	template class BSPointerHandleManagerInterface<Actor>;
	static_assert(std::is_empty_v<BSPointerHandleManagerInterface<Actor>>);

	template class BSPointerHandleManagerInterface<Projectile>;
	static_assert(std::is_empty_v<BSPointerHandleManagerInterface<Projectile>>);

	template class BSPointerHandleManagerInterface<TESObjectREFR>;
	static_assert(std::is_empty_v<BSPointerHandleManagerInterface<TESObjectREFR>>);
}
