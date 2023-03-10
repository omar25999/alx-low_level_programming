#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: counts arguments
 * @argv: prints arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int k;
	int sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (k = 0; k < argc; k++)
		{
			sum += atoi(argv[k]);
		}
	printf("%d\n", sum);
	}
	return (0);
}

