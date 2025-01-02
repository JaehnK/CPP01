#ifndef EX05_H
#define EX05_H

#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug_(void);
		void	info_(void);
		void	warning_(void);
		void	error_(void);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};


#endif