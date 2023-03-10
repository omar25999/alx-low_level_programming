#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argv: prints the arguments entered in terminal
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}

