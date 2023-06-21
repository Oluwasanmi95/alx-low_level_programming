#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: digit to be evaluated
 * Description: prints last digit of a number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int num;
	int conv;

	if (n >= 0)
	{
	num = n % 10;
	_putchar(num + '0');
	}
	else
	{
	conv = n * -1;
	num = conv % 10;
	_putchar(num + '0');
	}
	return (num);
}
