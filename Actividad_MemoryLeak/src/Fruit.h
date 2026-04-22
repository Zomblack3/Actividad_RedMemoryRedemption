#pragma once

#include "raylib.h"

struct Fruit
{
	int x = 0;
	int y = 0;

	Texture texture = { };
};

Fruit initFruit();