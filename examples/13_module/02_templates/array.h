#include<iostream>

#ifndef ARRAY_H
#define ARRAY_H
template <typename T>
class Array
{

public:
	Array(int size);

	Array(const Array &aray);

	Array<T> operator=(const Array& right);
	Array(Array&& aray);

	Array<T> operator=(Array&& right);

	~Array();
	void process();

private:
	int size;
	T* numbers;
};
#endif