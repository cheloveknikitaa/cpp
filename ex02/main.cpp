#include "Array.hpp"
#include "../ex00/whatever.hpp"

int main()
{
	Array<int> intArray(10);
	Array<double> doubleArray(10);
	Array<Fixed> fixedArray(10);

	for (unsigned int count = 0; count < intArray.Size(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
		fixedArray[count] = count + 0.33f;
	}

	for (unsigned int count = intArray.Size() - 1; count >= 0; --count)
		std::cout << intArray[count] << "\t" << doubleArray[count] << "\t" << fixedArray[count] << '\n';

	return 0;
}
