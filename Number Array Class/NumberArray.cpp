#include "NumberArray.h"
#include <iostream>

template <typename T>
NumberArray<T>::NumberArray(int array_size)
{
	NumberArray::data = new T[size];

	for (int i = 0; i < size; i++) 
	{
		NumberArray::data[i] = 0;
	}
}

template <typename T>
NumberArray<T>::~NumberArray()
{
	delete[] NumberArray::data;
	std::cout << std::endl << "Memory successfully deallocated.";
}

template <typename T>
void NumberArray<T>::setNumber(int index, T value)
{
	if (index > -1 and index < NumberArray::size) {
		NumberArray::data[index] = value;
	}
	else {
		std::cout << std::endl << "The index is out of bounds.";
	}
}

template <typename T>
T NumberArray<T>::getNumber(int index) const
{
	if (index > -1 and index < NumberArray::size) {
		return NumberArray::data[index];
	}
	else {
		return 0;
	}
}

template <typename T>
T NumberArray<T>::getMin() const
{
	T min = NumberArray::data[0];

	for (int i = 0; i < NumberArray::size; i++)
	{
		if (NumberArray::data[i] < min) {
			min = NumberArray::data[i];
		}
	}
	return min;
}

template <typename T>
T NumberArray<T>::getMax() const
{
	T max = NumberArray::data[0];

	for (int i = 0; i < NumberArray::size; i++)
	{
		if (NumberArray::data[i] > max) {
			max = NumberArray::data[i];
		}
	}
	return max;
}

template <typename T>
T NumberArray<T>::getAverage() const
{
	T average = 0;

	for (int i = 0; i < NumberArray::size; i++)
	{
		average += NumberArray::data[i];
	}
	average /= NumberArray::size;

	return average;

}

template <typename T>
void NumberArray<T>::print() const
{
	std::cout << std::endl;

	for (int i = 0; i < NumberArray::size; i++)
	{
		std::cout << std::endl << NumberArray::data[i];
	}
}

template <typename T>
NumberArray<T>::NumberArray(const NumberArray& other)
{
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = other.data[i];
	}
}

template <typename T>
NumberArray<T>& NumberArray<T>::operator=(const NumberArray& other)
{
	if (this != &other)
	{
		delete[] data;
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = other.data[i];
		}
	}
	return *this;
}