#include "main.h"

/**
  * swap_int - value to be swaped
  *
  * @a: parameter to be swaped
  *
  * @b: parameter to be swaped
  *
  * Return: always 0
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
