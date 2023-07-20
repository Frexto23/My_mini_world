//
// Created by fmaks on 19.07.2023.
//

#include "Texture_Config.h"
#include "../General_includer.cpp"

texturator::texturator() {
    if (!classic_grass_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/classic_grass.png")) cout << "ERROR! LOAD GRASS!" << endl;
    if (!Home.loadFromFile("D:/Coding/My_mini_world/content/graphic/Home.png")) cout << "ERROR! LOAD Home!" << endl;
}




