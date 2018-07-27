#include "constants.h"
#include "weapon.h"

namespace simhammer {
    class Model {
    public:
	explicit Model(const stats_map& stats) : statline_(stats) {}
        ~Model() = default;

	/* Model functions */
        void setValue(stat_key key, int val) { statline_[key] = val; }
        int getValue(stat_key key) { return statline_[key]; }

	/* Weapon functions */
	int addWeapon(Weapon wep) { wep_.push_back(wep), return (wep_.size() - 1) }
	void removeWeapon(int position) { wep_.erase(position); }
	std::vector<Weapon> getWeapons(void) { return wep_; }

	/* Modifier functions */
	// TODO: void addModifier(Modifier mod);

    private:
      stats_map statline_;
      std::vector<Weapon> wep_;
    };

    /* Builder */
    std::unique_ptr<Model> make_model(
        int movement,
        int weapon_skill,
        int ballistic_skill,
        int strength,
        int toughness,
        int wounds,
        int attacks,
        int leadership,
        int armor_save,
        int points) {
	    return std::make_unique<Model>(
	        []() {
                    stats_map stats;
	            stats[stat_key::MOVEMENT       ] = movement;
	            stats[stat_key::WEAPON_SKILL   ] = weapon_skill;
	            stats[stat_key::BALLISTIC_SKILL] = ballistic_skill;
	            stats[stat_key::STRENGTH       ] = strength;
	            stats[stat_key::TOUGHNESS      ] = toughness;
	            stats[stat_key::WOUNDS         ] = wounds;
	            stats[stat_key::ATTACKS        ] = attacks;
	            stats[stat_key::LEADERSHIP     ] = leadership;
	            stats[stat_key::ARMOR_SAVE     ] = armor_save;
	            stats[stat_key::POINTS         ] = points;
	            return stats;
	        });
        }
}
