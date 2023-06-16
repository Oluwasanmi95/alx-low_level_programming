#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	int a = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
