

#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
