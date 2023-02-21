#include "main.h"
/**
 * _abs - checks for absolute value
 * @d: paramter to be checked
 * Return: a
 */
int _abs(int d)
{
	if (d < 0)
		d = -(d);
	else if (d >= 0)
		d = d;
	return (d);
}

