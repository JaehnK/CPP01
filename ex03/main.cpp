#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int foo()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	return (0);
}

int bar()
{
	Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
	return (0);
}

int main()
{
	foo();
	bar();
}