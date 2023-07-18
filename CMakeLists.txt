cmake_minimum_required(VERSION 3.1)
project(My_mini_world)

set(CMAKE_CXX_STANDARD 17)

add_executable(My_mini_world main.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR D:/Coding/My_mini_world/libs/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(D:/Coding/My_mini_world/libs/SFML/include)
target_link_libraries(My_mini_world sfml-system sfml-window sfml-graphics sfml-audio)

