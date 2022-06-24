#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *mem = s;

	while (i < n)
	{
		mem[i] = b;
		i++;
	}

	return (mem);
}
