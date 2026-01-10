#include "HumanB.hpp"

HumanB::HumanB(std::string name) : B_name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack() {
  if (this->weapon != NULL) {
    std::cout << B_name << " attacks with their " << weapon->getType()
              << std::endl;
  } else {
    std::cout << B_name << " has no weapon!" << std::endl;
  }
}
