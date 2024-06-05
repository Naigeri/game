#include "UI.h"

bool DrawCheckBox(Rectangle bounds, bool checked, const char *text) {
    bool clicked = false;

    // 绘制复选框
    if (checked) {
        DrawRectangleRec(bounds, LIGHTGRAY);
        DrawText("X", bounds.x + 4, bounds.y + 1, 10, BLACK);
    } else {
        DrawRectangleLines(bounds.x, bounds.y, bounds.width, bounds.height, LIGHTGRAY);
    }

    // 绘制文本
    DrawText(text, bounds.x + bounds.width + 10, bounds.y, 10, BLACK);

    // 检查点击事件
    if (CheckCollisionPointRec(GetMousePosition(), bounds) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        clicked = true;
        checked = !checked;
    }

    return checked;
}

bool DrawButton(Rectangle bounds, const char *text) {
    bool clicked = false;

    // 绘制按钮
    DrawRectangleRec(bounds, LIGHTGRAY);
    DrawText(text, bounds.x + 10, bounds.y + 10, 20, BLACK);

    // 检查点击事件
    if (CheckCollisionPointRec(GetMousePosition(), bounds) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        clicked = true;
    }

    return clicked;
}
