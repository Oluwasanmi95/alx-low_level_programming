#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(n) * 8;
	unsigned long int temp = 1UL << (num_bits - 1);
	int print = 0;

	while (temp > 0)
	{
		if ((n & temp) != 0)
		{
			print = 1;
			_putchar('1');
		}
		else if (print)
		{
			_putchar('0');
		}

	temp >>= 1;
	}

	if (print == 0)
	{
		_putchar('0');
	}
}
