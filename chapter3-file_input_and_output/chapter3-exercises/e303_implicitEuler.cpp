#include <cassert>
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    // Variables declaration
    int N = atoi(argv[1]);
    assert(N > 1);

    double L = 1.0;
    double x[N] = {0}, y[N] = {0};
    double h = L/(N - 1);

    std::string fname = "xy.dat";

    // Calculate x and y
    y[0] = 1;
    for (int i = 1; i < N; i++)
    {
        x[i] = x[i - 1] + h;
        y[i] = y[i - 1]/(1 + h);
    }

    // Write x and y to file
    std::ofstream writeFile(fname);
    writeFile.setf(std::ios::scientific);
    writeFile.setf(std::ios::showpos);
    writeFile.precision(10);

    for (int i = 0; i < N; i++)
    {
        writeFile << x[i] << " " << y[i] << "\n";
    }

    return 0;
}