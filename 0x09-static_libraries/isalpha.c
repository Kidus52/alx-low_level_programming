#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks whether the character is alphabet or not
 * @c: character to be checked
 * Return: returns 1 if it is alphabet and returns 0 else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
