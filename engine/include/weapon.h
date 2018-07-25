#include "weapon_interface.h"

namespace simhammer
{
    class weapon : public weapon_interface
    {
    public:
        explicit weapon(const weapon_stats& stats) = default;

        void apply_modifiers(modifier_ptr mod) override;
        void apply_modifiers(modifier_vector mods) override;
        
        const weapon_stats& get_weapon_stats_vector() const override;
    
    private:

        weapon_stats weapon_stats_;
    };

}