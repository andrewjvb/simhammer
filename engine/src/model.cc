#include "model.h"

namespace simhammer
{
Model::Model(stats_map statline) : statline_(statline) {
  // NOTHING!
};

void Model::setValue(stat_key key, int val) {
  try {
    statline_[key] = val;
  }
  catch(const std::exception& e) {
    // TODO: some logging
    // maybe throw
    std::cout << "Something went wrong:" << e.what() << std::endl;
  }
}

int Model::getValue(stat_key key) {
  return statline_[key];  
}

using namespace model;
int main()
{
  int necronWarrior[NUM_UNIT_STATS] = {5, 3, 3, 4, 4, 1, 1, 10, 4, 12};

  Model model(necronWarrior);
 
  return 0;
}
