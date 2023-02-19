#include <stdio.h>
/**
 * main - two combination
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 90; n++)
	{
		putchar(n % 10);
		if (n < 10)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n % 100);
	}
	putchar('\n');
	return (0);

}



