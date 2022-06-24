#include "main.h"

/**
 * _memcpy - coppy memory address from src to dest
 * @dest: memory to coppy
 * @src: memory to be coppied
 * @n: number of bytes
 * Return: coppied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
