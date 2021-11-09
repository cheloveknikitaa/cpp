#pragma once

#include <iostream>

template<typename A>
void iter(A *Array, size_t count, void func(A &a))
{
	for (size_t i = 0; i < count; i++)
		func(Array[i]);
}

template<typename T>
void print(T &a)
{
	std::cout << a << " ";
}
