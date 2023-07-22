//
// Created by fmaks on 19.07.2023.
//

#include "World_Cell.h"
#include "../Configs/Config.h"

World_Cell::World_Cell(){
    Cell_Texture = nullptr;
    Cell_Building_Texture = nullptr;
}

void World_Cell::Update_texture(Texture* new_texture, bool is_free) {
    int update_time = GameTime.getElapsedTime().asMilliseconds();
    if (update_time - last_change > 100) {
        Cell_Texture = new_texture;
        last_change = update_time;
        free = is_free;
    }
}


