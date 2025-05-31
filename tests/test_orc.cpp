#include "gtest/gtest.h"
#include "../src/Orc.h"
#include "../src/Character.h"

// Mock класс для тестирования атаки
class MockCharacter : public Character {
public:
    void attack(Character* enemy) override {
        // Пустая реализация для теста
    }
};

TEST(OrcTest, AttackOutput) {
    Orc orc;
    orc.setName("TestOrc");
    orc.setDamage(8.0);
    
    MockCharacter enemy;
    enemy.setName("TestEnemy");
    
    testing::internal::CaptureStdout();
    orc.attack(&enemy);
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ("Orc TestOrc attacks TestEnemy with 8 damage.\n", output);
}
