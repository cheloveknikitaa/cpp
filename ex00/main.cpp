#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <set>

int main()
{
{
	std::cout << "<+====TEST_VECTOR====+>" << std::endl;
	std::vector<int> myVector;
	for (int count=0; count < 5; ++count)
		myVector.push_back(count);

	std::vector<int>::const_iterator it;
	it = myVector.begin();
	while (it != myVector.end())
		{
		std::cout << *it << " ";
		++it;
		}
	std::cout << '\n';
	try
	{
		std::cout << "find 4" << std::endl;
		std::vector<int>::iterator it1 = easyfind(myVector, 4);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
		std::cout << "find 5" << std::endl;
		it1 = easyfind(myVector, 5);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unsuccessfully : " << e.what() << '\n';
	}
}
{
	std::cout << "<+====TEST_LIST====+>" << std::endl;
	std::list<int> myList;
	for (int count=0; count < 5; ++count)
		myList.push_back(count);

	std::list<int>::const_iterator it;
	it = myList.begin();
	while (it != myList.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << '\n';
	try
	{
		std::cout << "find 4" << std::endl;
		std::list<int>::iterator it1 = easyfind(myList, 4);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
		std::cout << "find 5" << std::endl;
		it1 = easyfind(myList, 5);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unsuccessfully : " << e.what() << '\n';
	}
}
{
	std::cout << "<+====TEST_SET====+>" << std::endl;
	std::set<int> mySet;
	mySet.insert(8);
	mySet.insert(3);
	mySet.insert(-4);
	mySet.insert(9);
	mySet.insert(2);

	std::set<int>::const_iterator it;
	it = mySet.begin();
	while (it != mySet.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << '\n';
		try
	{
		std::cout << "find -4" << std::endl;
		std::set<int>::iterator it1 = easyfind(mySet, -4);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
		std::cout << "find 5" << std::endl;
		it1 = easyfind(mySet, 5);
		std::cout << "Successfully : " << *it1 << " " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unsuccessfully : " << e.what() << '\n';
	}
}
{
	std::cout << "<+====TEST_MAP====+>" << std::endl;
	std::map<int, std::string> myMap;
	myMap.insert(std::make_pair(3, "cat"));
	myMap.insert(std::make_pair(2, "dog"));
	myMap.insert(std::make_pair(5, "chicken"));
	myMap.insert(std::make_pair(4, "lion"));
	myMap.insert(std::make_pair(1, "spider"));

	std::map<int, std::string>::const_iterator it;
	it = myMap.begin();
	while (it != myMap.end())
	{
		std::cout << it->first << "=" << it->second << " ";
		++it;
	}
	std::cout << '\n';
	try
	{
		std::cout << "find 4" << std::endl;
		std::map<int, std::string>::iterator it1 = easyfind(myMap, 4);
		std::cout << "Successfully : " << it1->first << "=" << it1->second << std::endl;
		std::cout << "find 5" << std::endl;
		it1 = easyfind(myMap, 5);
		std::cout << "Successfully : " << it1->first << "=" << it1->second << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unsuccessfully : " << e.what() << '\n';
	}
}
}