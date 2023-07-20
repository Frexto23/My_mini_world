//
// Created by fmaks on 19.07.2023.
//

#include "Texture_Config.h"
#include "../General_includer.cpp"

TextureSet::TextureSet() {
    if (!classic_grass_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/classic_grass.png")) cout << "ERROR! LOAD GRASS!" << endl;
    if (!home_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/home.png")) cout << "ERROR! LOAD home_texture!" << endl;
    if (!player_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/Walk.png")) cout << "ERROR! LOAD player!" << endl;
}




