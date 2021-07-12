#include <iostream>

int main(int argc, char* argv[])
{
    int nDays = 5;
    int nCars[nDays] = {34, 58, 57, 32, 43};
    double avgCars;

    avgCars = (double(nCars[0]) + double(nCars[1]) + double(nCars[2]) + double(nCars[3]) + double(nCars[4]))/nDays;

    std::cout << "Average number of cars = " << avgCars << "\n";

    return 0;
}