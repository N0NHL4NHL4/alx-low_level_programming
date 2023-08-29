#include <stdio.h>
/**
  * main - prints single number digits of base 10 startingfrom 0
  *
  * Return: (0)
  */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
