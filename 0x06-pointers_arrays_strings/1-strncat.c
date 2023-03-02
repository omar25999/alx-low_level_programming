#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: parameter to be appended
 * @src: parameter to append
 * @n: max. bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

