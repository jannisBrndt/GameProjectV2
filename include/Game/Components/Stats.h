#pragma once
/*
 * @class Stats
 * @brief This class encapsulates attributes for characters. It provides methods to retrieve and modify the properties.
 */
class Stats {
	private:
		int maxHealth;		// The maximum health of a character.
		int currentHealth; 	// The currentHealth of a character.
		int attackDamage; 	// The attack damage of a character.
		int armor; 		// The armor of a character.

	public:
		/*
		 * @brief The constructor.
		 *
		 * Creates a stats object with specific values for health, attack and armor.
		 *
		 * @param maxHealth The maximum health of a character.
		 * @param attackDamage The attackDamage of a character.
		 * @param armor The armor of a character.
		 */
		Stats(int maxHealth, int attackDamage, int armor);


		/// Getters


		/*
		 * @brief Gets the maxHealth.
		 *
		 * @return The maximum health of a character as an integer.
		 */
		int getMaxHealth() const;


		/*
		 * @brief Gets the currentHealth.
		 *
		 * @return The current health of a character as an integer.
		 */
		int getCurrentHealth() const;


		/*
		 * @brief Gets the attackDamage.
		 *
		 * @return The attack damage of a character as an integer.
		 */
		int getAttackDamage() const;


		/*
		 * @brief Gets the armor.
		 *
		 * @return The armor of a character as an integer.
		 */
		int getArmor() const;


		/// Setters


		/*
		 * @brief Sets the maxixum health.
		 *
		 * Updates the maximum health of a character.
		 *
		 * @param amount The new maximum health value.
		 */
		void setMaxHealth(int amount);


		/*
		 * @brief Sets the current health.
		 *
		 * Updates the current health of a character.
		 *
		 * @param amount The new current health value.
		 */
		void setCurrentHealth(int amount);


		/*
		 * @brief Sets the attack damage.
		 *
		 * Updates the attack damage of a character.
		 *
		 * @param amount The new attack damage value.
		 */
		void setAttackDamage(int amount);


		/*
		 * @brief Sets the armor.
		 *
		 * Updates the armor of a character.
		 *
		 * @param amount The new armor value.
		 */
		void setArmor(int amount);
};
