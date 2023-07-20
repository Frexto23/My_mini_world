//
// Created by fmaks on 19.07.2023.
//

#include "Scene.h"
#include "../Configs/Config.h"

Scene::Scene() {
    for(int x=0;x<World_width_blocks;x++) {
        for(int y=0;y<World_height_blocks;y++) {
            World[x][y] = World_Cell(&Game_Texture.classic_grass_texture);
        }
    }
}

