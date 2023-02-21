#include "main.h"
/**
 * _islower - fuction returns 1 if equal to c
 *@c: parameter to be printed
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

