//
// Created by fmaks on 19.07.2023.
//

#ifndef MY_MINI_WORLD_SCENE_H
#define MY_MINI_WORLD_SCENE_H

#pragma once
#include "World_Cell.h"
#include "../Configs/Data_Config.h"

class Scene {
public:
    int Time = 0;

    World_Cell World[World_width_blocks][World_height_blocks];

    Scene();
};

#endif //MY_MINI_WORLD_SCENE_H
