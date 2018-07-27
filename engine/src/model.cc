#include "model.h"

namespace simhammer
{

/* Create model with datasheet */
Model::Model(datasheet_t *datasheet) {
    statline_[MOVEMENT       ] = datasheet->movement;
    statline_[WEAPON_SKILL   ] = datasheet->weapon_skill;
    statline_[BALLISTIC_SKILL] = datasheet->ballistic_skill;
    statline_[STRENGTH       ] = datasheet->strength;
    statline_[TOUGHNESS      ] = datasheet->toughness;
    statline_[WOUNDS         ] = datasheet->wounds;
    statline_[ATTACKS        ] = datasheet->attacks;
    statline_[LEADERSHIP     ] = datasheet->leadership;
    statline_[ARMOR_SAVE     ] = datasheet->armor_save;
    statline_[POINTS         ] = datasheet->points;
}
}
