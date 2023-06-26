#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Description: a function that swaps the values of two integers
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int swapa, swapb;

	swapa = *a;
	swapb = *b;
	*a = swapb;
	*b = swapa;
}
