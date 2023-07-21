//
// Created by fmaks on 19.07.2023.
//

#include "Camera.h"
#include "../Configs/Config.h"

Camera::Camera() {
    X = 0, Y = 0;
}
void Camera::Move() {

    X = player.X;
    Y = player.Y;

    view.setCenter(X * Block_size, Y * Block_size);
}
