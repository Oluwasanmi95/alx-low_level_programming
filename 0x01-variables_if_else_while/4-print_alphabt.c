#include <stdio.h>

/**
 * main - Program prints each letter of alphabet except e & q
 * Program uses a for loop
 * Return: 0(Success)
 */
int main(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (a == 'e' || a == 'q')
		{
		a++;
		continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

