#include <string>
#include "Actor.h"
#pragma once

class Warrior : public Actor
{
	public:
		Warrior(std::string name);
		Warrior();
		~Warrior();

		std::string attack() { return name + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD'!"; }
};