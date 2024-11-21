#include "../../../include/Game/Components/Stats.h"

// Constructor
Stats::Stats(int maxHealth, int attackDamage, int armor) : maxHealth(maxHealth), attackDamage(attackDamage), armor(armor), currentHealth(maxHealth) {}

// Getters
int Stats::getCurrentHealth() const {
	return currentHealth;
}

int Stats::getMaxHealth() const {
	return maxHealth;
}

int Stats::getAttackDamage() const {
	return attackDamage;
}

int Stats::getArmor() const {
	return armor;
}

void Stats::setMaxHealth(int amount) {
	this->maxHealth = amount;
}

void Stats::setCurrentHealth(int amount) {
	this->currentHealth = amount;
}

void Stats::setAttackDamage(int amount) {
	this->attackDamage = amount;
}

void Stats::setArmor(int amount) {
	this->armor = amount;
}
