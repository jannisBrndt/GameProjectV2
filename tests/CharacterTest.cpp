#include "../include/Game/Entities/Character.h"
#include <gtest/gtest.h>

TEST(CharacterTest, CharacterInitialization) {
	Character test("testName", "testRace", 0, 0, 0);

	EXPECT_EQ(test.getName(), "testName");
	EXPECT_EQ(test.getRace(), "testRace");
	EXPECT_EQ(test.getStats().getMaxHealth(), 0);
	EXPECT_EQ(test.getStats().getCurrentHealth(), 0);
	EXPECT_EQ(test.getStats().getAttackDamage(), 0);
	EXPECT_EQ(test.getStats().getArmor(), 0);
}
