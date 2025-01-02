#include "ex05.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{

}

void	Harl::debug_(void)
{
	std::cout << "HARL: Debug Mode Activated" << std::endl;	
}

void	Harl::info_(void)
{
	std::cout << "HARL: Info Mode Activated" << std::endl;
}

void	Harl::warning_(void)
{
	std::cout << "HARL: Warning" << std::endl;
}

void	Harl::error_(void)
{
	std::cout << "HARL: Error" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*debug) (void) = &Harl::debug_;
	void (Harl::*info) (void) = &Harl::info_;
	void (Harl::*warning) (void) = &Harl::warning_;
	void (Harl::*error) (void) = &Harl::error_;
	void (Harl::*funcs[4]) (void) = {debug, info, warning, error};

	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "HARL: Input Valid Level" << std::endl;
}