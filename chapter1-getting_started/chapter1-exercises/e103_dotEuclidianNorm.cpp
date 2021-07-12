#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    double a[3] = {1.0, 2.0, 3.0};
    double b[3] = {4.0, 5.0, 6.0};
    double c, normA, normB;

    c = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
    normA = sqrt(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2));
    normB = sqrt(pow(b[0], 2) + pow(b[1], 2) + pow(b[2], 2));

    std::cout << "The dot product of a and b = " << c << "\n";
    std::cout << "Norm a = " << normA << "\n";
    std::cout << "Norm b = " << normB << "\n";

    return 0;
}