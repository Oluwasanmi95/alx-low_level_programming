#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 * Description: a function that reverses a string
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char rev = s[0];
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
