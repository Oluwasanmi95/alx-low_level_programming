#include "main.h"

/**
 * flip_bits - returns no of bit required to flip to another no
 * @n: 1st integer for bit operation
 * @m: Flipped integer for bit operation
 *
 * Return: integer equivalent of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num = 0;

	while (result)
	{
		num += result & 1;
		result >>= 1;
	}

	return (num);
}
