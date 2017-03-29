#include <string>
#include "Actor.h"
#pragma once

class Paladin : public Actor
{
	public:
		Paladin(std::string _name);
		Paladin();
		~Paladin();

		std::string attack() { return name + " swings a giant maul at his foes!"; }
};