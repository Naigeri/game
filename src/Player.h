#pragma once

#include "raylib.h"

class Player {
public:
    Vector2 position;
    float health;
    float mana;

    Player(Vector2 pos);
    void Draw();
    void Update();
};
