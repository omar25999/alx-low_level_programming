#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area which copied taken to it
 * @src: memory to be copied
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int k = n;

	for (x = 0; x < k; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
