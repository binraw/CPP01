#include "Harl.hpp"
#include <functional>

Harl::Harl()
{
}

Harl::~Harl()
{
}


void Harl::complain(std::string level)
{
    int lvl;
    try
    {
        lvl = std::stoi(level);
        std::function <void()> action[] = {NULL, std::bind(&Harl::debug, this), std::bind(&Harl::info, this), std::bind(&Harl::warning, this), std::bind(&Harl::error, this)};
        if (lvl > 0 && lvl <= 4)
            action[lvl]();
        else 
            std::cout << "Error level";
    }
    catch (const std::invalid_argument&)
    {
        std::cout << "Invalid input. Please enter a valid level." << std::endl;
    }
    catch (const std::out_of_range&) 
    {
        std::cout << "Index out of range. Please enter a valid level." << std::endl;
	} 


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