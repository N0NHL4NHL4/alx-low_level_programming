#include "main.h"
/**
  * puts2 - prints evey other character of a string but starts with first
  * character
  *
  * @str: the input string
  *
  * Return: (0)
  */
void puts2(char *str)
{
	if (str == NULL)
		return;

	for (int k = 0; str[k] != '\0'; k = k + 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
