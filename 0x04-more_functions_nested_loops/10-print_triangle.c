#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by newline
 *
 * @size: the size of triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
}
