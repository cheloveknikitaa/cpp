#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen karen;

	karen.complain("ERROR");
	std::cout << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl;
	karen.complain("Dasgsd");
	std::cout << std::endl;
	return 0;
}
