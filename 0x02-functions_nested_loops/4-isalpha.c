#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: argument to be checked
 * Description: checks for capital letters
 * Return: 1 if argument capital  letter, 0 otherwise
 */
int _isalpha(int c)
{
	char letter;
	int flag = 0;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	if (c == letter)
	{
	flag = 1;
	}
	}

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (c == letter)
	{
	flag = 1;
	}
	}
	return (flag);
}

