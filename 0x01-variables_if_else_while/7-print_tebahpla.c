#include <stdio.h>

/**
 * main - Program prints each letter of alphabe backwards from z
 * Description: Program uses a for loop
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	char a = 'z';

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
