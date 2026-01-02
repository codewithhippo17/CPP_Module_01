#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie zombie(name);
	zombie.announce();
}

Zombie* newZombie( std::string name ){

	Zombie *zombie = new Zombie(name);
	return zombie;
}

void Zombie:: announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
