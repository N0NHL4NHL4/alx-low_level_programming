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
	int strlen;

	if (str[strlen] % 2 == 0)
	{
		for (int k = str[strlen] / 2; k < str[strlen]; k++)
		{
			_putchar(str[k]);
		}
	}
		else if (str[strlen] % 2 != 0)
		{
			for (int k = (str[strlen] - 1) / 2; k < str[strlen];
					k++)
			{
				_putchar(str[k]);
			}
		}
		_putchar('\n');
}
