#include "main.h"
/**
 * jack_bauer - time
 * Return: Always 0
 */
void jack_bauer(void)
{
	int k;
	int h;

	for (k = 0; k < 24; k++)
	{
		for (h = 0; h < 60; h++)
		{	_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar('\n');
		}
	}
}


