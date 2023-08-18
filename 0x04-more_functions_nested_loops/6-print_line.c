#include "main.h"
/**
  * print_line - prints out a straight line
  *
  * @n: number of times _ is printed
  *
  */
void print_line(int n)
{
	int i;

	for (i = 0, i < n; i++;)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
}
