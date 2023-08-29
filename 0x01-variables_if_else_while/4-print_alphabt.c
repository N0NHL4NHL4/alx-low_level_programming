#include <stdio.h>
/**
  * main - a function that prints alphabets in lowercase except 'q' and 'e'
  *
  * Return: Always (0)
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
