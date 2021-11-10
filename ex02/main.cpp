#include "mutantstack.hpp"
#include <iostream>
#include <random>
#include <ctime>

int main ()
{
	{
		MutantStack<int> mstack;
		std::cout << std::boolalpha << mstack.empty() << std::endl;
		std::srand(std::time(nullptr));
		for(size_t i = 0; i < 20; ++i) {
			int random_variable = std::rand();
			mstack.push(random_variable % 100);
		}
		std::cout << std::boolalpha << mstack.empty() << std::endl;
		std::cout << "Print stack!\n";
		for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl;
		std::cout << "Size: " <<mstack.size() << std::endl;
		MutantStack<int> mstack2(mstack);
		mstack2.pop();
		mstack2.pop();
		mstack2.pop();
		mstack2.pop();
		MutantStack<int> mstack3 = mstack2;
		std::cout << "Print stack after 4 delete element!\n";
		std::cout << "<+====mstack====+>" << std::endl;
		for(MutantStack<int>::iterator begin = mstack.begin(); begin != mstack.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl << "<+====mstack2====+>" << std::endl;
		for(MutantStack<int>::iterator begin = mstack2.begin(); begin != mstack2.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl << "<+====mstack3====+>" << std::endl;
		for(MutantStack<int>::iterator begin = mstack3.begin(); begin != mstack3.end(); ++begin) {
			std::cout << *begin << ' ';
		}
		std::cout << std::endl;
		std::cout << "Size stack: " <<mstack.size() << std::endl;
		std::cout << "Size stack2: " <<mstack2.size() << std::endl;
		std::cout << "Size stack3: " <<mstack3.size() << std::endl;
	}
	{
		std::cout << "<+====DFL_TEST====+>" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		return 0;
	}
}