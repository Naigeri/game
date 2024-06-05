#include "raylib.h"
#include "Player.h"
#include "Map.h"
#include "skills/Skill.h"

int main() {
    InitWindow(800, 600, "My Game");
    SetWindowState(FLAG_WINDOW_RESIZABLE);
    SetTargetFPS(60);

    Player player({50, 50});
    Map map;
    Skill skill(10.0f); // Example skill with a mana cost of 10

    while (!WindowShouldClose()) {
        player.Update();

        if (IsKeyPressed(KEY_SPACE)) {
            skill.Use(player, map);
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        map.Draw();
        player.Draw();

        // 显示玩家信息
        DrawText(TextFormat("Position: [%.1f, %.1f]", player.position.x, player.position.y), 10, 10, 20, DARKGRAY);
        DrawText(TextFormat("Health: %.1f", player.health), 10, 30, 20, DARKGRAY);
        DrawText(TextFormat("Mana: %.1f", player.mana), 10, 50, 20, DARKGRAY);

        // 显示当前区块信息
        int blockX = static_cast<int>(player.position.x / 8);
        int blockY = static_cast<int>(player.position.y / 6);
        if (blockX >= 0 && blockX < MAP_SIZE && blockY >= 0 && blockY < MAP_SIZE) {
            for (int i = 0; i < NUM_ELEMENTS; i++) {
                DrawText(TextFormat("Element %d: %.2f", i, map.blocks[blockX][blockY][i]), 10, 70 + i * 20, 20, DARKGRAY);
            }
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
