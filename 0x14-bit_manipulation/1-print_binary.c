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
	unsigned long int mask = 1UL << (num_bits - 1);
	int print_flag = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			print_flag = 1;
			_putchar('1');
		}
		else if (print_flag)
		{
			_putchar('0');
		}

	mask >>= 1;
	}

	if (print_flag == 0)
	{
		_putchar('0');
	}
}
