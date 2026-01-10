#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::Zombie(std::string _name) : name(_name) {}

Zombie::~Zombie() { std::cout << name << " has been destroyed." << std::endl; }

void Zombie::setName(std::string name) { this->name = name; }

void Zombie::announce(void) {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
