#include <iostream>

int main(int argc, char* argv[])
{
    int sum = 0, inputNum = 0;

    while ((inputNum != -1) && (sum <= 100))
    {
        std::cout << "Enter an integer number: ";
        std::cin >> inputNum;

        if (inputNum == -2)
        {
            sum = 0;
            std::cout << "Sum has been reset to 0\n";
        }
        else
        {
            sum += inputNum;
            std::cout << "Total number: " << sum << "\n";
        }
    }

    return 0;
}