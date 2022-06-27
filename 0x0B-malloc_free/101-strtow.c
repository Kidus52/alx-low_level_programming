#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - split a string in to words
 * @str: string to be splited
 * Return: splited words
 */

char **strtow(char *str)
{
	int i = 0, j = 0, len = 0, k = 0;
	char **p;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	if (len == 0)
		return (NULL);
	if (str[0] == ' ' && len == 1)
		return (NULL);
	p = malloc(sizeof(char *) * (len));
	if (p == NULL)
		return (NULL);
	while (str[k] != '\0')
	{
		p[k] = malloc(sizeof(char) * len);
		if (str[k] == ' ' ||  str[k] == '\0')
		{
			if (str[k + 1] != ' ')
			{
				p[j][i] = '\0';
				j++;
				i = 0;
			}
			else
				return (NULL);
		}
		else
		{
			p[j][i] = str[k];
			i++;
		}
		free(p[k]);
		k++;
	}
	free(p);
	return (p);
}
