#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <ios>
# include <string>
# include <sstream>
# include <fstream>

class MyReplace
{
private:
	std::string	_filename;
	std::string	_s1;
	std::string	_s2;
	std::string	_buffer;
public:
	MyReplace(std::string filename, std::string s1, std::string s2);
	~MyReplace();
	void	reading();
	void	replacing();
};

#endif
