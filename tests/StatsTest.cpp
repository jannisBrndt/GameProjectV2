#include "../include/Game/Components/Stats.h"
#include <gtest/gtest.h>

TEST(StatsTest, StatsInitialization) {
	Stats stats(0,0,0);

	EXPECT_EQ(stats.getMaxHealth(), 0);
	EXPECT_EQ(stats.getCurrentHealth(), 0);
	EXPECT_EQ(stats.getAttackDamage(), 0);
	EXPECT_EQ(stats.getArmor(), 0);
}
