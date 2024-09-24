
#ifndef HumainA_HPP
#define HumainA_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>


class HumainA{
public:
	HumainA(std::string name, Weapon &weapon);
	~HumainA();
	void attack();
private:
	Weapon& ref;
	std::string name;
	
};



#endif
