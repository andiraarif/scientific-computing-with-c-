#include <iostream>

int main(int argc, char* argv[])
{
    /*
    int row, column;
    double temperature;
    row = 1;
    column = 2;
    temperature = 1.0;

    int row = 2, column = 3;
    double temperature = 2.0;
    */

    int row = 3, column = 4;
    row = column = 5; // not recommended although it's true

    std::cout << "Row = " << row << " Column = " << column << std::endl;

    const double density = 1.225;
    double tolerance = 1e-12;

    // The range of numbers that may be stored using each of these following variable types
    // depends on the system used

    int integer1;
    short int integer2; // requires the allocation of less memory but not significant
    long int integer3; // range 9e18

    signed long int integer4; // can store both positive and negative number
    unsigned int integer5; // can only store non-negative number

    float floatingNumber1; //
    double floatingNumber2; // recommended for scientific computing for avoiding rounding errors
    long double floatingNumber3; // not significantly differ from double

    return 0;
}
