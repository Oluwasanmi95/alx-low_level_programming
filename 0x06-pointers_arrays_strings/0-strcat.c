#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * Description: concatenates two strings
 * Return: returns address of dest string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (start);
}
