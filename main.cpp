//
// Created by fmaks on 18.07.2023.
//

#include "Includer.cpp"

using namespace std;
using namespace sf;

int main() {

    Scene Game_Scene;
    Camera Game_Camera;

    // Создаём окошко
    RenderWindow window(sf::VideoMode(Game_Camera.Game_window_width_px, Game_Camera.Game_window_height_px), "My mini World");

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
        // Отрисовка
        window.display();

    }

    return 0;
}
