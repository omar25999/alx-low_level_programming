#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: unsigned int
 * Return: n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
