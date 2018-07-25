#include <map>

namespace simhammer
{
    enum class stat_key
    {
        movement,
        weapon_skill,
        ballistic_skill,
        strength,
        toughness,
        wounds,
        attacks,
        leadership,
        armor_save,
        invulnerable_save,
        range,
        type,
        damage
    };

    using stats_map = std::map<stat_key, int>;
    
}