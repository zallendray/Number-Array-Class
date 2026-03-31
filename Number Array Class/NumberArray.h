#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
private:
	double* data = nullptr;

	NumberArray& operator=(const NumberArray& other);

public:
	static const int size = 9;

	NumberArray(int array_size = size);

	~NumberArray();

	void setNumber(int index, double value);

	double getNumber(int index) const;

	double getMin() const;

	double getMax() const;

	double getAverage() const;

	void print() const;

	NumberArray(const NumberArray& other);
};

#endif