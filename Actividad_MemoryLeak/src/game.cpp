#include "game.h"

#include "raylib.h"

#include "consts.h"
#include "Fruit.h"

void game()
{
	SCREEN actualScreen = MENU;

	InitWindow(windowWidth, windowHeigth, "GAME");

	Fruit* fruit = nullptr;

	int spawnTimer = 30;
	int timer = 30;

	while (!WindowShouldClose())
	{
		switch (actualScreen)
		{
		case MENU:



			break;
		case GAMEPLAY:

			if (timer <= 0)
			{
				fruit = new Fruit(initFruit());

				timer = spawnTimer;
			}
			else
				timer--;

			break;
		case END_GAME:



			break;
		default:
			break;
		}
	}
}

void initRes()
{
	
}

void deleteRes()
{
	
}
