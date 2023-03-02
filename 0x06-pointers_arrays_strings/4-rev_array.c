#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int k;
	int l;

	for (k = 0; k < n--; k++)
	{
		l = a[k];
		a[k] = a[n];
		a[n] = l;
	}
}

