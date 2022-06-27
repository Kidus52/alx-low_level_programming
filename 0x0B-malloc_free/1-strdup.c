#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicate
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	int  len = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	p = malloc(sizeof(char) * len + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
