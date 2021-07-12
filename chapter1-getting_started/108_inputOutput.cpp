#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string name;
    std::cout<< "Enter your name and then hit ENTER: ";
    std::getline(std::cin, name);
    std::cout<< "Your name is " << name << "\n";

    return 0;
}