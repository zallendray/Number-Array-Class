

#include <iostream>
#include <random>
#include "NumberArray.h"

int main()
{
    NumberArray NA;

    std::cout << "Default Array:";
    NA.print();

    std::random_device randev;
    std::mt19937 rng(randev());
    std::uniform_int_distribution<int>dist(0, 1000);


    for (int i = 0; i < NumberArray::size; i++) {
        int x = dist(randev);

        double y = x;
        y /= 1000;

        NA.setNumber(i, y);
    }
    
    std::cout << std::endl << std::endl << "Random Array:";
    NA.print();

    std::cout << std::endl << std::endl << "Average Value: " << std::endl << NA.getAverage() << std::endl;
    std::cout << std::endl << std::endl << "Max Value: " << std::endl << NA.getMax() << std::endl;
    std::cout << std::endl << std::endl << "Min Value: " << std::endl << NA.getMin() << std::endl;
    std::cout << std::endl << std::endl << "Number 5: " << std::endl << NA.getNumber(4) << std::endl;
    std::cout << std::endl << std::endl << "Number 41: " << std::endl << NA.getNumber(40) << std::endl;


    std::cout << "Copy Contructor and Overloaded Assignment Operator Tests:" << std::endl << std::endl;

    NumberArray a;

    for (int i = 0; i < NumberArray::size; i++) {
        a.setNumber(i, i);
    }

    NumberArray b(a);
    std::cout << std::endl << "ARRAY A:" << std::endl;
    a.print();
    std::cout << std::endl << "ARRAY B:" << std::endl;
    b.print();

    a.setNumber(3, 8);
    std::cout << std::endl << "MODIFIED ARRAY A:" << std::endl;
    a.print();
    std::cout << std::endl << "ARRAY B:" << std::endl;
    b.print();

    for (int i = 0; i < NumberArray::size; i++) {
        b.setNumber(i, i+20);
    }

    std::cout << std::endl << "NEW ARRAY B:" << std::endl;
    b.print();
    a = b;
    std::cout << std::endl << "ASSIGNED ARRAY A:" << std::endl;
    a.print();
}

