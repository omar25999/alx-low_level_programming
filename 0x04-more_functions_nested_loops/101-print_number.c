#include "main.h"
#include <stdio.h>
/**
 * main - print number
 * @n: parameter to be printed
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int p = n;

	if (n < 0)
	{
		n *= -1;
		p = n;
	_putchar('-');
	}
	p /= 10;
	if (p != 0)
	print_number(p);
	_putchar((unsigned int) n % 10 + '0');
}
