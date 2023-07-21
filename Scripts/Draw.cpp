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

            RectangleShape point_red = RectangleShape(Vector2f(10.0f, 10.0f));
            point_red.setFillColor(Color::Red);
            point_red.setPosition(Vector2f((Game_Camera.X - 5.0f) * Block_size, (Game_Camera.Y - 5.0f) * Block_size));
            window.draw(point_red);
            point_red.setPosition(Vector2f(Game_window_width_px / 2.0f, Game_window_height_px / 2.0f));
            window.draw(point_red);
            point_red.setPosition(Vector2f(0.0f, 0.0f));
            window.draw(point_red);
            point_red.setPosition(Vector2f(86.0f, 86.0f));
            window.draw(point_red);
        }
    }
}
