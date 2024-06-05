#include "Player.h"
#include <cmath>

Player::Player(Vector2 pos) : position(pos), speed(2.0f), targetPosition(pos), isMoving(false), health(100.0f), mana(100.0f) {}

void Player::Update(Camera2D camera) {  // 修改Update函数，接收Camera2D参数
    // 处理鼠标右键点击
    if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) {
        targetPosition = GetScreenToWorld2D(GetMousePosition(), camera);
        isMoving = true;
    }

    // 移动玩家
    if (isMoving) {
        Vector2 direction = { targetPosition.x - position.x, targetPosition.y - position.y };
        float distance = sqrt(direction.x * direction.x + direction.y * direction.y);

        if (distance > 0) {
            float moveStep = speed / distance;
            if (moveStep >= 1) {
                position = targetPosition;
                isMoving = false;
            } else {
                position.x += direction.x * moveStep;
                position.y += direction.y * moveStep;
            }
        }
    }
}

void Player::Draw() {
    DrawCircleV(position, 20, BLUE);
}
