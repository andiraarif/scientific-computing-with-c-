#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    std::ofstream write("OutputFormatted.dat");
    // Write numbers as +/-x.<13digits>e+/-00
    write.setf(std::ios::scientific);
    write.setf(std::ios::showpos);
    write.precision(13);

    double x = 3.4, y = 0.0000855, z = 984.424;

    for (int i = 0; i < 10; i++)
    {
        write << x << " " << y << " " << z << "\n";
    }

    write.close();
    return 0;
}