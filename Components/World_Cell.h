//
// Created by fmaks on 19.07.2023.
//

#ifndef MY_MINI_WORLD_WORLD_CELL_H
#define MY_MINI_WORLD_WORLD_CELL_H

#pragma once
#include "../General_includer.cpp"

class World_Cell {
public:
    Texture* Cell_Texture;

    bool Is_building = false; // есть ли здание
    Texture* Cell_Building_Texture;

    bool free = true;

    explicit World_Cell(Texture* texture);
    explicit World_Cell(Texture* texture, Texture* building_texture);
    World_Cell();
};

#endif //MY_MINI_WORLD_WORLD_CELL_H
