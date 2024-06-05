#include "raylib.h"
#include "Player.h"
#include "Map.h"

int main() {
    InitWindow(800, 600, "My Game");
    SetTargetFPS(60);

    Player player({50, 50});
    Map map;

    while (!WindowShouldClose()) {
        player.Update();

        BeginDrawing();
        ClearBackground(RAYWHITE);
        map.Draw();
        player.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
