#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 * Description: Prototype: void print_alphabet(void);
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
