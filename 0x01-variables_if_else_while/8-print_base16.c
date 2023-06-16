#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Description: prints all numbers of base 16 in lowercase
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	char a = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar((i + 'o'));
	}
	for (i = 0; i < 6; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
