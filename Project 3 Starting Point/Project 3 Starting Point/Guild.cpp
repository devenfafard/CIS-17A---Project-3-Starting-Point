#include <iostream>
#include <memory>
#include <iterator>
#include "Guild.h"
using namespace std;

Guild::Guild(string _name)
{
	this->name = _name;
}
Guild::~Guild() { }

void Guild::AddNPC(shared_ptr<Actor> _npc)
{
	npcs.push_back(_npc);
}

string Guild::getInfo()
{
	string output = "Your guild has: \n";
	int mageCount, rangerCount, warriorCount, paladinCount = 0;

	for (vector<shared_ptr<Actor>>::iterator it = npcs.begin(); it != npcs.end(); it++)
	{
		if (dynamic_pointer_cast<Mage*>(*it) != nullptr)
		{
			mageCount++;
		}
		if (dynamic_pointer_cast<Ranger*>(*it) != nullptr)
		{
			rangerCount++;
		}
		if (dynamic_pointer_cast<Warrior*>(*it) != nullptr)
		{
			warriorCount++;
		}
		if (dynamic_pointer_cast<Paladin*>(*it) != nullptr)
		{
			paladinCount++;
		}
	}
	
	output += mageCount		> 0 ? std::to_string(mageCount) + " mages\n" : "No mages!\n";
	output += rangerCount	> 0 ? std::to_string(rangerCount) + " rangers\n" : "No rangers!\n";
	output += warriorCount	> 0 ? std::to_string(warriorCount) + " warriors\n" : "No warriors!\n";
	output += paladinCount	> 0 ? std::to_string(paladinCount) + " paladins\n" : "No paladins!\n";

	return output;
}

string Guild::attackWithAllAdventurers()
{
	string output = "You command all forces to attack! \n";
	if (npcs.size() > 0)
	{
		for (auto person : npcs)
		{
			output += person->attack() + "\n";
		}
	}
}