#include "main.h"
/**
 * print_diagonal - printing diagonals sep
 *
 * @n: number of diagonals
 * Return: Always 0
 */

void print_diagonal(int n)
{
int j, h;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (h = 0; h < j; h++)
{
_putchar ('\\');
}
_putchar (' ');
_putchar ('\n');
}
}
}

