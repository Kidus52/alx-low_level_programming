#include "main.h"
#include <stdio.h>

/**
 * leet - change some letters with a number
 * @s: string
 * Return: changed string
 */

char *leet(char *s)
{
	char lt[] = {'a', 'e', 'o', 't', 'l'};
	char LT[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};
	int j = 0;
	int k = 0;

	while (s[k] != '\0')
	{
		while (j < 5)
		{
			if ((s[k] == lt[j]) || (s[k] == LT[j]))
			{
				s[k] = num[j];
			}
			j++;
		}
		j = 0;
		k++;
	}

	return (s);
}
