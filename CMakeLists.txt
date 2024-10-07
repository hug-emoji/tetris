cmake_minimum_required(VERSION 3.22.1)
project(tetris VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES 
    src/main.cpp
    src/Tile.cpp
    src/Grid.cpp
)


find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
set(SFML_LIBS
    sfml-graphics
    sfml-window
    sfml-system
)

add_executable(tetris ${SOURCES})

target_link_libraries(tetris ${SFML_LIBS})
