#pragma once
#include <string>

class Warrior : public Adventurer 
{
private:
	std::string _name;
public:
	Warrior(std::string name);
	~Warrior();

	std::string Attack() { return GetName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

