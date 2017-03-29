#include "Guild.h"
using namespace std;

Guild::Guild(string _name)
{
	this->name = _name;
}
Guild::~Guild() { }

void Guild::AddNPC(string _name)
{
	auto charPtr = make_shared<Actor>(_name);
	npcs.push_back(charPtr);

	//charPtr->
}

string Guild::getInfo()
{
	string output = "Your guild has: \n";	

	output += _mages.size()		> 0 ? std::to_string(_mages.size()) + " mages\n" : "No mages!\n";
	output += _rangers.size()	> 0 ? std::to_string(_rangers.size()) + " rangers\n" : "No rangers!\n";
	output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";
	output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";
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