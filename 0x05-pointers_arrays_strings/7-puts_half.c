#include "main.h"
/**
  * puts_half - prints second half of string
  *
  * @str: the input string
  *
  * Return: (0)
  */
void puts_half(char *str)
{
	int strlen = 0;
	int halflen, k;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	halflen = (strlen - 1) / 2;

		for (k = (halflen + 1); k < strlen; k++)
		{
			_putchar(str[k]);
		}
}
