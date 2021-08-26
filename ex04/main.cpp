#include "Replace.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error, incorrect arguments" << std::endl;
		return (-1);
	}
	MyReplace	info = MyReplace(argv[1], argv[2], argv[3]);
	info.reading();
	info.replacing();
	return (0);
}
