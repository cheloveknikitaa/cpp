#include "Replace.hpp"

MyReplace::MyReplace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	if (_filename.empty() || _s1.empty() || _s2.empty())
	{
		std::cout << "Error, empty arguments!" << std::endl;
		exit (-1);
	}
}

MyReplace::~MyReplace()
{
}

void	MyReplace::MyReplace::reading()
{
	std::stringstream	buf;
	std::ifstream		file(_filename, std::ios_base::in);

	if(file.is_open())
		buf << file.rdbuf();
	else
	{
		std::cout << "File: " << _filename << " open error" << std::endl;
		exit (-1);
	}
	_buffer = buf.str();
}

void	MyReplace::MyReplace::replacing()
{
	size_t	i = 0;

	i = _buffer.find(_s1, i);
	while (i != std::string::npos)
	{
		_buffer.erase(i, _s1.size());
		_buffer.insert(i, _s2);
		i += _s2.size();
		i = _buffer.find(_s1, i);
	}
	std::ofstream newFile(_filename + ".replace", std::ios_base::out | std::ios_base::trunc);
	if (!newFile.is_open())
	{
		std::cout << newFile << " - error when create" << std::endl;
		exit (-1);
	}
	newFile << _buffer;
}
