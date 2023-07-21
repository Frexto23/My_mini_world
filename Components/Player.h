//
// Created by fmaks on 20.07.2023.
//

#ifndef MY_MINI_WORLD_PLAYER_H
#define MY_MINI_WORLD_PLAYER_H

#include "../General_includer.cpp"

class Player {
public:
    float X, Y;

    int rotate = 0;
    int animation_tact = 0;

    float CurrentFrame = 0;
    float speed = 0.005;
    float Frame_for_next_anim = 3.0;

    int width, height;

    int texture_width, texture_height;

    RectangleShape PlayerShape;

    Player();
    void Animate();
};

#endif //MY_MINI_WORLD_PLAYER_H
