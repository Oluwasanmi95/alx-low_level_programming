#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	char n = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(n);
		n++;
	}
	putchar(\n);
	return (0);
}
