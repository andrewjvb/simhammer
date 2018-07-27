#include <map>
#include "weapon_interface.h"

namespace simhammer
{
    enum class stat_key
    {
        MOVEMENT,
        WEAPON_SKILL,
        BALLISTIC_SKILL,
        STRENGTH,
	ARMOR_PEN,
        TOUGHNESS,
        WOUNDS,
        ATTACKS,
        LEADERSHIP,
        ARMOR_SAVE,
        INVULNERABLE_SAVE,
	POINTS,
	NUM_STAT_KEYS
    };

    using stats_map = std::map<stat_key, int>;

    using weapon_ptr = std::unique_ptr<weapon_interface>();
}
