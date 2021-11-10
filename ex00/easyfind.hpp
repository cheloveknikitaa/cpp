#pragma once

#include <algorithm>
#include <map>

template<typename T>
typename T::iterator easyfind(T &input, int n)
{
	typename T::iterator it = std::find(input.begin(), input.end(), n);
	if(it == input.end())
		throw std::runtime_error("Not Found");
	return (it);
}

template<typename KEY, typename VALUE>
typename std::map<KEY, VALUE>::iterator easyfind(std::map<KEY, VALUE> &input, int n)
{
	typename std::map<KEY, VALUE>::iterator it = input.find(n);
	if(it == input.end())
		throw std::runtime_error("Not Found");
	return (it);
}