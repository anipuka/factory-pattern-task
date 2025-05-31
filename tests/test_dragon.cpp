#include "gtest/gtest.h"
#include "../src/Dragon.h"
#include "../src/Character.h"

// Mock класс для тестирования атаки
class MockCharacter : public Character {
public:
    void attack(Character* enemy) override {
        // Пустая реализация для теста
    }
};

TEST(DragonTest, AttackOutput) {
    Dragon dragon;
    dragon.setName("TestDragon");
    dragon.setDamage(100.0);
    
    MockCharacter enemy;
    enemy.setName("TestEnemy");
    
    testing::internal::CaptureStdout();
    dragon.attack(&enemy);
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ("Dragon TestDragon attacks TestEnemy with 100 damage.\n", output);
}
