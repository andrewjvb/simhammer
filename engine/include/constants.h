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
        //INVULNERABLE_SAVE,
	POINTS,
	NUM_STAT_KEYS
    };

    using stats_map = std::map<stat_key, int>;

    // TODO: rename these
    enum class ranged_weapon_key
    {
	BALLISTIC_SKILL,
	STRENGTH,
	ARMOR_PEN,
	RANGE,
	TYPE,
	DAMAGE,
	POINTS
    }

    using ranged_weapon_map = std::map<ranged_weapon_key, int>;

    // TODO: rename these
    enum class melee_weapon_key
    {
	WEAPON_SKILL,
	STRENGTH,
	DAMAGE,
	POINTS
    }

    using melee_weapon_map = std::map<melee_weapon_key, int>;


    enum class weapon_profile
    {
        RAPID_FIRE,
	ASSAULT,
	HEAVY,
	MACRO,
	PISTOL,
	GRENADE,

	NUM_WEAPON_PROFILES
    }
   


    template<class T>
	Class T {
	  	explicit T(stats_map statline);
		~T() = default;
		getValue(stat_key key);
		setValue(stat_key key, int val);
	}


    using weapon_ptr = std::unique_ptr<weapon_interface>();

    weapon_ptr make_weapon(int type, int num_shots, int str, int dmg)
    {
	return weapon_ptr( [&]() = {
		stats_map stats[stat_key::STRENGTH] = str;
		stats[stat_key::NUM_SHOTS] = num_shots;
		// ...
		return stats;
		};
    }

    model_ptr make_model(int move, int str)
    {
	return model_ptr( [&]() = {
		stats_map stats[stat_key::STRENGTH] = str;
		stats[stat_key::MOVEMENT] = move;
		// ...
		}
    }
// TODO: Discuss
//
//    weapon make_weapon(stats_map statline);
//    model  make_model(stats_map statline);
//
//
//	weapon_t wep = simhammer::make_weapon(statline);
//	model_t model = ....;
//	model.addWeapon(wep) {
//
//	}
//
//      if (ranged_weapon_[BALLISTIC_SKILL])
//        use it
//      else
//        use default statline
//
//
// Function in API
//
//   create_model
//   create_weapon
//
//
}
