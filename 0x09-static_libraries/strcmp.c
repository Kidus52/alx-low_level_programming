#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares a string
 * @s1: string 1
 * @s2: string 2
 * Return: compared value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
		}
		else
		{
			return ((s1[i] - '\0') - (s2[i] - '\0'));
		}
		i++;
	}

	return (0);
}
