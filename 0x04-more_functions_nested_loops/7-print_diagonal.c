#include "main.h"
/**
 * print_diagonal - print diagonal related to n
 *
 * @n: number of diagonals
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int k, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (l = 0; l < k; l++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
