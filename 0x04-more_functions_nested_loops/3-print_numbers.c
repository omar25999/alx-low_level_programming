#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int g;

	for (g = 0; g <= 9; g++)
		_putchar('0' + g);
	_putchar('\n');
}
