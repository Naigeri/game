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
            float r = blocks[x][y][0] * 255;
            float g = blocks[x][y][1] * 255;
            float b = blocks[x][y][2] * 255;
            Color color = {(unsigned char)r, (unsigned char)g, (unsigned char)b, 255};
            DrawRectangle(x * 8, y * 6, 8, 6, color);
        }
    }
}
