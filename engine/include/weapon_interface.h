#include <memory>
#include <vector>
#include "constants.h"

// TODO av include modifier class
class modifier_interface;

namespace simhammer
{
    class weapon_interface
    {
    public:
        using modifier_ptr = std::unique_ptr<modifier_interface>;
        using modifier_vector = std::vector<modifier_ptr>;
        using weapon_stats = stats_map;
        /*
         * \brief return modified weapon obj
         * \param mod a single modifier to apply
         * \param mods a vector of modifiers to apply  
         */
        virtual void apply_modifiers(modifier_ptr mod) = 0;
        virtual void apply_modifiers(modifier_vector mods) = 0;

        virtual ~weapon_interface() = default;

        virtual const weapon_stats& get_weapon_stats_vector() const = 0;
    
    };

    using weapon_interface_ptr = std::unique_ptr<weapon_interface>;
}