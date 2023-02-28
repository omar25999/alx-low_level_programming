#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: the string ro be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
