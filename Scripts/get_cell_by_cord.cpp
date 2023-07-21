//
// Created by fmaks on 21.07.2023.
//

#include "get_cell_by_cord.h"
#include "../Configs/Config.h"

pair<int, int> get_cell_by_cord(float x, float y) {
    int first = (int)floor(Game_Camera.X - 5.0f + x / Block_size);
    int second = (int)floor(Game_Camera.Y - 5.0f + y / Block_size);
    return make_pair(first, second);
}