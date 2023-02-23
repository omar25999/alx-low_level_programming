#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
int k;
int h;

for (h = 0; h <= 9; h++)
{
for (k = 0; k <= 14; k++)
{
if (k > 9)
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
