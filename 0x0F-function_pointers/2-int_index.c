#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index-searches an integer
 * @array: array
 * @size: size of an array
 * @cmp: function used to compare numbers
 * Return: index where the integer is found, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(*(array + i));

			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1);
}
