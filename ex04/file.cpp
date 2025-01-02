#include "ex04.hpp"

std::string ReadFile(std::string filename)
{
	std::ifstream f(filename.c_str());
	std::string s;
	
	while (f)
		getline(f, s);
	
	return (s);
}

void WriteFile(std::string Filename, std::string ret)
{
	Filename += ".replace";
	
	std::ofstream f(Filename.c_str());
	
	if (f.is_open())
		f << ret;
	else
		std::cerr << "Error" << std::endl;
	
	return ;
}
