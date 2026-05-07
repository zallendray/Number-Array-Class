#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

template<typename T>
class NumberArray
{
private:
	T* data = nullptr;

public:
	static const int size = 9;

	NumberArray(int array_size = size);

	~NumberArray();

	void setNumber(int index, T value);

	T getNumber(int index) const;

	T getMin() const;

	T getMax() const;

	T getAverage() const;

	void print() const;

	NumberArray(const NumberArray& other);

	NumberArray& operator=(const NumberArray& other);
};

#endif