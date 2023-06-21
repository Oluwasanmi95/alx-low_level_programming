#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: argument to be converted
 * Description: converts argument to its ascii sign
 * Return: 1 if positive,0 if 0,-1 if negative
 */
int print_sign(int n)
{
	int flag;

	if (n > 0)
	{
	_putchar('+');
	flag = 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	flag = 0;
	}
	else if (n < 0)
	{
	_putchar('-');
	flag = 0 - 1;
	}
	return (flag);
}
