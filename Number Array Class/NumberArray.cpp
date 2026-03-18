#include "NumberArray.h"
#include <iostream>


NumberArray::NumberArray(int array_size)
{
	NumberArray::data = new double[size];

	for (int i = 0; i < size; i++) 
	{
		NumberArray::data[i] = 0;
	}
}

NumberArray::~NumberArray()
{
	delete[] NumberArray::data;
	std::cout << std::endl << "Memory successfully deallocated.";
}

void NumberArray::setNumber(int index, double value)
{
	if (index > -1 and index < NumberArray::size) {
		NumberArray::data[index] = value;
	}
	else {
		std::cout << std::endl << "The index is out of bounds.";
	}
}

double NumberArray::getNumber(int index) const
{
	if (index > -1 and index < NumberArray::size) {
		return NumberArray::data[index];
	}
	else {
		return 0;
	}
}

double NumberArray::getMin() const
{
	double min = NumberArray::data[0];

	for (int i = 0; i < NumberArray::size; i++)
	{
		if (NumberArray::data[i] < min) {
			min = NumberArray::data[i];
		}
	}
	return min;
}

double NumberArray::getMax() const
{
	double max = NumberArray::data[0];

	for (int i = 0; i < NumberArray::size; i++)
	{
		if (NumberArray::data[i] > max) {
			max = NumberArray::data[i];
		}
	}
	return max;
}

double NumberArray::getAverage() const
{
	double average = 0;

	for (int i = 0; i < NumberArray::size; i++)
	{
		average += NumberArray::data[i];
	}
	average /= NumberArray::size;

	return average;

}

void NumberArray::print() const
{
	std::cout << std::endl;

	for (int i = 0; i < NumberArray::size; i++)
	{
		std::cout << std::endl << NumberArray::data[i];
	}
}