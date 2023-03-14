#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: specific character to initialize with
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		s[k] = c;
	return (s);
}


