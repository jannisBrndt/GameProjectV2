#include "../../../include/Game/Entities/Character.h"

// Constructor
Character::Character(const std::string& name, const std::string& race, int maxHealth, int attackDamage, int armor)
	: name(name), race(race), stats(maxHealth, attackDamage, armor) {}

// Getters
const std::string& Character::getName() const { return name; }

const std::string& Character::getRace() const { return race; }

const Stats& Character::getStats() const { return stats; }

// Setters
void Character::setName(const std::string& name) { this->name = name; }

void Character::setRace(const std::string& race) { this->race = race; }
