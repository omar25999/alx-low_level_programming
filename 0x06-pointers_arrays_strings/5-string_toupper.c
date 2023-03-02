#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that changes all lowercase of string to uppercase
 * @w: string to be changed
 * Return: w
 */

char *string_toupper(char *w)
{
	int k;

	k = 0;
	while (w[k] != '\0')
	{
		if (w[k] >= 'a' && w[k] <= 'z')
			w[k] = w[k] - 32;
		k++;
	}
	return (w);
}
