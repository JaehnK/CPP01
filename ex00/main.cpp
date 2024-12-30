#include "Zombie.hpp"

int main(void)
{
	Zombie *zb;
	
	zb = newZombie("NewZombie");
	randomChump("RandomChump");
	delete zb;
	return (0);
}