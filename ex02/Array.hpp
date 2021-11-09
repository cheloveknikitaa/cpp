#pragma once

#include <iostream>
#include <assert.h>

template<class T>
class Array
{
private:
	unsigned int _size_arr;
	T *_arr;
public:
	Array() : _size_arr(0), _arr(NULL) {}
	Array(unsigned int n)
	{
		this->_arr = new T[n];
		this->_size_arr = n;
	}
	Array(Array &raw) : _size_arr(0), _arr(NULL)
	{
		*this = raw;
	}
	Array &operator=(Array &raw)
	{
		if (this->_arr == raw._arr)
			return (*this);
		if (this->_arr != NULL)
			delete[] this->_arr;
		this->_arr = new T[raw._size_arr];
		this->_size_arr = raw._size_arr;
		for (unsigned int i = 0; i < this->_size_arr ; ++i)
		{
			this->_arr[i] = raw[i];
		}
		return (*this);
	}
	T &operator[](unsigned int i)
	{
		if (i < this->_size_arr)
			return (this->_arr[i]);
		else
			throw std::out_of_range("OUT OF RANGE");
	}
	~Array()
	{
		if (this->_arr)
			delete[] this->_arr;
		this->_arr = NULL;
	}
	unsigned int Size();
};

template<typename T>
unsigned int Array<T>::Size() { return (this->_size_arr); }
