#include <stdio.h>
/**
  * main - prints all combinations of three single-digit numbers
  *
  * Return: (0)
  */
int main(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (k = i + 1; k <= 9; k++)
		{
			for (j = k + 1; j <= 9; j++)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(j + '0');

				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
