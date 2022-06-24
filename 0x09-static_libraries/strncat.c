#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings with n characters from the second string
 * @dest: string 1
 * @src: string 2
 * @n: number of character to be appended
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j <= (n - 1)))
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
