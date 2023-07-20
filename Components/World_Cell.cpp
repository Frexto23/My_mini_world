//
// Created by fmaks on 19.07.2023.
//

#pragma once
#include "World_Cell.h"

World_Cell::World_Cell(Texture* texture) {
    Cell_Texture = texture;
    Cell_Building_Texture = nullptr;
}
World_Cell::World_Cell(Texture* texture, Texture* building_texture) {
    Cell_Texture = texture;
    Cell_Building_Texture = building_texture;
}
World_Cell::World_Cell(){
    Cell_Texture = nullptr;
    Cell_Building_Texture = nullptr;
}


