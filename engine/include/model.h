#include "constants.h"
#include "weapon.h"

namespace simhammer {
    typedef struct {
      int movement;
      int weapon_skill;
      int ballistic_skill;
      int strength;
      int toughness;
      int wounds;
      int attacks;
      int leadership;
      int armor_save;
      int points;
    } datasheet_t;

    class Model {
    public:
        explicit Model(datasheet_t *datasheet);
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
}
