#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first parameter to inter
 * @b: second parameter to inter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;

}
