#include "NumberArray.h"
#include <iostream>


NumberArray::NumberArray(int size)
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

}

double NumberArray::getMax() const
{

}

double NumberArray::getAverage() const
{

}

void NumberArray::print() const
{

}