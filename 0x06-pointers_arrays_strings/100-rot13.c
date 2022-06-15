#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes with a rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	char lt[] = {'a'
		, 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
			'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
			'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char rot[] = {'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int j = 0;
	int k = 0;

	while (s[k] != '\0')
	{
		while (lt[j] != '\0' && s[k] != lt[j])
		{
			j++;
		}
		if (s[k] == lt[j])
			s[k] = rot[j];

		j = 0;
		k++;
	}

	return (s);
}
