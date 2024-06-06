#ifndef GAME_H
#define GAME_H

#include "raylib.h"
#include "Player.h"
#include "Map.h"

struct GameState {
    bool showMenu;
    bool cameraFollow;
};

class Game {
public:
    Game();
    ~Game();
    void Run();

private:
    void Update();
    void Draw();
    void ToggleMenu();
    void DrawMenu();
    void DrawGameInfo();
    void UpdateCamera(); // 确保这里只有一个声明

    Player player;
    Map map;
    GameState gameState;
    Camera2D camera;
    float cameraZoom;
};

#endif // GAME_H
