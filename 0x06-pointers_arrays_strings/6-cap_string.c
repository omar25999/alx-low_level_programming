#include "main.h"
#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @str: lower string to be capatilaized
 * Return: str
 */

char *cap_string(char *str)
{
	int k;

	k = 0;
	while (str[k])
	{
		while (!(str[k] >= 'a' && str[k] <= 'z'))
		if (str[k] - 1 == '\t' ||
				str[k] - 1 == '\n' ||
				str[k] - 1 == ',' ||
				str[k] - 1 == ' ' ||
				str[k] - 1 == ';' ||
				str[k] - 1 == '.' ||
				str[k] - 1 == '!' ||
				str[k] - 1 == '?' ||
				str[k] - 1 == '"' ||
				str[k] - 1 == '(' ||
				str[k] - 1 == ')' ||
				str[k] - 1 == '{' ||
				str[k] - 1 == '}' ||
				k == 0)
			str[k] -=  32;
	k++;
	}
	return (str);
}

