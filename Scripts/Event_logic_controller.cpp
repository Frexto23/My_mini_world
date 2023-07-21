//
// Created by fmaks on 20.07.2023.
//

#include "Event_logic_controller.h"
#include "../General_includer.cpp"
#include "../Configs/Config.h"
#include "get_cell_by_cord.h"
#include "Can_go_to_cell.h"

//#|:'speed vodka 0 limit!'

void wasd() {
    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        if (Can_go_to_cell((int)floor(player.X - player.speed), (int)floor(player.Y)))
            player.X -= player.speed;
        player.rotate = 2;
    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        if (Can_go_to_cell((int)floor(player.X + (float)player.width / Block_size + player.speed), (int)floor(player.Y)))
            player.X += player.speed;
        player.rotate = 3;
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        if (Can_go_to_cell((int)floor(player.X), (int)floor(player.Y - player.speed)))
            player.Y -= player.speed;
        player.rotate = 1;
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        if (Can_go_to_cell((int)floor(player.Y), (int)floor(player.Y + (float)player.height / Block_size + player.speed)))
            player.Y += player.speed;
        player.rotate = 0;
    }

    if (Mouse::isButtonPressed(Mouse::Left)) {

        auto Real_click = get_cell_by_cord((float)Mouse::getPosition(window).x, (float)Mouse::getPosition(window).y);
        Game_Scene.World[Real_click.first][Real_click.second].Cell_Texture = &Game_Texture.classic_water_texture;
        Game_Scene.World[Real_click.first][Real_click.second].free = false;
    }

}