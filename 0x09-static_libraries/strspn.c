#include "main.h"

/**
 * _strspn - gets length of aprifix
 * @s: string
 * @accept: prefix
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (count);
		}
		i++;
	}

	return (count);
}
