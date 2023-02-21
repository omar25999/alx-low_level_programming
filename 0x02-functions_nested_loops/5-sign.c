#include "main.h"
/**
 * print_sign - function which prints sign of a number
 *
 * @n: variable prints the sign of a number
 *
 * Return: 0,1 and -1
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{	_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
