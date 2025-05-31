# Находим библиотеку GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Создаем тестовый исполняемый файл
add_executable(test_character test_character.cpp)
target_link_libraries(test_character factory_pattern GTest::GTest GTest::Main)
add_test(NAME test_character COMMAND test_character)

add_executable(test_factory test_factory.cpp)
target_link_libraries(test_factory factory_pattern GTest::GTest GTest::Main)
add_test(NAME test_factory COMMAND test_factory)

add_executable(test_player test_player.cpp)
target_link_libraries(test_player factory_pattern GTest::GTest GTest::Main)
add_test(NAME test_player COMMAND test_player)

add_executable(test_orc test_orc.cpp)
target_link_libraries(test_orc factory_pattern GTest::GTest GTest::Main)
add_test(NAME test_orc COMMAND test_orc)

add_executable(test_dragon test_dragon.cpp)
target_link_libraries(test_dragon factory_pattern GTest::GTest GTest::Main)
add_test(NAME test_dragon COMMAND test_dragon)
