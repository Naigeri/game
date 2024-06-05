// Map.cpp
#include "Map.h"

Map::Map() {
    Init();
}

void Map::Init() {
    for (int x = 0; x < MAP_SIZE; x++) {
        for (int y = 0; y < MAP_SIZE; y++) {
            for (int e = 0; e < NUM_ELEMENTS; e++) {
                blocks[x][y][e] = GetRandomValue(0, 100) / 100.0f;
            }
        }
    }
}

void Map::Draw() {
    for (int x = 0; x < MAP_SIZE; x++) {
        for (int y = 0; y < MAP_SIZE; y++) {
            float value = blocks[x][y][0]; // Example: using the first element for color
            Color color = {(unsigned char)(value * 255), 0, 0, 255};
            DrawRectangle(x * 8, y * 6, 8, 6, color);
        }
    }
}
