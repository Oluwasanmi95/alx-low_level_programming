#include <unistd.h>
#include <string.h>
/**
 * main - Prints a string to the standard error
 * Return: 1 (Success)
 */
int main(void)
{
	char *word = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, word, strlen(message));
	return (1);
}
