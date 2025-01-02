#include "ex04.hpp"

std::string	FtReplace(std::string src, std::string s1, std::string s2)
{
	size_t	pos = 0;

	if (src.empty())
		return (NULL);

	while ((pos = src.find(s1, pos)) !=  std::string::npos)
	{
			src.erase(pos, s1.length());
			src.insert(pos, s2);
			pos += s2.length();
	}
	return (src);
}