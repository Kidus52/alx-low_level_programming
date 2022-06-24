#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether the character is a number or not
 * @c: character to be checked
 * Return: returns 1 if c is digit else returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
