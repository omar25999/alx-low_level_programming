#include "main.h"
/**
 * print_alphabet_x10 - function which prints alphabets 10 times of alphabets
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char h;
	int p;

	for (p = 1; p <= 10; p++)
	{
		for (h = 'a'; h <= 'z'; h++)
			_putchar(h);
		_putchar('\n');
	}
}
