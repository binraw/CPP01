#ifndef HARL_HPP
# define HARL_HPP
#include <string>
#include "iostream"
#include <sstream>
class Harl
{

public:
    Harl();
    ~Harl();
    void complain(int index);
   
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*action[5])(void);
};


#endif