#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string _Name, Weapon &wp) : Name(_Name), w(wp)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->Name << " attacks with their " << w.getType() << std::endl;
}