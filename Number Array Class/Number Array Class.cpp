

#include <iostream>
#include <random>
#include "NumberArray.h"

int main()
{
    std::cout << "---NUMBERARRAY TESTS WITH DOUBLE---" << std::endl;
    NumberArray<double> NA;

    std::cout << "Default Array:";
    NA.print();

    std::random_device randev;
    std::mt19937 rng(randev());
    std::uniform_int_distribution<int>dist(0, 1000);


    for (int i = 0; i < NumberArray<double>::size; i++) {
        int x = dist(randev);

        double y = x;
        y /= 1000;

        try {
            NA.setNumber(i, y);
        }
        catch (const std::out_of_range& e) {
            std::cerr << "The requested action could not be performed." << std::endl;
        }
    }
    
    std::cout << std::endl << std::endl << "Random Array:";
    NA.print();

    std::cout << std::endl << std::endl << "Average Value: " << std::endl << NA.getAverage() << std::endl;
    std::cout << std::endl << std::endl << "Max Value: " << std::endl << NA.getMax() << std::endl;
    std::cout << std::endl << std::endl << "Min Value: " << std::endl << NA.getMin() << std::endl;

    std::cout << std::endl << std::endl << "Number 5: " << std::endl;
    try {
        std::cout << NA.getNumber(4) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "The requested action could not be performed." << std::endl;
    }
    std::cout << std::endl << std::endl << "Number 41: " << std::endl;
    try {
        std::cout << NA.getNumber(40) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "The requested action could not be performed." << std::endl;
    }


    std::cout << std::endl << "Copy Contructor and Overloaded Assignment Operator Tests:" << std::endl << std::endl;

    NumberArray<double> a;

    for (int i = 0; i < NumberArray<double>::size; i++) {
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

    for (int i = 0; i < NumberArray<double>::size; i++) {
        b.setNumber(i, i+20);
    }

    
    a = a;
    std::cout << std::endl << "NEW ARRAY B:" << std::endl;
    b.print();
    std::cout << std::endl << "ASSIGNED ARRAY A:" << std::endl;
    a.print();




    std::cout << std::endl << std::endl <<"---NUMBERARRAY TESTS WITH INT---" << std::endl;
    NumberArray<int> NA_INT;

    std::cout << "Default Array:";
    NA_INT.print();

    for (int i = 0; i < NumberArray<int>::size; i++) {
        int x = dist(randev);

        double y = x;

        try {
            NA_INT.setNumber(i, y);
        }
        catch (const std::out_of_range& e) {
            std::cerr << "The requested action could not be performed." << std::endl;
        }
    }

    std::cout << std::endl << std::endl << "Random Array:";
    NA_INT.print();

    std::cout << std::endl << std::endl << "Average Value: " << std::endl << NA_INT.getAverage() << std::endl;
    std::cout << std::endl << std::endl << "Max Value: " << std::endl << NA_INT.getMax() << std::endl;
    std::cout << std::endl << std::endl << "Min Value: " << std::endl << NA_INT.getMin() << std::endl;

    std::cout << std::endl << std::endl << "Number 5: " << std::endl;
    try {
        std::cout << NA_INT.getNumber(4) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "The requested action could not be performed." << std::endl;
    }
    std::cout << std::endl << std::endl << "Number 41: " << std::endl;
    try {
        std::cout << NA_INT.getNumber(40) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "The requested action could not be performed." << std::endl;
    }


    std::cout << std::endl << "Copy Contructor and Overloaded Assignment Operator Tests:" << std::endl << std::endl;

    NumberArray<int> a_int;

    for (int i = 0; i < NumberArray<int>::size; i++) {
        a_int.setNumber(i, i);
    }

    NumberArray b_int(a_int);
    std::cout << std::endl << "ARRAY A:" << std::endl;
    a_int.print();
    std::cout << std::endl << "ARRAY B:" << std::endl;
    b_int.print();

    a_int.setNumber(3, 8);
    std::cout << std::endl << "MODIFIED ARRAY A:" << std::endl;
    a_int.print();
    std::cout << std::endl << "ARRAY B:" << std::endl;
    b_int.print();

    for (int i = 0; i < NumberArray<int>::size; i++) {
        b_int.setNumber(i, i + 20);
    }


    a_int = a_int;
    std::cout << std::endl << "NEW ARRAY B:" << std::endl;
    b_int.print();
    std::cout << std::endl << "ASSIGNED ARRAY A:" << std::endl;
    a_int.print();
}

