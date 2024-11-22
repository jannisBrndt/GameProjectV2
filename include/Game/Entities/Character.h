#pragma once

#include "../Components/Stats.h"
#include <string>


/*
 * @class Character
 *
 * @brief Class representing a game character.
 *
 * The character class encapsulates the data and functionality for a character.
 * It provides methods to retrieve and modify these properties.
 */
class Character {
	private:
		std::string name; 	// The name of the character.
		std::string race; 	// The race of the character (currently not limitated).
		Stats stats;		// The stats (health, attack, armor, (more follows)) of a character.
	public:
		
		/*
		 * @brief Constructor to create a new character.
		 *
		 * Initializes a character with name, race and stats.
		 *
		 * @param name The character's name. 
		 * @param race The character's race.
		 * @param health the character's health.
		 * @param attackDamage The character's attack damage.
		 * @param armor The character's armor.
		 */
		Character(const std::string& name, const std::string& race, int health, int attackDamage, int armor);


		// Getters
		

		/*
		 * @brief Gets the character's name.
		 *
		 * @return The name of the character as a string 
		 */
		const std::string& getName() const;


		/*
		 * @brief Gets the character's race.
		 *
		 * @return The race of the character as a string.
		 */
		const std::string& getRace() const;


		/*
		 * @brief Gets the character's stats.
		 *
		 * @return A reference to the characters's stats object.
		 */
		const Stats& getStats() const;


		// Setters
		

		/*
		 * @brief Sets the character's name.
		 * 
		 * Updates the name of the character.
		 *
		 * @param name The new name of the character.
		 */
		void setName(const std::string& name);


		/*
		 * @brief Sets the character's race.
		 *
		 * Updates the race of the character.
		 *
		 * @param race The new race of the character.
		 */
		void setRace(const std::string& race);
};
