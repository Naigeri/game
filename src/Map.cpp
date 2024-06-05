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
            Color color = {(unsigned char)(blocks[x][y][0] * 255), 0, 0, 255};
            DrawRectangle(x * 5, y * 5, 5, 5, color);
        }
    }
}
