#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: counts the number of arguments
 * @argv: prevent its effect
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
