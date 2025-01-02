#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	Haaarl;

	if (ac == 2)
	{
		Haaarl.complain(av[1]);
		return (0);
	}
	std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (1);
}