#pragma once

#include "raylib.h"
#include "Player.h"
#include "Map.h"

class Skill {
public:
    float manaCost;

    Skill(float cost);
    void Use(Player &player, Map &map);
};
