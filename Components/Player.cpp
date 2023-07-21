//
// Created by fmaks on 20.07.2023.
//

#include "Player.h"
#include "../Configs/Config.h"

Player::Player() {
    X = 5, Y = 5;

    width = height = 64;

    texture_width = texture_height = 32;

    PlayerShape.setSize(Vector2f((float)player.width, (float)player.height));

    PlayerShape.setTextureRect(IntRect(0, 0, player.texture_width, player.texture_height));
    PlayerShape.setTexture(&Game_Texture.player_texture);
}

void Player::Animate() {
    PlayerShape.setPosition(player.X * Block_size, player.Y * Block_size);
    CurrentFrame += animation_speed;
    if (CurrentFrame >= Frame_for_next_anim)
        CurrentFrame = 0;
    else
        return;

    PlayerShape.setTextureRect(IntRect(texture_width * rotate, texture_height * animation_tact, player.texture_width, player.texture_height));
    animation_tact++;
    if (animation_tact == 4)
        animation_tact = 0;
}
