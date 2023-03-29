#include "main.h"

/**
  * puts2 - to be printed in string
  *
  * @str: parameter to printed
  *
  * Return: always 0
  */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
