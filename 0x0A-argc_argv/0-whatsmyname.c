#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: preventing the effect of function
 * @argv: prints the arguments entered in terminal
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

