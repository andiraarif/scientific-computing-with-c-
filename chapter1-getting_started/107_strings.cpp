#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::string city; //not the std::
    city = "Wisconsin"; // note the double quotation marks
    std::cout << "String length = " << city.length() << "\n";
    std::cout << "Third character = " << city.at(2) << "\n";
    std::cout << "Third character = " << city[2] << "\n";
    std::cout << city << "\n";
    std::cout << city.c_str() << "\n"; // first convert the string into C string type
    
    return 0;
}
