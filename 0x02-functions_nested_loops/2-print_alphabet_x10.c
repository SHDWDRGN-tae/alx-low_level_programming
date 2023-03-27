#include "main.h"

/**
  * print_alphabet_10x - print alphabet 10x in lowercase
  *
  * Return: always 0;
  */
void print_alphabet_10x(void)
{
	int i;
	char a;

	for  (i = 1 ; i <= 10 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
