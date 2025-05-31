cmake_minimum_required(VERSION 3.10)
project(FactoryPattern)

# Настройка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Создаем статическую библиотеку из классов шаблона
add_library(factory_pattern STATIC
    src/Character.cpp
    src/Character.h
    src/CharacterFactory.cpp
    src/CharacterFactory.h
    src/Dragon.cpp
    src/Dragon.h
    src/Orc.cpp
    src/Orc.h
    src/Player.cpp
    src/Player.h
)

# Создаем исполняемый файл
add_executable(factory_pattern_exe src/main.cpp)
target_link_libraries(factory_pattern_exe factory_pattern)

# Включаем тесты
enable_testing()
add_subdirectory(tests)
