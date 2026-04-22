#include "Fruit.h"



#include <iostream>

Fruit init()
{
	Fruit* newFruit = new Fruit;

	newFruit->x = rand() % 10;

	return *newFruit;

	delete newFruit;
}
