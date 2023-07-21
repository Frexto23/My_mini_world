//
// Created by fmaks on 18.07.2023.
//

#pragma once
#include "../Configs/Config.h"

void Draw_Scene(RenderWindow& window) {

    // отрисовка клеточек поля
    for(int x=0;x<Screen_width;x++) {
        for(int y=0;y<Screen_height;y++) {
            // получаем текстуру клетки
            cube.setTexture(Game_Scene.World[Game_Camera.X + x][Game_Camera.Y + y].Cell_Texture);
            // позиция клетки на экране
            int block_begin_x = Block_size * x + Block_border_size * (x + 1);
            int block_begin_y = Block_size * (Screen_height - y - 1) + Block_border_size * (Screen_height - y); // инвертирование Y, чтобы подогнать координаты к обычным
            cube.setPosition((float)block_begin_x, (float)block_begin_y);
            // рисуем клетку
            window.draw(cube);

            // рисуем здание клетки, если оно есть
            if (Game_Scene.World[Game_Camera.X + x][Game_Camera.Y + y].Is_building) {
                cube.setTexture(Game_Scene.World[Game_Camera.X + x][Game_Camera.Y + y].Cell_Building_Texture);
                window.draw(cube);
            }
            // рисуем игрока
            window.draw(player.PlayerShape);
        }
    }

}
