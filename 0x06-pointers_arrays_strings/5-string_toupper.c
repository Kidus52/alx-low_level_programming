#include "main.h"
#include <stdio.h>

/**
 * cap_string - change to starting letter to uppercase
 * @s: string
 * Return: uppercase string
 */

char *cap_string(char *s)
{
	int j = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ' ';
	}
	j++;
	while (s[j] != '\0')
	{
		if (s[j - 1] >= '\t' && s[j - 1] != '-' && s[j - 1] <= '.')
		{
			if (s[j] >= 'a' && s[j] <= 'z')
			{
				s[j] = s[j] - ' ';
			}
		}
		j++;
	}

	return (s);
}
