#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
private:
	std::string A_name;
	Weapon& weapon;

public:
	HumanA( std::string name, Weapon& _weapon );
	~HumanA();
	void	attack();
};

#endif
