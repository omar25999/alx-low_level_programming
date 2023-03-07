#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer to arrays
 * @size: size of array
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int k, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		sum2 = sum2 + a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
