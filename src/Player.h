#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

class Player {
public:
    Player(Vector2 pos);
    void Update(Camera2D camera);  // 修改Update函数，接收Camera2D参数
    void Draw();
    
    Vector2 position;
    float speed;
    Vector2 targetPosition;
    float health;   // 添加health成员变量
    float mana;     // 添加mana成员变量

private:
    bool isMoving;
};

#endif // PLAYER_H
