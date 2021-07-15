#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};
    char opt;
    std::string fname = "x_and_y.dat";

    // Attempt to read the file first
    std::ifstream readFile(fname);

    if (readFile.is_open())
    {
        readFile.close();
        std::cout << "File already exists. Press 'a' to append and 'o' to overwrite: ";
        std::cin >> opt;

        if (opt == 'a')
        {
            std::ofstream writeFile(fname, std::ios::app);
            writeFile.setf(std::ios::scientific);
            writeFile.setf(std::ios::showpos);
            writeFile.precision(10);
            writeFile << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << "\n";
            writeFile.flush();
            writeFile << y[0] << " " << y[1] << " " << y[2] << " " << y[3] << "\n";
            writeFile.flush();
            writeFile.close();
        }
        else if (opt == 'o')
        {
            std::ofstream writeFile(fname);
            writeFile.setf(std::ios::scientific);
            writeFile.setf(std::ios::showpos);
            writeFile.precision(10);
            writeFile << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << "\n";
            writeFile.flush();
            writeFile << y[0] << " " << y[1] << " " << y[2] << " " << y[3] << "\n";
            writeFile.flush();
            writeFile.close();
        }
    }
    else
    {
            std::ofstream writeFile(fname);
            writeFile.setf(std::ios::scientific);
            writeFile.setf(std::ios::showpos);
            writeFile.precision(10);
            writeFile << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << "\n";
            writeFile.flush();
            writeFile << y[0] << " " << y[1] << " " << y[2] << " " << y[3] << "\n";
            writeFile.flush();
            writeFile.close(); 
    }



    return 0;
}