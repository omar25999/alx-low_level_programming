#include "main.h"
/**
 * _atoi - unction that convert a string to an integer
 * @s: the pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
	int k = 0;
	unsigned int y = 0;
	int min = 1;
	int isi = 0;

	while (s[k])
	{
		if (s[k] == 45)
		{
			min *= -1;
		}
		while (s[k] >= 48 && s[k] <= 57)
		{
			isi = 1;
			y = (y * 10) + (s[k] - '0');
			k++;
		}
		if (isi == 1)
		{
			break;
		}
		k++;
	}
	y *= min;
	return (y);
}

