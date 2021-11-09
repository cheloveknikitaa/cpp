#include "Array.hpp"
#include "../ex00/whatever.hpp"
#define MAX_VAL 750

int main()
// {
// 	Array<int> intArray(10);
// 	Array<double> doubleArray(10);
// 	Array<Fixed> fixedArray(10);

// 	for (unsigned int count = 0; count < intArray.Size(); ++count)
// 	{
// 		intArray[count] = count;
// 		doubleArray[count] = count + 0.5;
// 		fixedArray[count] = count + 0.33f;
// 	}

// 	for (unsigned int count = intArray.Size() - 1; count >= 0; --count)
// 		std::cout << intArray[count] << "\t" << doubleArray[count] << "\t" << fixedArray[count] << '\n';
// 	return (0);
// }
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
