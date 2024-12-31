#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _Name)
{
	Name = _Name;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &wp)
{
	this->w = &wp;
}

void	HumanB::attack()
{
	std::cout << this->Name << " attacks with their " << w->getType() << std::endl;
}