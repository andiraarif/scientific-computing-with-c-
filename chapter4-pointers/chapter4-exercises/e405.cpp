#include <iostream>
#include <memory>

int main(int argc, char* argv[])
{
    std::shared_ptr<int> p_x(new int);
    std::weak_ptr<int> p_xw;

    std::cout << "p_x use count: " << p_x.use_count() << "\n";
    *p_x = 5;
    p_xw = *p_x;
    std::shared_ptr<int> p_y = p_x;
    std::cout << "p_x use count: " << p_x.use_count() << "\n";
    p_y.reset();
    std::cout << "p_x use count: " << p_x.use_count() << "\n";
    std::cout << "Experiment - before p_x.reset() = " << p_xw << "\n";
    p_x.reset();
    std::cout << "Experiment - after p_x.reset() = " << p_xw << "\n";
    std::cout << "p_x use count: " << p_x.use_count() << "\n";

    return 0;
}