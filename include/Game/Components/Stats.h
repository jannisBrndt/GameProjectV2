#pragma once

class Stats {
	private:
		int maxHealth; // maximum health
		int currentHealth; // currentHealth
		int attackDamage; // damage per attack
		int armor; // reducing attackDamage of enemy

	public:
		// Constructor
		Stats(int maxHealth, int attackDamage, int armor);

		// Getters
		int getMaxHealth() const;
		int getCurrentHealth() const;
		int getAttackDamage() const;
		int getArmor() const;

		// Setters
		void setMaxHealth(int amount);
		void setCurrentHealth(int amount);
		void setAttackDamage(int amount);
		void setArmor(int amount);
};
