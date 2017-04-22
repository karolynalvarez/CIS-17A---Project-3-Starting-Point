#pragma once
#include "Adventurer.h"
#include <string>
class Mage: public Adventurer
{
public:
	Mage(std::string name, int);
	~Mage();

	std::string Attack() { return " casts magic missle at the darkness!\n"; }	
};

