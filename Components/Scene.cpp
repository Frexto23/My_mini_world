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
    system("color 0A");
}

void Scene::Calculate_Frame() {
    ++fps; // Прибавляем один отрисованный кадр

    // Если прошла одна секунда или больше ...
    if (seconds(1) <= clock.getElapsedTime()) {

        // Выводим значение FPS в консоль
//        system("cls");

        cout << "FPS: " << fps << endl;

        clock.restart(); // Перезапускаем часы
        fps = 0;         // Обнуляем счётчик
    }

    // Переместим камеру


}

