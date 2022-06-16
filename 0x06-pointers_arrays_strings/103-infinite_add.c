#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_dig - number of digits in a number
 * @num: number
 * Return: number of digits
 */

int num_dig (long long int num)
{
	long long n = num;
	int count = 0;

	do {
		n /= 10;
		++count;
	} while (n != 0);
	return (count);
}

/**
 * _strlen - length of a string
 * @s: string
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_str - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */

char *rev_str(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}

	return (s);
}

/**
 * infinite_add - sum up two numbers
 * @n1: number1
 * @n2: number2
 * @r: stores the result
 * @size_r: buffer size
 * Return: changed string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long int num1 = atol(n1);
	unsigned long int num2 = atol(n2);

	unsigned long int sum = num1 + num2;

	int i = 0;

	while (i < num_dig(sum))
	{
		r[i] = (sum % 10) + '0';
		sum /= 10;
		i++;
	}
	if ((size_r + 1) >= strlen(r))
	{
		r = rev_str(r);
		return (r);
	}

	else
		return (0);
}
