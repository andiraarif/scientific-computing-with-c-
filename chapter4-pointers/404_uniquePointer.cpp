#include <iostream>
#include <memory>
#include <cassert>

int main(int argc, char* argv[])
{
    std::unique_ptr<int> p_x(new int);
    *p_x = 5;
    std::cout << "p_x address = " << p_x.get() << "\n";
    std::cout << "p_x value   = " << *p_x << "\n";

    int* p_y = p_x.get();
    *p_y = 6;

    std::cout << "p_x value   = " << *p_x << "\n";

    std::unique_ptr<int> p_z;

    p_z = std::move(p_x);
    *p_z = 7;

    assert(p_z);
    assert(!p_x);
    p_z.reset();
    assert(!p_z);

    return 0;
}