#include "main.h"
/**
  * _puts - prints a string and new line in stdout
  *
  * @str: prints string
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
