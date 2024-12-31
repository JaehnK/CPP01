#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string Name;
		Weapon		*w;
	public:
		HumanB(std::string _Name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &wp);
};
#endif