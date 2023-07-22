//
// Created by fmaks on 19.07.2023.
//

#include "Texture_Config.h"
#include "../General_includer.cpp"

void Parse_tileset(string& tileset_path, int width, int height, int tile_size, vector<Texture>& id) {
    Image tileset_image;
    tileset_image.loadFromFile(tileset_path);
    Texture new_texture;
    for(int x=0;x<width;x += tile_size) {
        for(int y=0;y<height; y += tile_size) {
            if (!new_texture.loadFromImage(tileset_image, IntRect(x, y, tile_size, tile_size))) {
                cout << "ERROR 404, Tileset_load_error" << endl;
            }
            id.emplace_back(new_texture);
        }
    }
}

TextureSet::TextureSet() {
    if (!classic_grass_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/grass2.png")) cout << "ERROR! LOAD GRASS!" << endl;
    if (!home_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/home.png")) cout << "ERROR! LOAD home_texture!" << endl;
    if (!player_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/Walk.png")) cout << "ERROR! LOAD player!" << endl;
    if (!classic_water_texture.loadFromFile("D:/Coding/My_mini_world/content/graphic/classic_water.png")) cout << "ERROR! Load water" << endl;

    id.emplace_back(classic_grass_texture);
    id.emplace_back(home_texture);
    id.emplace_back(player_texture);
    id.emplace_back(classic_water_texture);

    string tileset_path = "D:/Coding/My_mini_world/content/graphic/Solaria_tileset.png";
    Parse_tileset(tileset_path, 2408, 1290, 86, id);
}




