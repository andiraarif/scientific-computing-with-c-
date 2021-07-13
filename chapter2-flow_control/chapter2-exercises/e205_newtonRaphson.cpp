#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    double xPrev, xNext,  f, fprime, epsilon;
    int count = 0;

    std::cout << "--------------- Start Iteration using For Loop ---------------\n";
    xNext = 0.0;
    for (int i = 0; i < 100; i++)
    {
        xPrev = xNext;
        f = exp(xPrev) + pow(xPrev, 3) - 5;
        fprime = exp(xPrev) + 3*pow(xPrev, 2);
        xNext = xPrev - (f/fprime);

        std::cout << "x = " << xNext << " number of iterations = " << i + 1 << "\n";
    }
 
    std::cout << "--------------- Start Iteration using While Loop ---------------\n";
    xNext = 0.0;
    epsilon = 1e-5;
    do
    {
        xPrev = xNext;
        f = exp(xPrev) + pow(xPrev, 3) - 5;
        fprime = exp(xPrev) + 3*pow(xPrev, 2);
        xNext = xPrev - (f/fprime);

        std::cout << "x = " << xNext << " number of iterations = " << count + 1 << "\n";
        count += 1;
    } while (fabs(xNext - xPrev) >= epsilon);

    return 0;
}