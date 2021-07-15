#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Number of command line arguments = " << argc << "\n";
    for (int i = 0; i < argc; i++)
    {
        std::cout << "Argument " << i << " = " << argv[i] << "\n";
    }

    std::string programName = argv[0];
    int nNodes = atoi(argv[1]);
    double k = atof(argv[2]);

    std::cout << "Program Name\t\t = " << programName << "\n";
    std::cout << "Number of Nodes\t\t = " << nNodes << "\n";
    std::cout << "Thermal Conductivity\t = " << k << "\n";

    return 0;
}