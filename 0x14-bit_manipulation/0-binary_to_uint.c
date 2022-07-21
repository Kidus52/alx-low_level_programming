#include "main.h"

/**
 * _len - finds length of the string given
 * @s: string given
 * Return: length of a  string
 */
int _len(const char *s)
{
	int count = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		count++;
		j++;
	}
	return (count);
}

/**
 * binary_to_uint - changes a binary to  unsigned int
 * @b: the given binary
 * Return: unsigned int for  succes 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _len(b) - 1;
	int i = 0;
	unsigned int uint = 0;

	if (b == NULL)
		return (uint);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			uint += (1 * (1 << len));
		i++;
		len--;
	}
	return (uint);
}
