#include "raylib.h"
#include "Player.h"
#include "Map.h"
#include "skills/Skill.h" // 引用Skill.h

int main() {
    InitWindow(800, 600, "My Game");
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
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
