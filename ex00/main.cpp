#include "Zombie.hpp"

int main() {
	Zombie *zombie;

	std::string name1 = "Mohamed";
	zombie = newZombie(name1);
	zombie->announce();
	delete zombie;

	std::string name2 = "Ali";
	randomChump(name2);
}
