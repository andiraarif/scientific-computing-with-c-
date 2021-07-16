#include <iostream>

int main(int argc, char* argv[])
{
    int i = 5;
    int* p_j;
    int* p_k;

    p_j = &i;
    *p_j = *p_j*5;
    
    p_k = new int;
    *p_k = i;

    *p_j = 0;

    std::cout << "i = " << i << "\n";
    std::cout << "*p_k = " << *p_k << "\n";
    std::cout << "*p_j = " << *p_j << "\n";

    return 0;
}