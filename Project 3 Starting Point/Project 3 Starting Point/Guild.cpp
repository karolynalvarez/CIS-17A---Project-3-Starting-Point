#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::AddAdventurer(std::string name, int characterType)
{
	if (characterType == 1)
	{
		auto newAdventurer = std::make_shared<Mage>(name, characterType);
		allMages++;
		_adventurers.push_back(newAdventurer);
	} else if (characterType == 2) {
		auto newAdventurer = std::make_shared<Ranger>(name, characterType);
		allRangers++;
		_adventurers.push_back(newAdventurer);
	} else if (characterType == 3) {
		auto newAdventurer = std::make_shared<Paladin>(name, characterType);
		allPaladins++;
		_adventurers.push_back(newAdventurer);
	} else if (characterType == 4) {
		auto newAdventurer = std::make_shared<Warrior>(name, characterType);
		allWarriors++;
		_adventurers.push_back(newAdventurer);
	}
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	
	
	output += allMages		> 0 ? std::to_string(allMages) + " mages\n" : "No mages!\n";
	output += allRangers	> 0 ? std::to_string(allRangers) + " rangers\n" : "No rangers!\n";
	output += allWarriors	> 0 ? std::to_string(allWarriors) + " warriors\n" : "No warriors!\n";
	output += allPaladins	> 0 ? std::to_string(allPaladins) + " paladins\n" : "No paladins!\n";
	return output;
}

std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto d : _adventurers) {
			if (d->GetType() == 1){
				output += "Your powerful mages, " + d->GetName() + ", ";
				output += d->Attack() + "\n\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto d : _adventurers) {
			if (d->GetType() == 1) {
				output += "Your unstoppable paladin, " + d->GetName() + ", ";
				output += d->Attack() + "\n\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto d : _adventurers) {
			if (d->GetType() == 1) {
				output += "Your determined ranger, " + d->GetName() + ", ";
				output += d->Attack() + "\n\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithWarriors()
{
	std::string output = "You command your warriors to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto d : _adventurers) {
			if (d->GetType() == 1) {
				output += "Your relentless warrior, " + d->GetName() + ", ";
				output += d->Attack() + "\n\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	for (auto adventurer : _adventurers) {
		if (adventurer->GetType() == 1) {
			output += "Mage, " + adventurer->GetName() + " , ";
			output += adventurer->Attack();
		}
	}
	for (auto adventurer : _adventurers) {
		if (adventurer->GetType() == 2) {
			output += "Ranger, " + adventurer->GetName() + " , ";
			output += adventurer->Attack();
		}
	}
	for (auto adventurer : _adventurers) {
		if (adventurer->GetType() == 3) {
			output += "Paladin, " + adventurer->GetName() + " , ";
			output += adventurer->Attack();
		}
	}
	for (auto adventurer : _adventurers) {
		if (adventurer->GetType() == 4) {
			output += "Warrior, " + adventurer->GetName() + " , ";
			output += adventurer->Attack();
		}
	}
	return output;
}
