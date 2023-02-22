#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - fun prints natural num.
 *
 * @n: function parameter
 * Return: Always 0
 */

void print_to_98(int n)
{
	int y;

	if (n > 0 && n <= 98)
	{
		for (y = n; y <= 98; y++)
		{
			printf("%d, ", y);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (y = n; n <= 98; n++)
		{
			printf("%d, ", y);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (y = n; y >= 98 ; y--)
		{
			printf("%d, ", y);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
