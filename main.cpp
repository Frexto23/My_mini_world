//
// Created by fmaks on 18.07.2023.
//

#include "Includer.cpp"

int main() {

    setup_config();

    while(window.isOpen()) {

        Game_Scene.Calculate_Frame();
        player.Animate();
        Game_Camera.Move();

        Event event{}; // Получаем событие

        while( window.pollEvent(event) ) {
            // Проверяем событие
            if ( event.type == Event::Closed || (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) )
                window.close();
        }
        // обработка событий
        wasd();

        // камера
        window.setView(view);
        // Очистка
        window.clear();  // цвет рамок клеток
        Draw_Scene(); // кринжовая функция
        // Отрисовка
        window.display();

    }

    return 0;
}
