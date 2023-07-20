//
// Created by fmaks on 19.07.2023.
//

#ifndef MY_MINI_WORLD_DATA_CONFIG_H
#define MY_MINI_WORLD_DATA_CONFIG_H

#include "../General_includer.cpp"

const int Screen_width = 10;     // ширина в блоках
const int Screen_height = 10;    // высота экрана в блоках

const int Block_size = 86;       // ширина и высота клетки
const int Block_border_size = 2; // ширина линии разделяющей клетки

const int Game_window_width_px = Screen_width * Block_size + (Screen_width + 1) * Block_border_size;         // ширина окна в px
const int Game_window_height_px = Screen_height * Block_size + (Screen_height + 1) * Block_border_size;      // высоты окна в px

const int World_width_blocks = 100;       // размер мира в блоках по x / y
const int World_height_blocks = 100;      // размер мира в блоках по x / y

#endif //MY_MINI_WORLD_DATA_CONFIG_H
