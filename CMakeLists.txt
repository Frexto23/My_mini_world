cmake_minimum_required(VERSION 3.1)
project(My_mini_world)

set(CMAKE_CXX_STANDARD 23)

add_executable(My_mini_world main.cpp Components/Camera.cpp Components/Scene.cpp Components/World_Cell.cpp Configs/Data_Config.h Configs/Texture_Config.cpp Configs/Config.cpp Components/Player.h Components/Player.cpp Scripts/Event_logic_controller.h Scripts/Event_logic_controller.cpp Scripts/get_cell_by_cord.h Scripts/get_cell_by_cord.cpp Scripts/Can_go_to_cell.h Scripts/Can_go_to_cell.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR D:/saves/libs/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(D:/saves/libs/SFML/include)
target_link_libraries(My_mini_world sfml-system sfml-window sfml-graphics sfml-audio)

