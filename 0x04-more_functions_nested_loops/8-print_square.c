#include "main.h"
/**
 * print_square - func. prints a square, followed by a new line
 *
 * @size: parameter to be entered
 * Return: Always 0
 */

void print_square(int size)
{
	int k;
	int p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}


