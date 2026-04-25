cmake_minimum_required(VERSION 3.20)
project(SlotForge LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slotforge
    engine/src/GameEngine.cpp
)

target_include_directories(slotforge PUBLIC engine/include)

add_executable(slotforge_cli apps/cli/main.cpp)
target_link_libraries(slotforge_cli PRIVATE slotforge)

enable_testing()
add_executable(slotforge_tests tests/test_engine.cpp)
target_link_libraries(slotforge_tests PRIVATE slotforge)
add_test(NAME slotforge_tests COMMAND slotforge_tests)
