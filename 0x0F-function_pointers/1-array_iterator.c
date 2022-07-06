#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a functions of array
 * @array: array
 * @size: size of an array
 * @action: pointer of the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0; /* maching data type of i with size*/

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
