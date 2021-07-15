#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    std::string fname = "x_and_y.dat";
    std::ifstream readFile (fname);

    if (!readFile.is_open())
    {
        return 1;
    }

    int nRows = 0;
    while (!readFile.eof())
    {
        double dummy1, dummy2, dummy3, dummy4;
        readFile.fail();
        readFile >> dummy1 >> dummy2 >> dummy3 >> dummy4;
        nRows++;
    }
    std::cout << "Number of Rows = " << nRows << "\n";
    readFile.close();
 
    return 0;
}