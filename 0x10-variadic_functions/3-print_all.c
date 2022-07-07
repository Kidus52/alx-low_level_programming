#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - prints integer
 * @vaList: valist
 * Return: void
 */
void print_int(va_list vaList)
{
	printf("%d", va_arg(vaList, int));
}

/**
 * print_char - prints char
 * @vaList: valist
 * Return: void
 */
void print_char(va_list vaList)
{
	printf("%c", va_arg(vaList, int));
}

/**
 * print_float - prints a data type float
 * @vaList: valist
 * Return: void
 */
void print_float(va_list vaList)
{
	printf("%f", va_arg(vaList, double));
}

/**
 * print_string - prints a string
 * @vaList: valist
 * Return: void
 */
void print_string(va_list vaList)
{
	char *str;

	str = va_arg(vaList, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all data types
 * @format: an array which determines the data type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j = 0;
	va_list vaList;

	datatype format_choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};

	va_start(vaList, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (format_choice[i].cc != '\0')
		{
			if (format_choice[i].cc == format[j])
			{
				printf("%s", separator);
				format_choice[i].f(vaList);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(vaList);
	printf("\n");
}
