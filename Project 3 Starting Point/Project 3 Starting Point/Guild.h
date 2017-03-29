#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
using namespace std;

class Guild
{
	private:
		vector<shared_ptr<Actor>> npcs;
		string name;
		int gold = 0;
		int rangerCount = 0;
		int warriorCount = 0;
		int paladinCount = 0;
		int mageCount = 0;

	public:
		Guild(string name);
		~Guild();

		string getName() const { return name; }
		void AddNPC(string _name);

		string getInfo();
		/*string AttackWithMages();
		string AttackWithPaladins();
		string AttackWithRangers();
		string AttackWithWarriors();*/
		string attackWithAllAdventurers();
};