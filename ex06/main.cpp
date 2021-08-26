#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;
	while (argc == 2)
	{
		karen.complain(argv[1]);
		argc++;
		return (0);
	}
	std::cout << "Error, invalid argument";
	return 0;
}
