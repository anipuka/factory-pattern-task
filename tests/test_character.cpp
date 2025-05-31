#include "gtest/gtest.h"
#include "../src/Character.h"

// Mock класс для тестирования абстрактного класса Character
class MockCharacter : public Character {
public:
    void attack(Character* enemy) override {
        // Пустая реализация для теста
    }
};

TEST(CharacterTest, NameGetterSetter) {
    MockCharacter character;
    character.setName("TestName");
    EXPECT_EQ("TestName", character.getName());
}

TEST(CharacterTest, DamageGetterSetter) {
    MockCharacter character;
    character.setDamage(42.5);
    EXPECT_DOUBLE_EQ(42.5, character.getDamage());
}
