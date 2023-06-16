#include <stdio.h>


/**
 * main - Program prints each letter of alphabet
 * Description: Program uses a for loop
 * Return: 0(Success)
 */
int main(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
