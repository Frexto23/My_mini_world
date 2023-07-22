//
// Created by fmaks on 18.07.2023.
//

#pragma once
#include "../Configs/Config.h"

void Draw_Scene() {

    // отрисовка клеточек поля

    int begin_x = min(World_width_blocks, max(0, (int)floor(Game_Camera.X) - Screen_width));
    int begin_y = min(World_height_blocks, max(0, (int)floor(Game_Camera.Y) - Screen_height));
    int end_x = min(World_width_blocks, max(0, (int)ceil(Game_Camera.X) + Screen_width));
    int end_y = min(World_height_blocks, max(0, (int)ceil(Game_Camera.Y) + Screen_height));

    for(int x=begin_x;x<end_x;x++) {
        for(int y=begin_y;y<end_y;y++) {

            // получаем текстуру клетки
            cube.setTexture(Game_Scene.World[x][y].Cell_Texture);

            // позиция клетки на экране
            int block_begin_x = Block_size * x;
            int block_begin_y = Block_size * y;
            cube.setPosition((float)block_begin_x, (float)block_begin_y);
            // рисуем клетку
            window.draw(cube);

            // рисуем здание клетки, если оно есть
            if (Game_Scene.World[x][y].Is_building) {
                cube.setTexture(Game_Scene.World[x][y].Cell_Building_Texture);
                window.draw(cube);
            }

            // рисуем игрока
            window.draw(player.PlayerShape);
        }
    }
}
