#include "../../include/player/player.hpp"

void player::playerClass::moveLeft(const int &position) { x -= position; }
void player::playerClass::moveRight(const int &position) { x += position; }

int player::playerClass::getPositionPlayer() { return x; }