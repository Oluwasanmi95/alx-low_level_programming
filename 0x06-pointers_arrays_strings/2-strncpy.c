#include "main.h"

/**
 * _strncpy -  a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: limit of source string
 * Description: a function that copies a string
 * Return: address to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	for (; i < n; i++)
	{
		*dest = '\0';
		dest++;
	}
	return (start);
}
