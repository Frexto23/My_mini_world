//
// Created by fmaks on 19.07.2023.
//

#ifndef MY_MINI_WORLD_CONFIG_H
#define MY_MINI_WORLD_CONFIG_H

#pragma once
#include "../Components/Camera.h"
#include "../Components/Scene.h"
#include "Texture_Config.h"
#include "../Components/Player.h"

extern int last_right_click;
extern int Now_chosen_texture_id;
extern Clock GameTime;
extern RenderWindow window;
extern View view;
extern TextureSet Game_Texture;
extern Camera Game_Camera;
extern Scene Game_Scene;
extern Player player;

extern RectangleShape cube;

void setup_config();

#endif //MY_MINI_WORLD_CONFIG_H
