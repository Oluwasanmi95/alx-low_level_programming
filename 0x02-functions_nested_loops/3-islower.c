#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: argument to be checked
 * Description: checks argument for lowercase character
 * Return: 1 (if lowercase), 0 otherwise
 */
int _islower(int c)
{
	char letter;
	int flag = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
		flag = 1;
		}
	}
	return (flag);
}

