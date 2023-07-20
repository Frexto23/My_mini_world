//
// Created by fmaks on 20.07.2023.
//

#include "Event_logic_controller.h"
#include "../General_includer.cpp"
#include "../Configs/Config.h"

void wasd(Event* event) {
    if (event -> type == Event::KeyPressed) {
        if (event->key.code == Keyboard::W)
            player.Y++;
        if (event->key.code == Keyboard::S)
            player.Y--;
        if (event->key.code == Keyboard::A)
            player.X--;
        if (event->key.code == Keyboard::D)
            player.X++;
    }
}