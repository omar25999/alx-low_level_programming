#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int x, y;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	x = y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	con = malloc(sizeof(char) * (x + y + 1));
	if (con == NULL)
		return (NULL);
	x = y = 0;

	while (s1[x] != '\0')
	{
		con[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		con[x] = s2[y];
		x++, y++;
	}
	con[x] = '\0';
	return (con);
}
