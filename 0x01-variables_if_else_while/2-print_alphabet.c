#include <stdio.h>
/**
  * main - a function that prints an alphabet in lowercase
  *
  * Return: Always (0)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
