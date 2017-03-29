#include <string>
#include "Actor.h"
#pragma once

class Mage : public Actor
{
	public:
		Mage(std::string name);
		~Mage();

		std::string attack() { return name + " casts magic missle at the darkness!"; }	
};