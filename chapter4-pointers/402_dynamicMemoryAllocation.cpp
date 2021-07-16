#include <iostream>

int main(int argc, char* argv[])
{
    // Pointer is useful to allocate a memory for an array whose size is not known in advance
    // Be sure to always free up the memory then it is no longer used

    // ------------------------- Scalar -------------------------
    double* a;
    a = new double;

    std::cout << "// ------------------------- Scalar -------------------------\n";
    std::cout << "a address with a = " << a << "\n";
    std::cout << "a address with &*a = " << &*a << "\n";
    std::cout << "a address with a + 0 = " << a + 0 << "\n";
    std::cout << "\n";

    // ------------------------- Vector -------------------------
    double* b;
    b= new double[2];

    std::cout << "// ------------------------- Vector -------------------------\n";
    std::cout << "b[0] address with b = " << b << "\n";
    std::cout << "b[0] address with &b[0] = " << &b[0] << "\n";
    std::cout << "b[0] address with &*(b + 0) = " << &*(b + 0) << "\n";
    std::cout << "b[0] address with b + 0 = " << b + 0 << "\n";
    std::cout << "\n";

    std::cout << "b[1] address with &b[1] = " << &b[1] << "\n";
    std::cout << "b[1] address with &*(b + 1) = " << &*(b + 1) << "\n";
    std::cout << "b[1] address with b + 1 = " << b + 1 << "\n";
    std::cout << "\n";

    // ------------------------- Matrices -------------------------
    double** c;
    c = new double* [2];
    for (int i = 0; i < 2; i++)
    {
        c[i] = new double[2];
    }

    std::cout << "// ------------------------- Matrix -------------------------\n";
    std::cout << "c[0][0] address with c = " << c << "\n";
    std::cout << "c[0][0] address with &c[0][0] = " << &c[0][0] << "\n";
    std::cout << "c[0][0] address with &*(&c[0][0] + 0) = " << &*(&c[0][0] + 0) << "\n";
    std::cout << "c[0][0] address with &c[0][0] + 0 = " << &c[0][0] + 0 << "\n";
    std::cout << "\n";

    std::cout << "c[0][1] address with &c[0][1] = " << &c[0][1] << "\n";
    std::cout << "c[0][1] address with &*(&c[0][1] + 0) = " << &*(&c[0][1] + 0) << "\n";
    std::cout << "c[0][1] address with &c[0][1] + 0 = " << &c[0][1] + 0 << "\n";
    std::cout << "\n";

    return 0;
}