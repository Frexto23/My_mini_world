//
// Created by fmaks on 18.07.2023.
//

#include "Includer.cpp"

int main() {

    tune(); // функция конфига

    Scene Game_Scene;    // Сцена
    Camera Game_Camera;  // Камера

    // Создаём окошко
    RenderWindow window(sf::VideoMode(Game_window_width_px, Game_window_height_px), "My mini World");

    // Главный игровой цикл
    while(window.isOpen()) {
        Event event{}; // Получаем событие

        while( window.pollEvent(event) ) {
            // Проверяем событие
            if ( event.type == Event::Closed || (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) )
                window.close();
        }

        // Очистка
        window.clear();
        Draw_Scene(window);
        // Отрисовка
        window.display();

    }

    return 0;
}