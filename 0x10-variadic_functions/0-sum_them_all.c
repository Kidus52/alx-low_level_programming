#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - find sum for unknown arguments
 * @n: numbers to add
 * Return: sum
 */
int sum_them_all(const unsigned int  n, ...)
{
	va_list vaList;
	unsigned int sum = 0, i = 0;

	if (n == 0)
		return (0);

	va_start(vaList, n);

	while (i < n)
	{
		sum += va_arg(vaList, int);
		i++;
	}
	va_end(vaList);

	return (sum);
}
