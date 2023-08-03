#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: given index
 *
 * Return: value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1UL << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	if ((n & temp) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
