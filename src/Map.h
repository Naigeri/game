// Map.h
#pragma once

#include "raylib.h"

const int MAP_SIZE = 100;
const int NUM_ELEMENTS = 7;

class Map {
public:
    float blocks[MAP_SIZE][MAP_SIZE][NUM_ELEMENTS];

    Map();
    void Init();
    void Draw();
};
