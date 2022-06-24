#include "main.h"
#define NULL 0

/**
 * _strchr - find a char from a string
 * @s: string
 * @c: character to be find
 * Return: char found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);

}
