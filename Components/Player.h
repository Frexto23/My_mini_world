//
// Created by fmaks on 20.07.2023.
//

#ifndef MY_MINI_WORLD_PLAYER_H
#define MY_MINI_WORLD_PLAYER_H

#include "../General_includer.cpp"

class Player {
public:
    int X, Y;

    int width, height;

    int texture_width, texture_height;

    Texture* player_texture;

    Player();
};

#endif //MY_MINI_WORLD_PLAYER_H
