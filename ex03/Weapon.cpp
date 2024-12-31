#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon()
{

}

std::string Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}