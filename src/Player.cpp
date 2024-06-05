// Player.cpp
#include "Player.h"

Player::Player(Vector2 pos) : position(pos), health(100.0f), mana(100.0f) {}

void Player::Draw() {
    DrawCircleV(position, 10, BLUE);
}

void Player::Update() {
    if (IsKeyDown(KEY_W)) position.y -= 2.0f;
    if (IsKeyDown(KEY_S)) position.y += 2.0f;
    if (IsKeyDown(KEY_A)) position.x -= 2.0f;
    if (IsKeyDown(KEY_D)) position.x += 2.0f;
}
