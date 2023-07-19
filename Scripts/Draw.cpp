//
// Created by fmaks on 18.07.2023.
//

#include "../General_includer.cpp"

void Draw_Scene(RenderWindow& window) {

    // отрисовка горизонтальных линий сетки
    for(int i=1;i<Screen_height;i++) {
        int line_y_pos = Block_border_size * (i - 1) + Block_size * i;
        horizontal_line.setPosition(0, (float)line_y_pos);
        window.draw(horizontal_line);
    }
    // отрисовка вертикальных линий сетки
    for(int j=1;j<Screen_width;j++) {
        int line_x_pos = Block_border_size * (j - 1) + Block_size * j;
        vertical_line.setPosition((float)line_x_pos, 0);
        window.draw(vertical_line);
    }

    // отрисовка клеточек поля
//    for(int i=0;i<Screen_width;i++) {
//        for(int j=0;j<Screen_height;j++) {
//            int block_begin_x = Block_size * i + Block_border_size * (i - 1);
//            int block_begin_y = Block_size * j + Block_border_size * (j - 1);
//            cube.setPosition((float)block_begin_x, (float)block_begin_y);
//            window.draw(cube);
//        }
//    }

}
