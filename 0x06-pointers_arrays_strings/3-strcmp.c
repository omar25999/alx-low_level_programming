#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1: first parameter to be compared
 * @s2: second parameter to be compared
 * Return: s[1] - s[2]
 */

int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
