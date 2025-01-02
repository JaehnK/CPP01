#include "ex04.hpp"

int	CheckArguments(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid Arguments" << std::endl;
		return (1);
	}
	std::ifstream in(av[1]);
	if (!in.is_open())
	{
		std::cerr << "File Not Exist" << std::endl;
		return (1);
	}
	in.close();
	return (0);
}

int main(int ac, char **av)
{
	std::string s;
	std::string ret;
	
	if (CheckArguments(ac, av) == 1)
		return (1);
	
	s = ReadFile(av[1]);
	if (s.empty())
		return (1);
	
	ret = FtReplace(s, av[2], av[3]);
	if (ret.empty())
		return (1);
	
	WriteFile(av[1], ret);
	return (0);
}