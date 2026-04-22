#include "Fruit.h"

#include "consts.h"

#include <iostream>

Fruit initFruit()
{
	Fruit* newFruit = new Fruit;

	newFruit->x = rand() % windowWidth;
	newFruit->y = rand() % windowHeigth;

	newFruit->texture = LoadTexture("textures/apple.png");

	return *newFruit;

	delete newFruit;
}
