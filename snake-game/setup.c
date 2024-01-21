#include "main.h"
/**
 * setup - generate the fruit within the boundary
 * Return: void
 */
void setup(void)
{
	gameover = 0;

	x = height / 2;
	y = width / 2;

	label1:
		fruitx = rand() % 20;
		if (fruitx == 0)
			goto label1;
	label2:
		fruity == rand() % 20;
		if (fruity == 0)
			goto label2;
	score = 0;
}
