#ifndef HumainB_HPP
#define HumainB_HPP
#include "Weapon.hpp"

class HumainB{
public:
	HumainB(std::string name);
	~HumainB();
	void attack();
	void setWeapon(Weapon& w);
	void getWeapon(const std::string weapon);
private:
	Weapon* weapon;
	std::string name;
	
};



#endif 
