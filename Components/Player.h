//
// Created by fmaks on 20.07.2023.
//

#ifndef MY_MINI_WORLD_PLAYER_H
#define MY_MINI_WORLD_PLAYER_H

#include "../General_includer.cpp"

class Player {
public:
    float X, Y;

    float speed = 0.050;

    int rotate = 0;
    int animation_tact = 0;

    float CurrentFrame = 0;
    float animation_speed = 0.1;
    float Frame_for_next_anim = 3.0;

    int width, height;
    float width_blocks, height_blocks;

    int texture_width, texture_height;

    RectangleShape PlayerShape;

    Player();
    void Animate();

    void Move(float move_x, float move_y) const;
};

#endif //MY_MINI_WORLD_PLAYER_H
