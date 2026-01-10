#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : A_name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << A_name << " attacks with their " << weapon.getType()
            << std::endl;
}
