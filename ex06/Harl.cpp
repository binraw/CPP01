#include "Harl.hpp"


Harl::Harl()
{
    action[0] = NULL;
    action[1] = &Harl::debug;
    action[2] = &Harl::info;
    action[3] = &Harl::warning;
    action[4] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::complain(int index)
{
    while (index <= 4)
    {
        switch (index)
        {
            case 1:
                debug();
                break;
            case 2:
                info();
                break;
            case 3:
                warning();
                break;
            case 4:
                error();
                break;
            default:
                break;
        }
        index++;
    }
}
void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month" << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now"<< std::endl;
}