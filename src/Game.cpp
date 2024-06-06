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
    camera.zoom = 1.0f;
    camera.target = { 0.0f, 0.0f };
    camera.offset = { GetScreenWidth() / 2.0f, GetScreenHeight() / 2.0f };
    camera.rotation = 0.0f;
    camera.zoom = cameraZoom;
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
    UpdateCamera();
    map.Update(); // 更新地图
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
    DrawText(TextFormat("Player Position: (%.2f, %.2f)", player.position.x, player.position.y), 10, 10, 20, DARKGRAY);
    DrawText(TextFormat("Player Health: %d", player.health), 10, 30, 20, DARKGRAY);
    DrawText(TextFormat("Player Mana: %d", player.mana), 10, 50, 20, DARKGRAY);
    // 获取鼠标位置对应的区块坐标
    Vector2 mousePosition = GetMousePosition();
    int blockX = static_cast<int>(mousePosition.x / 10);
    int blockY = static_cast<int>(mousePosition.y / 10);

    // 确保区块坐标在地图范围内
    if (blockX >= 0 && blockX < MAP_SIZE && blockY >= 0 && blockY < MAP_SIZE) {
        const Block& block = map.GetBlock(blockX, blockY);
        for (int i = 0; i < NUM_ELEMENTS; i++) {
            DrawText(TextFormat("Element %d: %.2f", i, block.elements.concentration[i]), 10, 70 + i * 20, 20, DARKGRAY);
        }
    }
}

void Game::UpdateCamera() {
    // 获取鼠标滚轮的移动量
    float mouseWheelMove = GetMouseWheelMove();
    if (mouseWheelMove != 0) {
        cameraZoom += mouseWheelMove * 0.1f; // 调整缩放速度
        if (cameraZoom < 0.1f) cameraZoom = 0.1f; // 最小缩放限制
        if (cameraZoom > 3.0f) cameraZoom = 3.0f; // 最大缩放限制
    }

    // 其他摄像机更新逻辑
    if (gameState.cameraFollow) {
        camera.target = player.position; // 假设Player类有position成员
    } else {
        // 检查鼠标是否在窗口边缘并移动摄像机
        Vector2 mousePosition = GetMousePosition();
        float moveSpeed = 5.0f;
        int boundarySize = 50; // 将边界判断像素值改为30

        if (mousePosition.x <= boundarySize) {
            camera.target.x -= moveSpeed;
        }
        if (mousePosition.x >= GetScreenWidth() - boundarySize) {
            camera.target.x += moveSpeed;
        }
        if (mousePosition.y <= boundarySize) {
            camera.target.y -= moveSpeed;
        }
        if (mousePosition.y >= GetScreenHeight() - boundarySize) {
            camera.target.y += moveSpeed;
        }
    }
    camera.zoom = cameraZoom;
}