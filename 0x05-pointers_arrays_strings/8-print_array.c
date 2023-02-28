#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: array tobe printed
 * @n: is the number of elements of the array to be printed
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

