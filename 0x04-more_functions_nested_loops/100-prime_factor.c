#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long k, bigpf;
	long number = 612852475143;
	double square = sqrt(number);

	for (k = 1; k <= square; k++)
	{
		if (number % k == 0)
		{
			bigpf = number / k;
		}
	}
	printf("%ld\n", bigpf);
	return (0);
}

