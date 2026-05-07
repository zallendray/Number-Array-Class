#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
#include <stdexcept>

template<typename T>
class NumberArray
{
private:
	T* data = nullptr;

public:
	static const int size = 9;

	inline NumberArray(int array_size = size) {
		NumberArray::data = new T[size];

		for (int i = 0; i < size; i++)
		{
			NumberArray::data[i] = 0;
		}
	}

	inline ~NumberArray() {
		delete[] NumberArray::data;
		std::cout << std::endl << "Memory successfully deallocated.";
	}

	inline void setNumber(int index, T value) {
		if (index > -1 and index < NumberArray::size) {
			NumberArray::data[index] = value;
		}
		else {
			throw std::out_of_range("The specified index is out of range");
			//std::cout << std::endl << "The index is out of bounds.";
		}
	}

	inline T getNumber(int index) const {
		if (index > -1 and index < NumberArray::size) {
			return NumberArray::data[index];
		}
		else {
			throw std::out_of_range("The specified index is out of range");
			//return 0;
		}
	}

	inline T getMin() const {
		T min = NumberArray::data[0];

		for (int i = 0; i < NumberArray::size; i++)
		{
			if (NumberArray::data[i] < min) {
				min = NumberArray::data[i];
			}
		}
		return min;
	}

	inline T getMax() const {
		T max = NumberArray::data[0];

		for (int i = 0; i < NumberArray::size; i++)
		{
			if (NumberArray::data[i] > max) {
				max = NumberArray::data[i];
			}
		}
		return max;
	}

	inline T getAverage() const {
		T average = 0;

		for (int i = 0; i < NumberArray::size; i++)
		{
			average += NumberArray::data[i];
		}
		average /= NumberArray::size;

		return average;

	}

	inline void print() const {
		std::cout << std::endl;

		for (int i = 0; i < NumberArray::size; i++)
		{
			std::cout << std::endl << NumberArray::data[i];
		}
	}

	inline NumberArray(const NumberArray& other) {
		data = new T[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = other.data[i];
		}
	}

	inline NumberArray& operator=(const NumberArray& other) {
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
};

#endif