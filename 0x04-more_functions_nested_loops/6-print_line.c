#include "main.h"
/**
 * print_line - print line
 *
 * @n: prarmeter
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar ('-');
		}
	_putchar ('\n');
	}
}
