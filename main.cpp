//
// Created by fmaks on 18.07.2023.
//

#include "Includer.cpp"

int main() {

    /* Домик - костыль */ Game_Scene.World[0][0].Is_building = true; Game_Scene.World[0][0].Cell_Building_Texture = &Game_Texture.home_texture;

    /* Создаём окошко */ RenderWindow window(sf::VideoMode(Game_window_width_px, Game_window_height_px), "My mini World");

    Clock clock;   // Часы
    unsigned int fps = 0; // Счётчик кадров в секунду

    // Главный игровой цикл
    while(window.isOpen()) {

        ++fps; // Прибавляем один отрисованный кадр

        // Если прошла одна секунда или больше ...
        if (seconds(1) <= clock.getElapsedTime()) {

            // Выводим значение FPS в консоль
            system("cls");
            system("color 0A");
            cout << "FPS: " << fps << endl;

            clock.restart(); // Перезапускаем часы
            fps = 0;         // Обнуляем счётчик
        }

        Event event{}; // Получаем событие

        while( window.pollEvent(event) ) {
            // Проверяем событие
            if ( event.type == Event::Closed || (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) )
                window.close();
            else
                wasd(&event);
        }

        // Очистка
        window.clear();  // цвет рамок клеток
        Draw_Scene(window);
        // Отрисовка
        window.display();

    }

    return 0;
}
