#ifndef MAP_H
#define MAP_H

#include <vector>

const int MAP_SIZE = 100;
const int NUM_ELEMENTS = 7;

struct Element {
    float concentration[NUM_ELEMENTS]; // 7种元素的浓度
};

struct Block {
    Element elements;
};

class Map {
public:
    Map();
    void Update();
    void Draw();
    const Block& GetBlock(int x, int y) const; // 获取区块
    void ModifyBlock(int x, int y, int element, float amount); // 修改区块元素浓度

private:
    Block blocks[MAP_SIZE][MAP_SIZE];

    void Diffuse();
};

#endif // MAP_H
