#include <iostream>

int main(int argc, char* argv[])
{
    /* Array is a variable type in C++ that can sotre vectors and matrices
    It is a widely used variable type since many scientific applications are underpinned
    by algorithms that are based on vectors and matrices */

    int array1[2];
    double array2[2][3];

    array1[0] = 1;
    array1[1] = 10;

    array2[0][0] = 6.4;
    array2[0][1] = -3.1;
    array2[0][2] = 55.0;
    array2[1][0] = 63.0;
    array2[1][1] = -100.9;
    array2[1][2] = 50.8;

    array1[0]++;
    array2[1][2] = array2[0][1] + array2[1][0];

    double array3[3] = {5.0, 1.0, -2.5};
    int array4[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int array5[3];
    // array5 = {1, 2, 3}; will give an error since curly bracket can only be used in accordance with the initialization

    std::cout << array4[1][0] << std::endl;

    return 0;
}