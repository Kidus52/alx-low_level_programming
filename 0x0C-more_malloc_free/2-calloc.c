#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates a memmory for an array
 * @nmemb: number of elements of the array
 * @size: size of each elements of the array
 * Return: pointer to the memory space for the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *sps;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sps = malloc(nmemb * size);
	if (sps == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)sps + i) = 0;

	return (sps);
}
