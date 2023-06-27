#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints elements of an array
 * @a: address to first element
 * @n: total number of elements in the array to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

