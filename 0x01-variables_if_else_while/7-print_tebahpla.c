#include <stdio.h>
/**
 * main - reverse alpha
 * Return: Always 0
 */
int main(void)
{
	char lcr;

	for (lcr = 'z'; lcr >= 'a'; lcr--)
		putchar(lcr);
	putchar('\n');
	return (0);
}

