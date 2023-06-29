#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 * @s: string to undergo operation
 * Description: changes lowercase letters of a string to uppercase.
 * Return: modified string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
	}
	return (s);
}
