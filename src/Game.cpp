#include "Game.h"
#include "UI.h"
#include <cstdlib> // 添加这一行

Game::Game() : player({50, 50}) { // 修改构造函数，提供参数
    InitWindow(800, 600, "My Game");
    SetWindowState(FLAG_WINDOW_RESIZABLE);
    SetExitKey(0); // 禁用默认的 KEY_ESCAPE 退出行为
    SetTargetFPS(60);

    gameState = { false, false };
    camera = { 0 };
    camera.target = player.position;
    camera.offset = { 400, 300 }; // 中心点
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
}

Game::~Game() {
    CloseWindow();
}

void Game::Run() {
    while (!WindowShouldClose()) {
        Update();
        Draw();
    }
}

void Game::Update() {
    player.Update(camera);  // 传递camera参数

    // 切换菜单面板显示
    if (IsKeyPressed(KEY_ESCAPE)) {
        ToggleMenu();
    }

    // 如果镜头跟随启用，更新镜头位置
    if (gameState.cameraFollow) {
        camera.target = player.position;
    }
}

void Game::Draw() {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    if (gameState.showMenu) {
        DrawMenu();
    } else {
        BeginMode2D(camera);
        map.Draw();
        player.Draw();
        EndMode2D();
        DrawGameInfo();
    }

    EndDrawing();
}

void Game::ToggleMenu() {
    gameState.showMenu = !gameState.showMenu;
}

void Game::DrawMenu() {
    DrawRectangle(100, 100, 600, 400, Fade(LIGHTGRAY, 0.9f));
    DrawText("Menu", 350, 120, 20, DARKGRAY);
    DrawText("Press ESC to close", 320, 420, 20, DARKGRAY);

    Rectangle checkboxBounds = { 320, 200, 20, 20 };
    gameState.cameraFollow = DrawCheckBox(checkboxBounds, gameState.cameraFollow, "Camera Follow");

    Rectangle buttonBounds = { 320, 300, 200, 40 };
    if (DrawButton(buttonBounds, "Exit Game")) {
        exit(0); // 使用exit退出程序
    }
}

void Game::DrawGameInfo() {
    DrawText(TextFormat("Position: [%.1f, %.1f]", player.position.x, player.position.y), 10, 10, 20, DARKGRAY);
    DrawText(TextFormat("Health: %.1f", player.health), 10, 30, 20, DARKGRAY);
    DrawText(TextFormat("Mana: %.1f", player.mana), 10, 50, 20, DARKGRAY);

    int blockX = static_cast<int>(player.position.x / 8);
    int blockY = static_cast<int>(player.position.y / 6);
    if (blockX >= 0 && blockX < MAP_SIZE && blockY >= 0 && blockY < MAP_SIZE) {
        for (int i = 0; i < NUM_ELEMENTS; i++) {
            DrawText(TextFormat("Element %d: %.2f", i, map.blocks[blockX][blockY][i]), 10, 70 + i * 20, 20, DARKGRAY);
        }
    }
}
