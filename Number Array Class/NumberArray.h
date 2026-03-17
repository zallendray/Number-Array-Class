#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray
{
private:
	int size;
	double* data;

public:
	NumberArray(int size = MAX_SIZE);

	~NumberArray();

	void setNumber(int index, double value);

	double getNumber(int index) const;

	double getMin() const;

	double getMax() const;

	double getAverage() const;

	void print() const;

};

#endif