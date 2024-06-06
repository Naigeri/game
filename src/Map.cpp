#include "Map.h"
#include "raylib.h"
#include <algorithm>

Map::Map() {
    // 初始化所有区块中的元素浓度为0
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            for (int k = 0; k < NUM_ELEMENTS; ++k) {
                blocks[i][j].elements.concentration[k] = 0.0f;
            }
        }
    }

    // 你可以在这里初始化一些初始浓度
}

void Map::Update() {
    Diffuse();
}

void Map::Draw() {
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            // 绘制每个区块，颜色根据某种元素的浓度
            float intensity = blocks[i][j].elements.concentration[0]; // 假设用第一个元素的浓度来表示颜色强度
            Color color = {static_cast<unsigned char>(intensity * 255), 0, 0, 255};
            DrawRectangle(i * 10, j * 10, 10, 10, color); // 每个区块绘制为10x10的矩形
        }
    }
}

void Map::Diffuse() {
    // 简单的扩散算法
    Block newBlocks[MAP_SIZE][MAP_SIZE];

    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            newBlocks[i][j] = blocks[i][j]; // 复制当前区块

            for (int k = 0; k < NUM_ELEMENTS; ++k) {
                float sum = 0.0f;
                int count = 0;

                // 考虑相邻的区块
                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        int ni = i + di;
                        int nj = j + dj;
                        if (ni >= 0 && ni < MAP_SIZE && nj >= 0 && nj < MAP_SIZE) {
                            sum += blocks[ni][nj].elements.concentration[k];
                            count++;
                        }
                    }
                }

                // 平均浓度扩散
                newBlocks[i][j].elements.concentration[k] = sum / count;
            }
        }
    }

    // 更新区块数据
    for (int i = 0; i < MAP_SIZE; ++i) {
        for (int j = 0; j < MAP_SIZE; ++j) {
            blocks[i][j] = newBlocks[i][j];
        }
    }
}

const Block& Map::GetBlock(int x, int y) const {
    return blocks[x][y];
}

void Map::ModifyBlock(int x, int y, int element, float amount) {
    if (x >= 0 && x < MAP_SIZE && y >= 0 && y < MAP_SIZE && element >= 0 && element < NUM_ELEMENTS) {
        blocks[x][y].elements.concentration[element] += amount;
    }
}
