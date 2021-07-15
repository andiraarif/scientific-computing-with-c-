#include <iostream>

int main(int argc, char* argv[])
{
    // Pointer variable: a variable that store an address of another 
    // variable with certain type

    //double* p_x; // same with double *p_x, p_ is based on the C++ coding convention
    //int* p_i;

    // For declaring multiple pointer variables, the asterisk must be place before
    // the variable name and needs to be repeated
    // Tips: One pointer per line
    //double *p_x, *p_y;
    //int *p_i, j;

    // Examples
    double x, y;
    double* p_x;
    double* p_y;

    x = 1.0;
    y = 2.0;

    p_x = &x;
    p_y = &y;

    std::cout << "The address of x = " << p_x << "\n";
    std::cout << "The value of address p_x = " << *p_x << "\n"; // pointer de-reference

    // IMPORTANT: a variable pointer MUST BE FIRST ASSIGNED A VALID ADDRESS
    // Below is an example that may cause problems that are difficult to locate
    // double* p_a;
    // *p_a = 1.0;

    // Solution
    double *p_a;
    p_a = new double; // assign an address to p_a
    *p_a = 1.0; // stores 1.0 in memory with address p_a
    delete p_a; // delete memory for re_use

    // Another potential problem: pointer aliasing
    double b;
    double* p_b;
    b = 3.0;
    p_b = &b;
    std::cout << "b = " << b << "\n";
    *p_b = 2.0;
   std::cout << "b = " << b << "\n";

    return 0;
}