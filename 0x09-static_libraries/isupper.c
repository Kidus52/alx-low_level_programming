#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks whether the character is uppercase or not
 * @c: character to be checked
 * Return: returns 1 if c is uppercse else returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
