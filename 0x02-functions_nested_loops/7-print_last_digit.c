#include "main.h"
/**
 * print_last_digit - func. which prints the last digit
 * @q: the number which operate with
 * Return: j
 */

int print_last_digit(int q)
{
	int j;

	j = q % 10;
	if (q < 0)
		j = -(j);
	_putchar(j + '0');
	return (j);
}


