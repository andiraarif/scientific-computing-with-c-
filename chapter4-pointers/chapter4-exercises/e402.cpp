#include <iostream>

int main(int argc, char* argv[])
{
    int a = 5, b = 10;
    int* p_a = &a;
    int* p_b = &b;
    int* p_c = new int;

    *p_c = *p_a;
    *p_a = *p_b;
    *p_b = *p_c;

    std::cout << "*p_a = " << *p_a << "\n";
    std::cout << "*p_b = " << *p_b << "\n";

    return 0;
}