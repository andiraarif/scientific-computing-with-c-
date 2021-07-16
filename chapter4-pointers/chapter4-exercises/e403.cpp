#include <iostream>

int main(int argc, char* argv[])
{
    for (int i = 0; i < 1000000; i ++)
    {
        double* a = new double[3];
        double* b = new double[3];
        double c = 0;

        for (int j = 0; j < 3; j++)
        {
            a[j] = j;
            b[j] = 2*b[j];
            c += a[j]*b[j];
        }

        std::cout << "Iteration number: " << i <<  " c = " << c << "\n";

        delete[] a;
        delete[] b;
    }
    return 0;
}