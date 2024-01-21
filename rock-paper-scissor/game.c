#include "main.h"

/**
 * game - compares the choice of the user and computer
 * @user: user's choice
 * @computer: computer's choice
 * Return: 1 if user wins, 0 if computer wins.
 */
int game(char user, char computer)
{
	if (user != 's' || user != 'p' || user != 'z')
	{
		printf("Enter a valid input\n");
		exit(0);
	}

	if (user == computer)
		return (-1);

	if (user == 's' && computer == 'p')
		return (0);
	else if (user == 'p' && computer == 's')
		return (1);

	if (user == 's' && computer == 'z')
		return (1);
	else if (user == 'z' && computer == 's')
		return (0);

	if (user == 'p' && computer == 'z')
		return (0);
	else if (user == 'z' && computer == 'p')
		return (1);

	return (-2);
}
