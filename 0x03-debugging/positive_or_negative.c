#include "main.h"

/**
  * positive_or_negative - test if positive or negative
  *
  * @i: is the number to be tested
  *
  * Return: 0
  */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
