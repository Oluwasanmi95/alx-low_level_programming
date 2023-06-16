#include <stdio.h>

/**
 * main - Program prints each letter of alphabet,lower and upper case
 * Description: Program uses a for loop
 * Return: 0(Success)
 */
int main(void)
{
	int i;
	char a = 'a';
	char b = 'A';

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
