#include <iostream>

int main(int argc, char* argv[])
{
    /* This is a comment and will be ignored by the compiler.
    Comments are useful to explain in English what
    the program does */

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

    return 0;
}
