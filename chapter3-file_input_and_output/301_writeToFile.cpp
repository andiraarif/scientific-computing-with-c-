#include <cassert>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[])
{
    double x[3] = {0.01231, 1.0, 0.0};
    double y[3] = {0.0, 0.0, 1.0};

    std::ofstream write("301_data.dat", std::ios::app);
    write.precision(2);
    assert(write.is_open());

    for (int i = 0; i < 3; i++)
    {
        write << x[i] << " " << y[i] << "\n";
    }
    write.close();
    return 0;
}