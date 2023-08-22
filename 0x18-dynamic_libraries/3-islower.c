#include "main.h"
/**
  * _islower -  main function to print in lowercase
  *
  *@c: parameter to be tested
  *
  * Return: 1 is successful
  * and 0 otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
