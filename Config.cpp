//
// Created by fmaks on 18.07.2023.
//

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int Screen_width = 10;     // ширина в блоках
int Screen_height = 10;    // высота экрана в блоках

int Block_size = 70;       // ширина и высота клетки
int Block_border_size = 1; // ширина линии разделяющей клетки
Color Block_border_color = Color::Red;

int Game_window_width_px = Screen_width * Block_size + (Screen_width - 1) * Block_border_size;         // ширина окна в px
int Game_window_height_px = Screen_height * Block_size + (Screen_height - 1) * Block_border_size;      // высоты окна в px

RectangleShape horizontal_line(Vector2f((float)Game_window_height_px, (float)Block_border_size));
RectangleShape vertical_line(Vector2f((float)Game_window_height_px, (float)Block_border_size));
RectangleShape cube(Vector2f((float)Block_size, (float)Block_size));

void tune() {
    vertical_line.rotate(90);
    vertical_line.setFillColor(Block_border_color);
    horizontal_line.setFillColor(Block_border_color);
}

