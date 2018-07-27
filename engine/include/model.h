#include "constants.h"

namespace simhammer
{

class Model {
  public:
    explicit Model(stats_map statline);
    ~Model() = default;

    void setValue(stat_key key, int val);
    int getValue(stat_key key);
    weapon_ptr addWeapon(stats_map statline) { wep_(statline); }

  private:
    stats_map statline_;
    ranged_weapon_map ranged_weapon_;
    std::vector<weapon_ptr> wep_;
};
}
