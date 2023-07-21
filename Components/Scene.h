//
// Created by fmaks on 19.07.2023.
//

#ifndef MY_MINI_WORLD_SCENE_H
#define MY_MINI_WORLD_SCENE_H

#pragma once
#include "World_Cell.h"
#include "../Configs/Data_Config.h"
#include "../General_includer.cpp"

class Scene {
public:

    Clock clock;   // Часы
    int fps = 0;   // Счётчик кадров в секунду

    World_Cell World[World_width_blocks][World_height_blocks];

    Scene();

    void Calculate_Frame();
};

#endif //MY_MINI_WORLD_SCENE_H
