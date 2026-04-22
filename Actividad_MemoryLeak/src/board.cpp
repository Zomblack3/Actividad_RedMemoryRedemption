#include "board.h"

#include "consts.h"

Board initBoard()
{
	Board board;
	
	board.recs = new Texture[windowHeigth / 20];

	board.recs->height = 300;
	board.recs->width = 300;

	return board;
}
