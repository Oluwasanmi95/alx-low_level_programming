#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 * Destination: a function that concatenates two strings
 * Return: returns address to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
		{
		continue;
		}
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
