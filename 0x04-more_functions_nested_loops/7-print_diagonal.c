#include "main.h"
/**
  * print_diagonal - prints a diagonal line on the terminal
  *
  * @n: number of times \ is printed
  *
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}