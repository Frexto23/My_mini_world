//
// Created by fmaks on 20.07.2023.
//

#include "Event_logic_controller.h"
#include "../General_includer.cpp"
#include "../Configs/Config.h"

//#|:'speed vodka 0 limit!'

void wasd() {
    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        player.Y -= 0.1;
        player.rotate = 1;
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        player.Y += 0.1;
        player.rotate = 0;
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        player.X -= 0.1;
        player.rotate = 2;
    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        player.X += 0.1;
        player.rotate = 3;
    }

}