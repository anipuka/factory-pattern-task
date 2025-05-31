#include "gtest/gtest.h"
#include "../src/CharacterFactory.h"

TEST(FactoryTest, CreatePlayer) {
    Character* player = CharacterFactory::create(1);
    ASSERT_NE(nullptr, player);
    EXPECT_EQ("Gandalf", player->getName());
    EXPECT_DOUBLE_EQ(10.0, player->getDamage());
    delete player;
}

TEST(FactoryTest, CreateOrc) {
    Character* orc = CharacterFactory::create(2);
    ASSERT_NE(nullptr, orc);
    EXPECT_EQ("Urbul", orc->getName());
    EXPECT_DOUBLE_EQ(5.0, orc->getDamage());
    delete orc;
}

TEST(FactoryTest, CreateDragon) {
    Character* dragon = CharacterFactory::create(3);
    ASSERT_NE(nullptr, dragon);
    EXPECT_EQ("Bymarth, The Deathlord", dragon->getName());
    EXPECT_DOUBLE_EQ(500.0, dragon->getDamage());
    delete dragon;
}

TEST(FactoryTest, CreateInvalidType) {
    Character* invalid = CharacterFactory::create(99);
    EXPECT_EQ(nullptr, invalid);
}
