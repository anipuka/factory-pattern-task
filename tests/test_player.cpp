#include "gtest/gtest.h"
#include "../src/Player.h"
#include "../src/Character.h"

// Mock класс для тестирования атаки
class MockCharacter : public Character {
public:
    void attack(Character* enemy) override {
        // Пустая реализация для теста
    }
};

TEST(PlayerTest, AttackOutput) {
    Player player;
    player.setName("TestPlayer");
    player.setDamage(15.0);
    
    MockCharacter enemy;
    enemy.setName("TestEnemy");
    
    testing::internal::CaptureStdout();
    player.attack(&enemy);
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_EQ("Player TestPlayer attacks TestEnemy with 15 damage.\n", output);
}
