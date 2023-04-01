#include "main.h"

/**
  * leet - encodes a string into 1337
  * @str: parameter to be input
  *
  * Return: str
  */

char *leet(char *str)
{
	int i = 0, j;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++i])
	{
		for (j = 0 ; j < 7 ; j++)
		{
			if (str[i] == leet[j] ||
			str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
	}
	return (str);
}
