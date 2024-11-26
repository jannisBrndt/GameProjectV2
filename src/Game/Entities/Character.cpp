#include "../../../include/Game/Entities/Character.h"
#include <iostream>

// Constructor
Character::Character(const std::string& name, const std::string& race, int maxHealth, int attackDamage, int armor)
	: name(name), race(race), stats(maxHealth, attackDamage, armor) {}

// Getters


const std::string& Character::getName() const { return name; }

const std::string& Character::getRace() const { return race; }

const Stats& Character::getStats() const { return stats; }

int Character::getLevel() const { return level; }

int Character::getExperience() const { return experience; }


// Setters



void Character::setName(const std::string& name) { this->name = name; }

void Character::setRace(const std::string& race) { this->race = race; }


// Others


void Character::gainExperience(int amount) {
	experience += amount;
	std::cout << name << " gained " << amount << " experience.\n";

	// check for level up
	while (experience >= experienceToNextLevel) {
		experience -= experienceToNextLevel;
		levelUp();
	}
}

void Character::levelUp() {
	++level;
	stats.increaseMaxHealth(1);
	stats.increaseAttackDamage(1);
	stats.increaseArmor(1);

	std::cout << name << " leveled up to level " << level << "!\n";
}
