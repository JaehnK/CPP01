#include "Zombie.hpp"

int main(void)
{
	Zombie *zb;

	randomChump("RandomChump");
	zb = newZombie("NewZombie");
	delete zb;
	return (0);
}