//
// Created by fmaks on 19.07.2023.
//

#include "Texture_Config.h"
#include "../General_includer.cpp"

TextureSet::TextureSet() {
    if (!classic_grass_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/grass2.png")) cout << "ERROR! LOAD GRASS!" << endl;
    if (!home_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/home.png")) cout << "ERROR! LOAD home_texture!" << endl;
    if (!player_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/Walk.png")) cout << "ERROR! LOAD player!" << endl;
    if (!classic_water_texture.loadFromFile("D:\\Coding\\My_mini_world\\content\\graphic\\classic_water.png")) cout << "ERROR! Load water" << endl;
}




