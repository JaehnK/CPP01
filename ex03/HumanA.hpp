#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string Name;
		Weapon		&w;
	public:
		HumanA(std::string _Name, Weapon &wp);
		~HumanA();
		void	attack();
};
#endif