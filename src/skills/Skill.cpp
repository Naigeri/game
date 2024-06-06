#include "skills/Skill.h"

Skill::Skill(float cost) : manaCost(cost) {}

void Skill::Use(Player &player, Map &map) {
    if (player.mana >= manaCost) {
        player.mana -= manaCost;
        // Example effect: Increase the first element of the current block by 0.1
        int x = static_cast<int>(player.position.x / 10);
        int y = static_cast<int>(player.position.y / 10);
        if (x >= 0 && x < MAP_SIZE && y >= 0 && y < MAP_SIZE) {
            map.ModifyBlock(x, y, 0, 0.1f);
        }
    }
}
