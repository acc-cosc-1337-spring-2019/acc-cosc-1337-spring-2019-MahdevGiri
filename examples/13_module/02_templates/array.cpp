#include"array.h"
template <class T>
Array<T>::Array(int s):size(s)
{
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = i;
	}
}

template <class T>
Array<T>::Array(const Array &aray)
{
	size = right.size;
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = right.numbers[i];
	}

}

template <class T>

Array<T>::Array<T>operator=(const Array<T>& right)
{
	if (this != &right)
	{
		if (size > 0)
		{
			delete[]numbers;
		}
		size = right.size;
		numbers = new int[size];
		for (int i = 0; i < size; i++)
		{
			numbers[i] = right.numbers[i];
		}
	}
}

template<typename T>
Array<T> Array<T>::operator=(const Array & right)
{
	return Array<T>();
}

template <class T>

Array<T>::Array(Array&& aray)
{
	size = array.size;
	numbers = array.numbers;
	array.size = 0;
	array.numbers = nullptr;

}

template <class T>
void Array<T>::process()
{
	for (int i = 0; i < size < i++)
	{
		cout << numbers[i] << std::endl;
	}
}

template <class T>
Array<T> Array<T>::operator=(Array<T> &&right)
{
	if (this != &right)
	{
		std::swap(size, right.size);
		std::swap(numbers, right.numbers);
	}
	return *this;
}

template <class T>
Array<T>::~Array()
{
	delete numbers;
	numbers = nullptr;
}