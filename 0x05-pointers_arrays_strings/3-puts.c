#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to be followed by new line
 * Description: prints a string, followed by a new line
 * Return: does not return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{

		_putchar(*str++);
	}
	_putchar('\n');
}
