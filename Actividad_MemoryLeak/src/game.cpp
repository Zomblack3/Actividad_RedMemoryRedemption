#include "game.h"

#include "raylib.h"

#include "consts.h"

void game()
{
	SCREEN actualScreen = MENU;

	InitWindow(windowWidth, windowHeigth, "GAME");

	initRes();

	while (!WindowShouldClose())
	{
		switch (actualScreen)
		{
		case MENU:



			break;
		case GAMEPLAY:



			break;
		case END_GAME:



			break;
		default:
			break;
		}
	}

	deleteRes();
}

void initRes()
{

}

void deleteRes()
{

}
