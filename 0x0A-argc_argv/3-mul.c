#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: counts the arguments
 * @argv: prints the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int k;
	int mult = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (k = 1; k < 3; k++)
	{
		mult *= atoi(argv[k]);
	}
	printf("%d\n", mult);
	}
	return (0);
}
