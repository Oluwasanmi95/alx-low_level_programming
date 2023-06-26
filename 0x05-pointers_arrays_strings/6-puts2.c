#include "main.h"

/**
 * puts2 - function should print every other character
 * @str: string to be operated
 * Return: nothing
 */
void puts2(char *str)
{
	int count = 0;
	int i, n;
	char *s = str;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	n = count - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
