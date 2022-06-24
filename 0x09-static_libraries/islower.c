#include "main.h"
#include <stdio.h>

/**
 * _islower - checks whether the character is lower or upper case
 * @c: character to be checked
 * Return: returns 1 if it is lowercase and returns 0 else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
