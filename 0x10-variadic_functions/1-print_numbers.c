#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with unknown argument
 * @separator: separator of numbers
 * @n: numbers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i = 1;

	if (n > 0)
	{
		va_start(vaList, n);

		while (i <= n)
		{
			printf("%d", va_arg(vaList, int));

			if (i != n && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(vaList);
	}
	printf("\n");
}
