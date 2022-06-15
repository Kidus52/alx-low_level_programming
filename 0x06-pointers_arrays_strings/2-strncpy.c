#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string
* @dest: string 1
* @src: string 2
* @n: number of character to be copied
* Return: concatenated string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while ((src[j] != '\0') && (j <= (n - 1)))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
