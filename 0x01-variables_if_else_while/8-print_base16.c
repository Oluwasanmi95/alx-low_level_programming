i#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0(Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i + 'x'));
	}
	putchar('\n');
	return (0);
}