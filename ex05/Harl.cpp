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
// void Harl::*action[5](void) = 
// {
//     NULL,
//     &Harl::debug,
//     &Harl::info,
//     &Harl::warning,
//     &Harl::error
// }


void Harl::complain(int index)
{
    if (index >= 0 && index < 5 && action[index] != NULL)
    {
        (this->*action[index])();
    }
    else
    {
        std::cout << "Invalid action index" << std::endl;
    }
    // int lvl;
    // try
    // {
    //     std::istringstream iss(level);
    //     iss >> lvl;
    //     action[] = {NULL, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    //     if (lvl > 0 && lvl <= 4)
    //         action[lvl]();
    //     else 
    //         std::cout << "Error level";
    // }
    // catch (const std::invalid_argument&)
    // {
    //     std::cout << "Invalid input. Please enter a valid level." << std::endl;
    // }
    // catch (const std::out_of_range&) 
    // {
    //     std::cout << "Index out of range. Please enter a valid level." << std::endl;
	// } 


}
void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month" << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now"<< std::endl;
}