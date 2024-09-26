#include "Harl.hpp"

int main(void)
{
    Harl harl;
    std::cout << "Test with 3" << std::endl;
    harl.complain(3);
    std::cout << "Test with 0" << std::endl;
    harl.complain(0);
    std::cout << "Test with 1" << std::endl;
    harl.complain(1);
    std::cout << "Test with 5" << std::endl;
    harl.complain(5);
    std::cout << "Test with -35" << std::endl;
    harl.complain(-35);
    return 0;
}