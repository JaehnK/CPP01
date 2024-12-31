#ifndef H_ZOMBIEHORDE
#define H_ZOMBIEHORDE

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	SetName(std::string name);
};

Zombie*	zombieHorde(int N, std::string Name);
#endif