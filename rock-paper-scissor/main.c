#include "main.h"
/**
 * main - driver code
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char user, computer, result;

	srand(time(0));
	n = rand() % 100;

	if (n < 33)
		computer = 's';
	else if (n > 33 && n < 66)
		computer = 'p';
	else
		computer = 'z';

	printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
	scanf("%c", &user);

	result = game(user, computer);
	if (result == -1)
		printf("\n\n\t\t\t\tGame Draw!\n");
	else if (result == 1)
		printf("\n\n\t\t\t\tWow! You have won the game!\n");
	else
	{
		printf("\n\n\t\t\t\tWow! You have lost the game!\n");
		printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", user, computer);
	}

	return (0);
}
