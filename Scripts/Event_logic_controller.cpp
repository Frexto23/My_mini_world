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
        player.Move(-player.speed, 0);
    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        player.Move(player.speed, 0);
    }
    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        player.Move(0, -player.speed);
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        player.Move(0, player.speed);
    }

    if (Mouse::isButtonPressed(Mouse::Left)) {
        int x = Mouse::getPosition(window).x;
        int y = Mouse::getPosition(window).y;
        if (!(x < 0 || y < 0 || x >= Game_window_width_px || y >= Game_window_height_px)) {
            auto Real_click = get_cell_by_cord((float) Mouse::getPosition(window).x,
                                               (float) Mouse::getPosition(window).y);
            Game_Scene.World[Real_click.first][Real_click.second].Update_texture(
                    &Game_Texture.id[Now_chosen_texture_id], true);
        }
    }



}
