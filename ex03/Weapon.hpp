#ifndef Weapon_HPP
# define Weapon_HPP
#include <string>
#include <iostream>


class Weapon{
public:
	Weapon(const std::string& type);
	~Weapon();
	const std::string& getType() const;
	void setType(const std::string& type);
private:
	std::string name;	
	
};



#endif 
