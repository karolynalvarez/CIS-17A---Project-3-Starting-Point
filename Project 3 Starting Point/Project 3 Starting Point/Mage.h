#pragma once
#include "Adventurer.h"
#include <string>
class Mage
{
private:
	std::string _name;
public:
	Mage(std::string name);
	~Mage();

	std::string GetName() const { return _name; }
	std::string Attack() { return _name + " casts magic missle at the darkness!"; }	
};

