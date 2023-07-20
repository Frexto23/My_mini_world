//
// Created by fmaks on 20.07.2023.
//

#include "Player.h"
#include "../Configs/Config.h"

Player::Player() {
    X = 5, Y = 5;

    width = height = 64;

    texture_width = texture_height = 32;

    player_texture = &Game_Texture.player_texture;
}

