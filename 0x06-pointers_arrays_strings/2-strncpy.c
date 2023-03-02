#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: max.number of perrimeted bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

