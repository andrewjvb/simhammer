#include "model.h"

namespace model
{
class Model {
  public:
    Model(int statline[]);
 
    int movement;
    int weapon_skill;
    int ballistic_skill;
    int strength;
    int toughness;
    int wounds;
    int num_attacks;
    int leadership;
    int armor_save;
    int points;
};

Model::Model(int statline[]) {
  movement        = statline[MOVEMENT];
  weapon_skill    = statline[WEAPON_SKILL];
  ballistic_skill = statline[BALLISTIC_SKILL];
  strength        = statline[STRENGTH];
  toughness       = statline[TOUGHNESS];
  wounds          = statline[WOUNDS];
  num_attacks     = statline[NUM_ATTACKS];
  leadership      = statline[LEADERSHIP];
  armor_save      = statline[ARMOR_SAVE];
  points          = statline[POINTS];
}
}

using namespace model;
int main()
{
  int necronWarrior[NUM_UNIT_STATS] = {5, 3, 3, 4, 4, 1, 1, 10, 4, 12};

  Model model(necronWarrior);
 
  return 0;
}
