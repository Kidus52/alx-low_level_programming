#include "main.h"
#include <unistd.h>
/**
 * _putchar - putchar
 * @c: the character given
 * Return: returns the character given
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
