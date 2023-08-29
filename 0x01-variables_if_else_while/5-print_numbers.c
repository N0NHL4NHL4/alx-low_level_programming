#include <stdio.h>
/**
  * main - prints all numbers with single digits of base 10 from 0
  *
  * Return: (0)
  *
  */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}
