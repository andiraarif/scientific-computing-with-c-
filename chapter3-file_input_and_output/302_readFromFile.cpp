#include <cassert>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    int nRows = 24;
    double x[nRows], y[nRows], a[nRows], b[nRows];

    std::ifstream read("301_data.dat");
    assert(read.is_open());

    for (int i = 0; i < nRows; i++)
    {
        read >> x[i] >> y[i];
        std::cout << "x = " << x[i] << " y = " << y[i] << "\n";
    }
    read.close();

    // Start reading again using while loop
    std::ifstream read2("301_data.dat");
    assert(read2.is_open());

    int i = 0;
    while (!read2.eof())
    {
        read2 >> a[i] >> b[i];
        i++;
        std::cout << "a = " << a[i] << " b = " << b[i] << "\n";
    }
    read2.close();

    return 0;
}