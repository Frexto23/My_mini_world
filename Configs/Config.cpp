//
// Created by fmaks on 18.07.2023.
//

#include "Config.h"
#include "Data_Config.h"
#include "Texture_Config.h"

RenderWindow window(sf::VideoMode(Game_window_width_px, Game_window_height_px), "My mini World");
View view = View();
TextureSet Game_Texture = TextureSet();
Camera Game_Camera = Camera();
Scene Game_Scene = Scene();
RectangleShape cube = RectangleShape(Vector2f((float)Block_size, (float)Block_size));
Player player = Player();

void setup_config() {
    window.setFramerateLimit(120);
    view.reset(sf::FloatRect(0, 0, Game_window_width_px, Game_window_height_px));
}



