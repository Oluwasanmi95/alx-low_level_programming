#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i + '0'));
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
