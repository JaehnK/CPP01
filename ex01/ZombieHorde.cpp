#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string Name)
{
	if (N < 1)
		return (NULL);
	
	Zombie* Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << Name << "_" << i;
		Horde[i].SetName(ss.str());
	}
	return (Horde);
}