#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    double x = 1.0, y = 2.0, z;
 
    z = x + y;
    z = x - y;
    z = x/y;
    z = x*y;
    z = sqrt(x);
    z = exp(y);
    z = pow(x, y);
    z = M_PI;

    std::cout << "z = " << z << std::endl;

    double a = 7.8, b = 1.65, u = -3.4, c;

    c = fmod(a, b); // remainder floating value when x is divided by y
    //c = atan2(a, b); // inverse tangent in radians
    //c = fabs(u); // absolute floating value of u

    std::cout << "c = " << c << std::endl;

    // Division of Integers

    //Wrong operations
    int i1 = 5, j1 = 2, k1;
    k1 = i1/j1;
    std::cout << "k1 = " << k1 << "(wrong operation)\n";

    int i2 = 5, j2 = 2;
    double k2 = i2/j2;
    std::cout << "k2 = " << k2 << "(wrong operation)\n";

    // Correct operations
    int i3 = 5, j3 = 2;
    double k3 = double(i3)/double(j3); //double(int number) is called explicit type conversion
    std::cout << "k3 = " << k3 << "(correct operation)\n";

    return 0;
}