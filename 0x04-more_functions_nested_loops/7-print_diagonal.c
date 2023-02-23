#include "main.h"
/**
 * print_diagonal - print diagonal related to n
 *
 * @n: number of diagonals
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar ('\\');
		_putchar (' ');
		_putchar ('\n');
	}
	_putchar ('\n');
}
