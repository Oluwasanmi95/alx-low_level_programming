#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded
 * Description: encodes a string into 1337
 * Return: address of string
 */
char *leet(char *str)
{
char *ptr = str;
char *replacements = "aAeEoOtTlL";
char *encoded = "4433007711";

while (*ptr != '\0')
{
int i;
for (i = 0; replacements[i] != '\0'; i++)
{
if (*ptr == replacements[i] || *ptr == replacements[i] + 32)
{
*ptr = encoded[i];
break;
}
}
ptr++;
}
return (str);
}
