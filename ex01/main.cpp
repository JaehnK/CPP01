#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie *Zombies = zombieHorde(N, "jaehukim");

	for (int i = 0; i < 10; i++)
		Zombies[i].announce();
	
	delete[] Zombies;
}