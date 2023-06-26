#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String to be printed in reverse
 * Description: prints a string, in reverse, followed by a new line
 * Return: nothing
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (i = count; i >= 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
