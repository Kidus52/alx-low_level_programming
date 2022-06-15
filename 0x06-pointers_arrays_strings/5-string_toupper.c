#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change to uppercase
 * @s: string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - ' ';
		}
		j++;
	}

	return (s);
}
