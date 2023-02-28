#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: Always 0
 */

void rev_string(char *s)
{
	int k = 0,  l = 0;
	char t;

	while (s[l++])
	k++;
	for (l = k - 1; l >= k / 2; l--)
	{
		t = s[l];
		s[l] = s[k - l - 1];
		s[k - l - 1] = t;
	}
}
