#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string 1 for comparison
 * @s2: string 2 for comparison
 * Description: a function that compares two strings
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
		return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
