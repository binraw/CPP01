#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::cout << "Test with 1" << std::endl;
    harl.complain(1);
    std::cout << "Test with 2" << std::endl;
    harl.complain(2);
    std::cout << "Test with 3" << std::endl;
    harl.complain(3);
    std::cout << "Test with 4" << std::endl;
    harl.complain(4);
    std::cout << "Test with 0" << std::endl;
    harl.complain(0);
    std::cout << "Test with 231414" << std::endl;
    harl.complain(231414);
    return 0;
}