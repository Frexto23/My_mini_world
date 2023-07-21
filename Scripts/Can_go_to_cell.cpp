//
// Created by fmaks on 21.07.2023.
//

#include "Can_go_to_cell.h"
#include "../Configs/Data_Config.h"
#include "../Configs/Config.h"

bool Can_go_to_cell(int x, int y) {
    if (x < 0 || x >= World_width_blocks || y < 0 || y >= World_height_blocks) return false;
    return Game_Scene.World[x][y].free;
}

