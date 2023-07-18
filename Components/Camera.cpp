//
// Created by fmaks on 18.07.2023.
//

class Camera {
private:
    int X = 0, Y = 0;          // позиция левого нижнего угла камеры

    int Screen_width = 10;     // ширина в блоках
    int Screen_height = 10;    // высота экрана в блоках

    int Block_size = 70;       // ширина и высота клетки
    int Block_border_size = 1; // ширина линии разделяющей клетки

public:
    int Game_window_width_px = Screen_width * Block_size + (Screen_width - 1) * Block_border_size;         // ширина окна в px
    int Game_window_height_px = Screen_height * Block_size + (Screen_height - 1) * Block_border_size;      // высоты окна в px

    Camera() = default;

};
