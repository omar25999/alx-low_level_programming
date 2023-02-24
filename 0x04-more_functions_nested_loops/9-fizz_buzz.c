#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - printing fizz for 3 mult; Buzz for 5 mult
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <=100; x++)
	{
		if (x % 3 == 0)
		{	
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{	
			printf("Buzz");
		}
		else if (x % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{	
			printf("%d", x);
		}
		if (x != 0)
		{	
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}



