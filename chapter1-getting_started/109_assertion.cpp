#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{
    double a;
    std::cout << "Please enter a non-negative number: ";
    std::cin >> a;
    assert(std::isfinite(a));
    assert(a >= 0);
    std::cout << "The square root of " << a << " is " << sqrt(a) << "\n";

    return 0; 
}