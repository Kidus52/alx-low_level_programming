#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with unknown argument
 * @separator: separator of strings
 * @n: strings to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i = 1;
	char *str;

	if (n > 0)
	{
		va_start(vaList, n);

		while (i <= n)
		{
			str = va_arg(vaList, char *);

			if (str == NULL)
				printf("(nil)");

			else
				printf("%s", str);

			if (i != n && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(vaList);
	}
	printf("\n");
}
