#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of the string
 * @s: string
 * Return: length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - coppy a string
 * @dest: storing var
 * @src: string to be coppied
 * Return: coppied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
