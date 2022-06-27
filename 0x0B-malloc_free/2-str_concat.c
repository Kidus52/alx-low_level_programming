#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatinate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: duplicated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	p = malloc(sizeof(char) * (len1 + len2) + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	return (p);
}
