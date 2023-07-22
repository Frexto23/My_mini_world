//
// Created by fmaks on 20.07.2023.
//

#include "Player.h"
#include "../Configs/Config.h"
#include "../Scripts/Can_go_to_cell.h"

Player::Player() {
    X = 5, Y = 5;

    width = height = 64;
    width_blocks = (float)width / Block_size;
    height_blocks = (float)height / Block_size;

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

void Player::Move(float move_x, float move_y) const {
    // проверка левого верхнего ула
    Vector2f top_left_angle = {X, Y};
    Vector2f top_right_angle = {X + width_blocks, Y};
    Vector2f down_left_angle = {X, Y + height_blocks};
    Vector2f down_right_angle = {X + width_blocks, Y + height_blocks};

    bool condition1 = Can_go_to_cell((int)floor(top_left_angle.x + move_x), (int)floor(top_left_angle.y + move_y));
    bool condition2 = Can_go_to_cell((int)floor(top_right_angle.x + move_x), (int)floor(top_right_angle.y + move_y));
    bool condition3 = Can_go_to_cell((int)floor(down_left_angle.x + move_x), (int)floor(down_left_angle.y + move_y));
    bool condition4 = Can_go_to_cell((int)floor(down_right_angle.x + move_x), (int)floor(down_right_angle.y + move_y));

    if (condition1 && condition2 && condition3 && condition4) {
        player.X += move_x;
        player.Y += move_y;
    }

    if (move_x > 0)
        player.rotate = 3;
    if (move_x < 0)
        player.rotate = 2;
    if (move_y < 0)
        player.rotate = 1;
    if (move_y > 0)
        player.rotate = 0;

}
