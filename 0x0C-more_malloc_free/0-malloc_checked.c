#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - reserves place for amount of b
 * @b: amount of memory to be reserved
 * Return: pointer to the memory space
 */

void *malloc_checked(unsigned int b)
{
	void *sps;

	sps = malloc(b);
	if (sps == NULL)
	{
		exit(98);
	}

	return (sps);
}
