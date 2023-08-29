#include <stdio.h>
/**
  * main - prints all possible combinations of two single-digit numbers
  *
  * Return: (0)
  */
int main(void)
{
	int i;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (k = i + 1; k <= 9; k++)
		{
			putchar(i + '0');
			putchar(k + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
