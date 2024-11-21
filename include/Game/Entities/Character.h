#pragma once

#include "../Components/Stats.h"
#include <string>

class Character {
	private:
		std::string name;
		std::string race;
		Stats stats;
	public:
		// Constructor
		Character(const std::string& name, const std::string& race, int health, int attackDamage, int armor);

		// Getters
		const std::string& getName() const;
		const std::string& getRace() const;
		const Stats& getStats() const;

		// Setters
		void setName(const std::string& name);
		void setRace(const std::string& race);
};
