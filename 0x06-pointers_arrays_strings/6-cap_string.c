#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: string to be operated
 * Description: a function that capitalizes all words of a string
 * Return: address to str
 */
char *cap_string(char *str)
{
	int ctrl = 0;

	while (str[ctrl])
	{
	while (!(str[ctrl] >= 'a' && str[ctrl] <= 'z'))
	{
		ctrl++;
	}
	if (str[ctrl - 1] == ' ' ||
			str[ctrl - 1] == '\t' ||
			str[ctrl - 1] == '\n' ||
			str[ctrl - 1] == ',' ||
			str[ctrl - 1] == ';' ||
			str[ctrl - 1] == '.' ||
			str[ctrl - 1] == '!' ||
			str[ctrl - 1] == '?' ||
			str[ctrl - 1] == '"' ||
			str[ctrl - 1] == '(' ||
			str[ctrl - 1] == ')' ||
			str[ctrl - 1] == '{' ||
			str[ctrl - 1] == '}' ||
			ctrl == 0)
		str[ctrl] -= 32;
	ctrl++;
	}
	return (str);
}
