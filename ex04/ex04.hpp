#ifndef EX04_HPP
#define EX04_HPP
#include <fstream>
#include <iostream>
#include <string>

std::string	FtReplace(std::string src, std::string s1, std::string s2);
std::string ReadFile(std::string filename);
void WriteFile(std::string filename, std::string ret);

#endif