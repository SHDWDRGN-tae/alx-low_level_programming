#include "main.h"

/**
  * rev_string - reverse array
  * @n: integer parameter
  * Return: always 0
  */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0 ; j < i ; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
  * infinite_add - function that adds two number stored
  * in strings to a buffer
  * Assumes that strings are never empty and
  * that numbers will always be positive or 0
  * Assumes there are onlyy numbers
  * if resu;t can be stored in the buffer
  * returns a pointer to the result
  * if result cannot be stored in the buffer, returns '0'
  * @n1: first parameter to be input
  * @n2: second parameter to be input
  * @r: store result in
  * @size_r: size of butter
  * Return: return pointer to result
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
