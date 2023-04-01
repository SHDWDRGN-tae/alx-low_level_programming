#include "main.h"

/**
  * rot13 - encodes a string
  * @str: parametter to be encoded
  *
  * Return: str
  */

char *rot13(char *str)
{
	int i, g;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (g = 0 ; g < 52 ; g++)
		{
			if (str[i] == alphabet[g])
			{
				str[i] = rot13key[g];
				break;
			}
		}
	}
	return (str);
}
