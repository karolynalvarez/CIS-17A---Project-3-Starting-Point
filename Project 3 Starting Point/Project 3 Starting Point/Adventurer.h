#pragma once
#include <string>
class Adventurer
{
private:
	std::string _name;
	int _type;
public:
	Adventurer(std::string name, int type);
	int GetType() const { return _type; }
	~Adventurer();
	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + " punches with meaty fists! "; }
};

